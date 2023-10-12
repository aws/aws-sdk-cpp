/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/PrivateConnectionProvisioningStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace PrivateConnectionProvisioningStatusMapper
      {

        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");


        PrivateConnectionProvisioningStatus GetPrivateConnectionProvisioningStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAILED_HASH)
          {
            return PrivateConnectionProvisioningStatus::FAILED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return PrivateConnectionProvisioningStatus::PENDING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return PrivateConnectionProvisioningStatus::CREATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrivateConnectionProvisioningStatus>(hashCode);
          }

          return PrivateConnectionProvisioningStatus::NOT_SET;
        }

        Aws::String GetNameForPrivateConnectionProvisioningStatus(PrivateConnectionProvisioningStatus enumValue)
        {
          switch(enumValue)
          {
          case PrivateConnectionProvisioningStatus::NOT_SET:
            return {};
          case PrivateConnectionProvisioningStatus::FAILED:
            return "FAILED";
          case PrivateConnectionProvisioningStatus::PENDING:
            return "PENDING";
          case PrivateConnectionProvisioningStatus::CREATED:
            return "CREATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrivateConnectionProvisioningStatusMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
