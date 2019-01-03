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

#include <aws/ec2/model/VpcEndpointType.h>
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
      namespace VpcEndpointTypeMapper
      {

        static const int Interface_HASH = HashingUtils::HashString("Interface");
        static const int Gateway_HASH = HashingUtils::HashString("Gateway");


        VpcEndpointType GetVpcEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Interface_HASH)
          {
            return VpcEndpointType::Interface;
          }
          else if (hashCode == Gateway_HASH)
          {
            return VpcEndpointType::Gateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VpcEndpointType>(hashCode);
          }

          return VpcEndpointType::NOT_SET;
        }

        Aws::String GetNameForVpcEndpointType(VpcEndpointType enumValue)
        {
          switch(enumValue)
          {
          case VpcEndpointType::Interface:
            return "Interface";
          case VpcEndpointType::Gateway:
            return "Gateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VpcEndpointTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
