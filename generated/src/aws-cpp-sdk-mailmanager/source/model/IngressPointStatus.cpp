/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/IngressPointStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace IngressPointStatusMapper
      {

        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int DEPROVISIONING_HASH = HashingUtils::HashString("DEPROVISIONING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        IngressPointStatus GetIngressPointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROVISIONING_HASH)
          {
            return IngressPointStatus::PROVISIONING;
          }
          else if (hashCode == DEPROVISIONING_HASH)
          {
            return IngressPointStatus::DEPROVISIONING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return IngressPointStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return IngressPointStatus::ACTIVE;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return IngressPointStatus::CLOSED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return IngressPointStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IngressPointStatus>(hashCode);
          }

          return IngressPointStatus::NOT_SET;
        }

        Aws::String GetNameForIngressPointStatus(IngressPointStatus enumValue)
        {
          switch(enumValue)
          {
          case IngressPointStatus::NOT_SET:
            return {};
          case IngressPointStatus::PROVISIONING:
            return "PROVISIONING";
          case IngressPointStatus::DEPROVISIONING:
            return "DEPROVISIONING";
          case IngressPointStatus::UPDATING:
            return "UPDATING";
          case IngressPointStatus::ACTIVE:
            return "ACTIVE";
          case IngressPointStatus::CLOSED:
            return "CLOSED";
          case IngressPointStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IngressPointStatusMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
