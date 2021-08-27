/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Source.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace SourceMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int DATA_CATALOG_HASH = HashingUtils::HashString("DATA-CATALOG");


        Source GetSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return Source::S3;
          }
          else if (hashCode == DATA_CATALOG_HASH)
          {
            return Source::DATA_CATALOG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Source>(hashCode);
          }

          return Source::NOT_SET;
        }

        Aws::String GetNameForSource(Source enumValue)
        {
          switch(enumValue)
          {
          case Source::S3:
            return "S3";
          case Source::DATA_CATALOG:
            return "DATA-CATALOG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
