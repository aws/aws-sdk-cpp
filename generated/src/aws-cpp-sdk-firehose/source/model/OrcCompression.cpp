/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/OrcCompression.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace OrcCompressionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int ZLIB_HASH = HashingUtils::HashString("ZLIB");
        static const int SNAPPY_HASH = HashingUtils::HashString("SNAPPY");


        OrcCompression GetOrcCompressionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return OrcCompression::NONE;
          }
          else if (hashCode == ZLIB_HASH)
          {
            return OrcCompression::ZLIB;
          }
          else if (hashCode == SNAPPY_HASH)
          {
            return OrcCompression::SNAPPY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrcCompression>(hashCode);
          }

          return OrcCompression::NOT_SET;
        }

        Aws::String GetNameForOrcCompression(OrcCompression enumValue)
        {
          switch(enumValue)
          {
          case OrcCompression::NONE:
            return "NONE";
          case OrcCompression::ZLIB:
            return "ZLIB";
          case OrcCompression::SNAPPY:
            return "SNAPPY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrcCompressionMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
