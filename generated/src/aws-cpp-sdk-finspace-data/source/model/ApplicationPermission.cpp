/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ApplicationPermission.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ApplicationPermissionMapper
      {

        static constexpr uint32_t CreateDataset_HASH = ConstExprHashingUtils::HashString("CreateDataset");
        static constexpr uint32_t ManageClusters_HASH = ConstExprHashingUtils::HashString("ManageClusters");
        static constexpr uint32_t ManageUsersAndGroups_HASH = ConstExprHashingUtils::HashString("ManageUsersAndGroups");
        static constexpr uint32_t ManageAttributeSets_HASH = ConstExprHashingUtils::HashString("ManageAttributeSets");
        static constexpr uint32_t ViewAuditData_HASH = ConstExprHashingUtils::HashString("ViewAuditData");
        static constexpr uint32_t AccessNotebooks_HASH = ConstExprHashingUtils::HashString("AccessNotebooks");
        static constexpr uint32_t GetTemporaryCredentials_HASH = ConstExprHashingUtils::HashString("GetTemporaryCredentials");


        ApplicationPermission GetApplicationPermissionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreateDataset_HASH)
          {
            return ApplicationPermission::CreateDataset;
          }
          else if (hashCode == ManageClusters_HASH)
          {
            return ApplicationPermission::ManageClusters;
          }
          else if (hashCode == ManageUsersAndGroups_HASH)
          {
            return ApplicationPermission::ManageUsersAndGroups;
          }
          else if (hashCode == ManageAttributeSets_HASH)
          {
            return ApplicationPermission::ManageAttributeSets;
          }
          else if (hashCode == ViewAuditData_HASH)
          {
            return ApplicationPermission::ViewAuditData;
          }
          else if (hashCode == AccessNotebooks_HASH)
          {
            return ApplicationPermission::AccessNotebooks;
          }
          else if (hashCode == GetTemporaryCredentials_HASH)
          {
            return ApplicationPermission::GetTemporaryCredentials;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationPermission>(hashCode);
          }

          return ApplicationPermission::NOT_SET;
        }

        Aws::String GetNameForApplicationPermission(ApplicationPermission enumValue)
        {
          switch(enumValue)
          {
          case ApplicationPermission::NOT_SET:
            return {};
          case ApplicationPermission::CreateDataset:
            return "CreateDataset";
          case ApplicationPermission::ManageClusters:
            return "ManageClusters";
          case ApplicationPermission::ManageUsersAndGroups:
            return "ManageUsersAndGroups";
          case ApplicationPermission::ManageAttributeSets:
            return "ManageAttributeSets";
          case ApplicationPermission::ViewAuditData:
            return "ViewAuditData";
          case ApplicationPermission::AccessNotebooks:
            return "AccessNotebooks";
          case ApplicationPermission::GetTemporaryCredentials:
            return "GetTemporaryCredentials";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationPermissionMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
