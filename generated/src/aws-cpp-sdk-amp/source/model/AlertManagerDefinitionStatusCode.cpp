/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/AlertManagerDefinitionStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PrometheusService
  {
    namespace Model
    {
      namespace AlertManagerDefinitionStatusCodeMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t CREATION_FAILED_HASH = ConstExprHashingUtils::HashString("CREATION_FAILED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");


        AlertManagerDefinitionStatusCode GetAlertManagerDefinitionStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AlertManagerDefinitionStatusCode::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return AlertManagerDefinitionStatusCode::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AlertManagerDefinitionStatusCode::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AlertManagerDefinitionStatusCode::DELETING;
          }
          else if (hashCode == CREATION_FAILED_HASH)
          {
            return AlertManagerDefinitionStatusCode::CREATION_FAILED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return AlertManagerDefinitionStatusCode::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlertManagerDefinitionStatusCode>(hashCode);
          }

          return AlertManagerDefinitionStatusCode::NOT_SET;
        }

        Aws::String GetNameForAlertManagerDefinitionStatusCode(AlertManagerDefinitionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case AlertManagerDefinitionStatusCode::NOT_SET:
            return {};
          case AlertManagerDefinitionStatusCode::CREATING:
            return "CREATING";
          case AlertManagerDefinitionStatusCode::ACTIVE:
            return "ACTIVE";
          case AlertManagerDefinitionStatusCode::UPDATING:
            return "UPDATING";
          case AlertManagerDefinitionStatusCode::DELETING:
            return "DELETING";
          case AlertManagerDefinitionStatusCode::CREATION_FAILED:
            return "CREATION_FAILED";
          case AlertManagerDefinitionStatusCode::UPDATE_FAILED:
            return "UPDATE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlertManagerDefinitionStatusCodeMapper
    } // namespace Model
  } // namespace PrometheusService
} // namespace Aws
