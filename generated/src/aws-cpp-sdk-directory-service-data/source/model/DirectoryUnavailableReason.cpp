/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directory-service-data/model/DirectoryUnavailableReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryServiceData
  {
    namespace Model
    {
      namespace DirectoryUnavailableReasonMapper
      {

        static const int INVALID_DIRECTORY_STATE_HASH = HashingUtils::HashString("INVALID_DIRECTORY_STATE");
        static const int DIRECTORY_TIMEOUT_HASH = HashingUtils::HashString("DIRECTORY_TIMEOUT");
        static const int DIRECTORY_RESOURCES_EXCEEDED_HASH = HashingUtils::HashString("DIRECTORY_RESOURCES_EXCEEDED");
        static const int NO_DISK_SPACE_HASH = HashingUtils::HashString("NO_DISK_SPACE");
        static const int TRUST_AUTH_FAILURE_HASH = HashingUtils::HashString("TRUST_AUTH_FAILURE");


        DirectoryUnavailableReason GetDirectoryUnavailableReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_DIRECTORY_STATE_HASH)
          {
            return DirectoryUnavailableReason::INVALID_DIRECTORY_STATE;
          }
          else if (hashCode == DIRECTORY_TIMEOUT_HASH)
          {
            return DirectoryUnavailableReason::DIRECTORY_TIMEOUT;
          }
          else if (hashCode == DIRECTORY_RESOURCES_EXCEEDED_HASH)
          {
            return DirectoryUnavailableReason::DIRECTORY_RESOURCES_EXCEEDED;
          }
          else if (hashCode == NO_DISK_SPACE_HASH)
          {
            return DirectoryUnavailableReason::NO_DISK_SPACE;
          }
          else if (hashCode == TRUST_AUTH_FAILURE_HASH)
          {
            return DirectoryUnavailableReason::TRUST_AUTH_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectoryUnavailableReason>(hashCode);
          }

          return DirectoryUnavailableReason::NOT_SET;
        }

        Aws::String GetNameForDirectoryUnavailableReason(DirectoryUnavailableReason enumValue)
        {
          switch(enumValue)
          {
          case DirectoryUnavailableReason::NOT_SET:
            return {};
          case DirectoryUnavailableReason::INVALID_DIRECTORY_STATE:
            return "INVALID_DIRECTORY_STATE";
          case DirectoryUnavailableReason::DIRECTORY_TIMEOUT:
            return "DIRECTORY_TIMEOUT";
          case DirectoryUnavailableReason::DIRECTORY_RESOURCES_EXCEEDED:
            return "DIRECTORY_RESOURCES_EXCEEDED";
          case DirectoryUnavailableReason::NO_DISK_SPACE:
            return "NO_DISK_SPACE";
          case DirectoryUnavailableReason::TRUST_AUTH_FAILURE:
            return "TRUST_AUTH_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectoryUnavailableReasonMapper
    } // namespace Model
  } // namespace DirectoryServiceData
} // namespace Aws
