/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/SourceUrlType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace SourceUrlTypeMapper
      {

        static const int ZIP_HASH = HashingUtils::HashString("ZIP");
        static const int BUCKET_PREFIX_HASH = HashingUtils::HashString("BUCKET_PREFIX");


        SourceUrlType GetSourceUrlTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ZIP_HASH)
          {
            return SourceUrlType::ZIP;
          }
          else if (hashCode == BUCKET_PREFIX_HASH)
          {
            return SourceUrlType::BUCKET_PREFIX;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SourceUrlType>(hashCode);
          }

          return SourceUrlType::NOT_SET;
        }

        Aws::String GetNameForSourceUrlType(SourceUrlType enumValue)
        {
          switch(enumValue)
          {
          case SourceUrlType::NOT_SET:
            return {};
          case SourceUrlType::ZIP:
            return "ZIP";
          case SourceUrlType::BUCKET_PREFIX:
            return "BUCKET_PREFIX";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SourceUrlTypeMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
