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

#include <aws/directconnect/model/GatewayType.h>
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
      namespace GatewayTypeMapper
      {

        static const int virtualPrivateGateway_HASH = HashingUtils::HashString("virtualPrivateGateway");
        static const int transitGateway_HASH = HashingUtils::HashString("transitGateway");


        GatewayType GetGatewayTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == virtualPrivateGateway_HASH)
          {
            return GatewayType::virtualPrivateGateway;
          }
          else if (hashCode == transitGateway_HASH)
          {
            return GatewayType::transitGateway;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GatewayType>(hashCode);
          }

          return GatewayType::NOT_SET;
        }

        Aws::String GetNameForGatewayType(GatewayType enumValue)
        {
          switch(enumValue)
          {
          case GatewayType::virtualPrivateGateway:
            return "virtualPrivateGateway";
          case GatewayType::transitGateway:
            return "transitGateway";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GatewayTypeMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
