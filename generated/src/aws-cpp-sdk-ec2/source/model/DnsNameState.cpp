/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DnsNameState.h>
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
      namespace DnsNameStateMapper
      {

        static constexpr uint32_t pendingVerification_HASH = ConstExprHashingUtils::HashString("pendingVerification");
        static constexpr uint32_t verified_HASH = ConstExprHashingUtils::HashString("verified");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        DnsNameState GetDnsNameStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pendingVerification_HASH)
          {
            return DnsNameState::pendingVerification;
          }
          else if (hashCode == verified_HASH)
          {
            return DnsNameState::verified;
          }
          else if (hashCode == failed_HASH)
          {
            return DnsNameState::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DnsNameState>(hashCode);
          }

          return DnsNameState::NOT_SET;
        }

        Aws::String GetNameForDnsNameState(DnsNameState enumValue)
        {
          switch(enumValue)
          {
          case DnsNameState::NOT_SET:
            return {};
          case DnsNameState::pendingVerification:
            return "pendingVerification";
          case DnsNameState::verified:
            return "verified";
          case DnsNameState::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DnsNameStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
