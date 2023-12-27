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

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int CREATION_FAILED_HASH = HashingUtils::HashString("CREATION_FAILED");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        AlertManagerDefinitionStatusCode GetAlertManagerDefinitionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
