/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SnowflakeDataLoadingOption.h>
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
      namespace SnowflakeDataLoadingOptionMapper
      {

        static const int JSON_MAPPING_HASH = HashingUtils::HashString("JSON_MAPPING");
        static const int VARIANT_CONTENT_MAPPING_HASH = HashingUtils::HashString("VARIANT_CONTENT_MAPPING");
        static const int VARIANT_CONTENT_AND_METADATA_MAPPING_HASH = HashingUtils::HashString("VARIANT_CONTENT_AND_METADATA_MAPPING");


        SnowflakeDataLoadingOption GetSnowflakeDataLoadingOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_MAPPING_HASH)
          {
            return SnowflakeDataLoadingOption::JSON_MAPPING;
          }
          else if (hashCode == VARIANT_CONTENT_MAPPING_HASH)
          {
            return SnowflakeDataLoadingOption::VARIANT_CONTENT_MAPPING;
          }
          else if (hashCode == VARIANT_CONTENT_AND_METADATA_MAPPING_HASH)
          {
            return SnowflakeDataLoadingOption::VARIANT_CONTENT_AND_METADATA_MAPPING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowflakeDataLoadingOption>(hashCode);
          }

          return SnowflakeDataLoadingOption::NOT_SET;
        }

        Aws::String GetNameForSnowflakeDataLoadingOption(SnowflakeDataLoadingOption enumValue)
        {
          switch(enumValue)
          {
          case SnowflakeDataLoadingOption::NOT_SET:
            return {};
          case SnowflakeDataLoadingOption::JSON_MAPPING:
            return "JSON_MAPPING";
          case SnowflakeDataLoadingOption::VARIANT_CONTENT_MAPPING:
            return "VARIANT_CONTENT_MAPPING";
          case SnowflakeDataLoadingOption::VARIANT_CONTENT_AND_METADATA_MAPPING:
            return "VARIANT_CONTENT_AND_METADATA_MAPPING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnowflakeDataLoadingOptionMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
