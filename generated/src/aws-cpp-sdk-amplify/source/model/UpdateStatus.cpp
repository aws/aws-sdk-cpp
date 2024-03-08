/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/UpdateStatus.h>
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
      namespace UpdateStatusMapper
      {

        static const int REQUESTING_CERTIFICATE_HASH = HashingUtils::HashString("REQUESTING_CERTIFICATE");
        static const int PENDING_VERIFICATION_HASH = HashingUtils::HashString("PENDING_VERIFICATION");
        static const int IMPORTING_CUSTOM_CERTIFICATE_HASH = HashingUtils::HashString("IMPORTING_CUSTOM_CERTIFICATE");
        static const int PENDING_DEPLOYMENT_HASH = HashingUtils::HashString("PENDING_DEPLOYMENT");
        static const int AWAITING_APP_CNAME_HASH = HashingUtils::HashString("AWAITING_APP_CNAME");
        static const int UPDATE_COMPLETE_HASH = HashingUtils::HashString("UPDATE_COMPLETE");
        static const int UPDATE_FAILED_HASH = HashingUtils::HashString("UPDATE_FAILED");


        UpdateStatus GetUpdateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUESTING_CERTIFICATE_HASH)
          {
            return UpdateStatus::REQUESTING_CERTIFICATE;
          }
          else if (hashCode == PENDING_VERIFICATION_HASH)
          {
            return UpdateStatus::PENDING_VERIFICATION;
          }
          else if (hashCode == IMPORTING_CUSTOM_CERTIFICATE_HASH)
          {
            return UpdateStatus::IMPORTING_CUSTOM_CERTIFICATE;
          }
          else if (hashCode == PENDING_DEPLOYMENT_HASH)
          {
            return UpdateStatus::PENDING_DEPLOYMENT;
          }
          else if (hashCode == AWAITING_APP_CNAME_HASH)
          {
            return UpdateStatus::AWAITING_APP_CNAME;
          }
          else if (hashCode == UPDATE_COMPLETE_HASH)
          {
            return UpdateStatus::UPDATE_COMPLETE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return UpdateStatus::UPDATE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateStatus>(hashCode);
          }

          return UpdateStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateStatus(UpdateStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateStatus::NOT_SET:
            return {};
          case UpdateStatus::REQUESTING_CERTIFICATE:
            return "REQUESTING_CERTIFICATE";
          case UpdateStatus::PENDING_VERIFICATION:
            return "PENDING_VERIFICATION";
          case UpdateStatus::IMPORTING_CUSTOM_CERTIFICATE:
            return "IMPORTING_CUSTOM_CERTIFICATE";
          case UpdateStatus::PENDING_DEPLOYMENT:
            return "PENDING_DEPLOYMENT";
          case UpdateStatus::AWAITING_APP_CNAME:
            return "AWAITING_APP_CNAME";
          case UpdateStatus::UPDATE_COMPLETE:
            return "UPDATE_COMPLETE";
          case UpdateStatus::UPDATE_FAILED:
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

      } // namespace UpdateStatusMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
