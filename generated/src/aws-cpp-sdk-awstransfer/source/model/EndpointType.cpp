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

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int VPC_HASH = HashingUtils::HashString("VPC");
        static const int VPC_ENDPOINT_HASH = HashingUtils::HashString("VPC_ENDPOINT");


        EndpointType GetEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
