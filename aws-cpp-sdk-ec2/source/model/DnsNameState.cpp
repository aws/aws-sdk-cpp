/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int pendingVerification_HASH = HashingUtils::HashString("pendingVerification");
        static const int verified_HASH = HashingUtils::HashString("verified");
        static const int failed_HASH = HashingUtils::HashString("failed");


        DnsNameState GetDnsNameStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
