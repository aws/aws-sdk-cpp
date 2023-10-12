/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/EndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace EndpointTypeMapper
      {

        static constexpr uint32_t PUBLIC__HASH = ConstExprHashingUtils::HashString("PUBLIC");
        static constexpr uint32_t VPC_HASH = ConstExprHashingUtils::HashString("VPC");
        static constexpr uint32_t VPC_ENDPOINT_HASH = ConstExprHashingUtils::HashString("VPC_ENDPOINT");


        EndpointType GetEndpointTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return EndpointType::PUBLIC_;
          }
          else if (hashCode == VPC_HASH)
          {
            return EndpointType::VPC;
          }
          else if (hashCode == VPC_ENDPOINT_HASH)
          {
            return EndpointType::VPC_ENDPOINT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EndpointType>(hashCode);
          }

          return EndpointType::NOT_SET;
        }

        Aws::String GetNameForEndpointType(EndpointType enumValue)
        {
          switch(enumValue)
          {
          case EndpointType::NOT_SET:
            return {};
          case EndpointType::PUBLIC_:
            return "PUBLIC";
          case EndpointType::VPC:
            return "VPC";
          case EndpointType::VPC_ENDPOINT:
            return "VPC_ENDPOINT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EndpointTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
