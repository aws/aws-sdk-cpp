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

#include <aws/ec2/model/ClientVpnConnectionStatusCode.h>
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
      namespace ClientVpnConnectionStatusCodeMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int failed_to_terminate_HASH = HashingUtils::HashString("failed-to-terminate");
        static const int terminating_HASH = HashingUtils::HashString("terminating");
        static const int terminated_HASH = HashingUtils::HashString("terminated");


        ClientVpnConnectionStatusCode GetClientVpnConnectionStatusCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return ClientVpnConnectionStatusCode::active;
          }
          else if (hashCode == failed_to_terminate_HASH)
          {
            return ClientVpnConnectionStatusCode::failed_to_terminate;
          }
          else if (hashCode == terminating_HASH)
          {
            return ClientVpnConnectionStatusCode::terminating;
          }
          else if (hashCode == terminated_HASH)
          {
            return ClientVpnConnectionStatusCode::terminated;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientVpnConnectionStatusCode>(hashCode);
          }

          return ClientVpnConnectionStatusCode::NOT_SET;
        }

        Aws::String GetNameForClientVpnConnectionStatusCode(ClientVpnConnectionStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ClientVpnConnectionStatusCode::active:
            return "active";
          case ClientVpnConnectionStatusCode::failed_to_terminate:
            return "failed-to-terminate";
          case ClientVpnConnectionStatusCode::terminating:
            return "terminating";
          case ClientVpnConnectionStatusCode::terminated:
            return "terminated";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientVpnConnectionStatusCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
