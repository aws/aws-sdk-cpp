/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamExternalResourceVerificationTokenState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace IpamExternalResourceVerificationTokenStateMapper
      {

        static const int create_in_progress_HASH = HashingUtils::HashString("create-in-progress");
        static const int create_complete_HASH = HashingUtils::HashString("create-complete");
        static const int create_failed_HASH = HashingUtils::HashString("create-failed");
        static const int delete_in_progress_HASH = HashingUtils::HashString("delete-in-progress");
        static const int delete_complete_HASH = HashingUtils::HashString("delete-complete");
        static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");


        IpamExternalResourceVerificationTokenState GetIpamExternalResourceVerificationTokenStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == create_in_progress_HASH)
          {
            return IpamExternalResourceVerificationTokenState::create_in_progress;
          }
          else if (hashCode == create_complete_HASH)
          {
            return IpamExternalResourceVerificationTokenState::create_complete;
          }
          else if (hashCode == create_failed_HASH)
          {
            return IpamExternalResourceVerificationTokenState::create_failed;
          }
          else if (hashCode == delete_in_progress_HASH)
          {
            return IpamExternalResourceVerificationTokenState::delete_in_progress;
          }
          else if (hashCode == delete_complete_HASH)
          {
            return IpamExternalResourceVerificationTokenState::delete_complete;
          }
          else if (hashCode == delete_failed_HASH)
          {
            return IpamExternalResourceVerificationTokenState::delete_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamExternalResourceVerificationTokenState>(hashCode);
          }

          return IpamExternalResourceVerificationTokenState::NOT_SET;
        }

        Aws::String GetNameForIpamExternalResourceVerificationTokenState(IpamExternalResourceVerificationTokenState enumValue)
        {
          switch(enumValue)
          {
          case IpamExternalResourceVerificationTokenState::NOT_SET:
            return {};
          case IpamExternalResourceVerificationTokenState::create_in_progress:
            return "create-in-progress";
          case IpamExternalResourceVerificationTokenState::create_complete:
            return "create-complete";
          case IpamExternalResourceVerificationTokenState::create_failed:
            return "create-failed";
          case IpamExternalResourceVerificationTokenState::delete_in_progress:
            return "delete-in-progress";
          case IpamExternalResourceVerificationTokenState::delete_complete:
            return "delete-complete";
          case IpamExternalResourceVerificationTokenState::delete_failed:
            return "delete-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamExternalResourceVerificationTokenStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
