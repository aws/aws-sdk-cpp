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

#include <aws/ec2/model/TransitGatewayAttachmentResourceType.h>
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
      namespace TransitGatewayAttachmentResourceTypeMapper
      {

        static const int vpc_HASH = HashingUtils::HashString("vpc");
        static const int vpn_HASH = HashingUtils::HashString("vpn");
        static const int direct_connect_gateway_HASH = HashingUtils::HashString("direct-connect-gateway");


        TransitGatewayAttachmentResourceType GetTransitGatewayAttachmentResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vpc_HASH)
          {
            return TransitGatewayAttachmentResourceType::vpc;
          }
          else if (hashCode == vpn_HASH)
          {
            return TransitGatewayAttachmentResourceType::vpn;
          }
          else if (hashCode == direct_connect_gateway_HASH)
          {
            return TransitGatewayAttachmentResourceType::direct_connect_gateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayAttachmentResourceType>(hashCode);
          }

          return TransitGatewayAttachmentResourceType::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayAttachmentResourceType(TransitGatewayAttachmentResourceType enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayAttachmentResourceType::vpc:
            return "vpc";
          case TransitGatewayAttachmentResourceType::vpn:
            return "vpn";
          case TransitGatewayAttachmentResourceType::direct_connect_gateway:
            return "direct-connect-gateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayAttachmentResourceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
