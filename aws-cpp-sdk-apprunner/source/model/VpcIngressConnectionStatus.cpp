/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/VpcIngressConnectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppRunner
  {
    namespace Model
    {
      namespace VpcIngressConnectionStatusMapper
      {

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int PENDING_CREATION_HASH = HashingUtils::HashString("PENDING_CREATION");
        static const int PENDING_UPDATE_HASH = HashingUtils::HashString("PENDING_UPDATE");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");
        static const int FAILED_CREATION_HASH = HashingUtils::HashString("FAILED_CREATION");
        static const int FAILED_UPDATE_HASH = HashingUtils::HashString("FAILED_UPDATE");
        static const int FAILED_DELETION_HASH = HashingUtils::HashString("FAILED_DELETION");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        VpcIngressConnectionStatus GetVpcIngressConnectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return VpcIngressConnectionStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_CREATION_HASH)
          {
            return VpcIngressConnectionStatus::PENDING_CREATION;
          }
          else if (hashCode == PENDING_UPDATE_HASH)
          {
            return VpcIngressConnectionStatus::PENDING_UPDATE;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return VpcIngressConnectionStatus::PENDING_DELETION;
          }
          else if (hashCode == FAILED_CREATION_HASH)
          {
            return VpcIngressConnectionStatus::FAILED_CREATION;
          }
          else if (hashCode == FAILED_UPDATE_HASH)
          {
            return VpcIngressConnectionStatus::FAILED_UPDATE;
          }
          else if (hashCode == FAILED_DELETION_HASH)
          {
            return VpcIngressConnectionStatus::FAILED_DELETION;
          }
          else if (hashCode == DELETED_HASH)
          {
            return VpcIngressConnectionStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcIngressConnectionStatus>(hashCode);
          }

          return VpcIngressConnectionStatus::NOT_SET;
        }

        Aws::String GetNameForVpcIngressConnectionStatus(VpcIngressConnectionStatus enumValue)
        {
          switch(enumValue)
          {
          case VpcIngressConnectionStatus::AVAILABLE:
            return "AVAILABLE";
          case VpcIngressConnectionStatus::PENDING_CREATION:
            return "PENDING_CREATION";
          case VpcIngressConnectionStatus::PENDING_UPDATE:
            return "PENDING_UPDATE";
          case VpcIngressConnectionStatus::PENDING_DELETION:
            return "PENDING_DELETION";
          case VpcIngressConnectionStatus::FAILED_CREATION:
            return "FAILED_CREATION";
          case VpcIngressConnectionStatus::FAILED_UPDATE:
            return "FAILED_UPDATE";
          case VpcIngressConnectionStatus::FAILED_DELETION:
            return "FAILED_DELETION";
          case VpcIngressConnectionStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcIngressConnectionStatusMapper
    } // namespace Model
  } // namespace AppRunner
} // namespace Aws
