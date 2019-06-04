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

#include <aws/ec2/model/HostRecovery.h>
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
      namespace HostRecoveryMapper
      {

        static const int on_HASH = HashingUtils::HashString("on");
        static const int off_HASH = HashingUtils::HashString("off");


        HostRecovery GetHostRecoveryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == on_HASH)
          {
            return HostRecovery::on;
          }
          else if (hashCode == off_HASH)
          {
            return HostRecovery::off;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HostRecovery>(hashCode);
          }

          return HostRecovery::NOT_SET;
        }

        Aws::String GetNameForHostRecovery(HostRecovery enumValue)
        {
          switch(enumValue)
          {
          case HostRecovery::on:
            return "on";
          case HostRecovery::off:
            return "off";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HostRecoveryMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
