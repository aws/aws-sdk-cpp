/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamManagementState.h>
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
      namespace IpamManagementStateMapper
      {

        static const int managed_HASH = HashingUtils::HashString("managed");
        static const int unmanaged_HASH = HashingUtils::HashString("unmanaged");
        static const int ignored_HASH = HashingUtils::HashString("ignored");


        IpamManagementState GetIpamManagementStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == managed_HASH)
          {
            return IpamManagementState::managed;
          }
          else if (hashCode == unmanaged_HASH)
          {
            return IpamManagementState::unmanaged;
          }
          else if (hashCode == ignored_HASH)
          {
            return IpamManagementState::ignored;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IpamManagementState>(hashCode);
          }

          return IpamManagementState::NOT_SET;
        }

        Aws::String GetNameForIpamManagementState(IpamManagementState enumValue)
        {
          switch(enumValue)
          {
          case IpamManagementState::NOT_SET:
            return {};
          case IpamManagementState::managed:
            return "managed";
          case IpamManagementState::unmanaged:
            return "unmanaged";
          case IpamManagementState::ignored:
            return "ignored";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IpamManagementStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
