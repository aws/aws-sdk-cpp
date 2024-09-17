/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/MetadataConfigurationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace MetadataConfigurationModeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int USER_PROVISIONED_HASH = HashingUtils::HashString("USER_PROVISIONED");


        MetadataConfigurationMode GetMetadataConfigurationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return MetadataConfigurationMode::AUTOMATIC;
          }
          else if (hashCode == USER_PROVISIONED_HASH)
          {
            return MetadataConfigurationMode::USER_PROVISIONED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetadataConfigurationMode>(hashCode);
          }

          return MetadataConfigurationMode::NOT_SET;
        }

        Aws::String GetNameForMetadataConfigurationMode(MetadataConfigurationMode enumValue)
        {
          switch(enumValue)
          {
          case MetadataConfigurationMode::NOT_SET:
            return {};
          case MetadataConfigurationMode::AUTOMATIC:
            return "AUTOMATIC";
          case MetadataConfigurationMode::USER_PROVISIONED:
            return "USER_PROVISIONED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetadataConfigurationModeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
