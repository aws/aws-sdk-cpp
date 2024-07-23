/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaConfiguration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace SchemaConfigurationMapper
      {

        static const int DIFFERENTIAL_PRIVACY_HASH = HashingUtils::HashString("DIFFERENTIAL_PRIVACY");
        static const int CUSTOM_ANALYSIS_NOT_ALLOWED_HASH = HashingUtils::HashString("CUSTOM_ANALYSIS_NOT_ALLOWED");
        static const int NO_MEMBER_ACCOUNT_ALLOWED_TO_PROVIDE_ANALYSIS_HASH = HashingUtils::HashString("NO_MEMBER_ACCOUNT_ALLOWED_TO_PROVIDE_ANALYSIS");
        static const int DIFFERENTIAL_PRIVACY_BUDGET_NOT_CONFIGURED_HASH = HashingUtils::HashString("DIFFERENTIAL_PRIVACY_BUDGET_NOT_CONFIGURED");
        static const int ID_MAPPING_TABLE_NOT_POPULATED_HASH = HashingUtils::HashString("ID_MAPPING_TABLE_NOT_POPULATED");


        SchemaConfiguration GetSchemaConfigurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIFFERENTIAL_PRIVACY_HASH)
          {
            return SchemaConfiguration::DIFFERENTIAL_PRIVACY;
          }
          else if (hashCode == CUSTOM_ANALYSIS_NOT_ALLOWED_HASH)
          {
            return SchemaConfiguration::CUSTOM_ANALYSIS_NOT_ALLOWED;
          }
          else if (hashCode == NO_MEMBER_ACCOUNT_ALLOWED_TO_PROVIDE_ANALYSIS_HASH)
          {
            return SchemaConfiguration::NO_MEMBER_ACCOUNT_ALLOWED_TO_PROVIDE_ANALYSIS;
          }
          else if (hashCode == DIFFERENTIAL_PRIVACY_BUDGET_NOT_CONFIGURED_HASH)
          {
            return SchemaConfiguration::DIFFERENTIAL_PRIVACY_BUDGET_NOT_CONFIGURED;
          }
          else if (hashCode == ID_MAPPING_TABLE_NOT_POPULATED_HASH)
          {
            return SchemaConfiguration::ID_MAPPING_TABLE_NOT_POPULATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SchemaConfiguration>(hashCode);
          }

          return SchemaConfiguration::NOT_SET;
        }

        Aws::String GetNameForSchemaConfiguration(SchemaConfiguration enumValue)
        {
          switch(enumValue)
          {
          case SchemaConfiguration::NOT_SET:
            return {};
          case SchemaConfiguration::DIFFERENTIAL_PRIVACY:
            return "DIFFERENTIAL_PRIVACY";
          case SchemaConfiguration::CUSTOM_ANALYSIS_NOT_ALLOWED:
            return "CUSTOM_ANALYSIS_NOT_ALLOWED";
          case SchemaConfiguration::NO_MEMBER_ACCOUNT_ALLOWED_TO_PROVIDE_ANALYSIS:
            return "NO_MEMBER_ACCOUNT_ALLOWED_TO_PROVIDE_ANALYSIS";
          case SchemaConfiguration::DIFFERENTIAL_PRIVACY_BUDGET_NOT_CONFIGURED:
            return "DIFFERENTIAL_PRIVACY_BUDGET_NOT_CONFIGURED";
          case SchemaConfiguration::ID_MAPPING_TABLE_NOT_POPULATED:
            return "ID_MAPPING_TABLE_NOT_POPULATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SchemaConfigurationMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
