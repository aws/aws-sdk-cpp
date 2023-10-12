/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/DomainStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace DomainStatusMapper
      {

        static constexpr uint32_t PENDING_VERIFICATION_HASH = ConstExprHashingUtils::HashString("PENDING_VERIFICATION");
        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t PENDING_DEPLOYMENT_HASH = ConstExprHashingUtils::HashString("PENDING_DEPLOYMENT");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t REQUESTING_CERTIFICATE_HASH = ConstExprHashingUtils::HashString("REQUESTING_CERTIFICATE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");


        DomainStatus GetDomainStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_VERIFICATION_HASH)
          {
            return DomainStatus::PENDING_VERIFICATION;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return DomainStatus::IN_PROGRESS;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return DomainStatus::AVAILABLE;
          }
          else if (hashCode == PENDING_DEPLOYMENT_HASH)
          {
            return DomainStatus::PENDING_DEPLOYMENT;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DomainStatus::FAILED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return DomainStatus::CREATING;
          }
          else if (hashCode == REQUESTING_CERTIFICATE_HASH)
          {
            return DomainStatus::REQUESTING_CERTIFICATE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return DomainStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DomainStatus>(hashCode);
          }

          return DomainStatus::NOT_SET;
        }

        Aws::String GetNameForDomainStatus(DomainStatus enumValue)
        {
          switch(enumValue)
          {
          case DomainStatus::NOT_SET:
            return {};
          case DomainStatus::PENDING_VERIFICATION:
            return "PENDING_VERIFICATION";
          case DomainStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DomainStatus::AVAILABLE:
            return "AVAILABLE";
          case DomainStatus::PENDING_DEPLOYMENT:
            return "PENDING_DEPLOYMENT";
          case DomainStatus::FAILED:
            return "FAILED";
          case DomainStatus::CREATING:
            return "CREATING";
          case DomainStatus::REQUESTING_CERTIFICATE:
            return "REQUESTING_CERTIFICATE";
          case DomainStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainStatusMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
