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

#include <aws/directconnect/model/DirectConnectGatewayAttachmentType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace DirectConnectGatewayAttachmentTypeMapper
      {

        static const int TransitVirtualInterface_HASH = HashingUtils::HashString("TransitVirtualInterface");
        static const int PrivateVirtualInterface_HASH = HashingUtils::HashString("PrivateVirtualInterface");


        DirectConnectGatewayAttachmentType GetDirectConnectGatewayAttachmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TransitVirtualInterface_HASH)
          {
            return DirectConnectGatewayAttachmentType::TransitVirtualInterface;
          }
          else if (hashCode == PrivateVirtualInterface_HASH)
          {
            return DirectConnectGatewayAttachmentType::PrivateVirtualInterface;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DirectConnectGatewayAttachmentType>(hashCode);
          }

          return DirectConnectGatewayAttachmentType::NOT_SET;
        }

        Aws::String GetNameForDirectConnectGatewayAttachmentType(DirectConnectGatewayAttachmentType enumValue)
        {
          switch(enumValue)
          {
          case DirectConnectGatewayAttachmentType::TransitVirtualInterface:
            return "TransitVirtualInterface";
          case DirectConnectGatewayAttachmentType::PrivateVirtualInterface:
            return "PrivateVirtualInterface";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DirectConnectGatewayAttachmentTypeMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
