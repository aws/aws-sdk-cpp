/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/OrganizationResourceStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace OrganizationResourceStatusMapper
      {

        static const int CREATE_SUCCESSFUL_HASH = HashingUtils::HashString("CREATE_SUCCESSFUL");
        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_SUCCESSFUL_HASH = HashingUtils::HashString("DELETE_SUCCESSFUL");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int UPDATE_SUCCESSFUL_HASH = HashingUtils::HashString("UPDATE_SUCCESSFUL");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        OrganizationResourceStatus GetOrganizationResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_SUCCESSFUL_HASH)
          {
            return OrganizationResourceStatus::CREATE_SUCCESSFUL;
          }
          else if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return OrganizationResourceStatus::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return OrganizationResourceStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETE_SUCCESSFUL_HASH)
          {
            return OrganizationResourceStatus::DELETE_SUCCESSFUL;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return OrganizationResourceStatus::DELETE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return OrganizationResourceStatus::DELETE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_SUCCESSFUL_HASH)
          {
            return OrganizationResourceStatus::UPDATE_SUCCESSFUL;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return OrganizationResourceStatus::UPDATE_IN_PROGRESS;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return OrganizationResourceStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationResourceStatus>(hashCode);
          }

          return OrganizationResourceStatus::NOT_SET;
        }

        Aws::String GetNameForOrganizationResourceStatus(OrganizationResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case OrganizationResourceStatus::CREATE_SUCCESSFUL:
            return "CREATE_SUCCESSFUL";
          case OrganizationResourceStatus::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case OrganizationResourceStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case OrganizationResourceStatus::DELETE_SUCCESSFUL:
            return "DELETE_SUCCESSFUL";
          case OrganizationResourceStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          case OrganizationResourceStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case OrganizationResourceStatus::UPDATE_SUCCESSFUL:
            return "UPDATE_SUCCESSFUL";
          case OrganizationResourceStatus::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          case OrganizationResourceStatus::UPDATE_FAILED:
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

      } // namespace OrganizationResourceStatusMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
