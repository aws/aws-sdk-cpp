/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/EndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace APIGateway
  {
    namespace Model
    {
      namespace EndpointTypeMapper
      {

        static const int REGIONAL_HASH = HashingUtils::HashString("REGIONAL");
        static const int EDGE_HASH = HashingUtils::HashString("EDGE");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        EndpointType GetEndpointTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGIONAL_HASH)
          {
            return EndpointType::REGIONAL;
          }
          else if (hashCode == EDGE_HASH)
          {
            return EndpointType::EDGE;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return EndpointType::PRIVATE_;
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
          case EndpointType::REGIONAL:
            return "REGIONAL";
          case EndpointType::EDGE:
            return "EDGE";
          case EndpointType::PRIVATE_:
            return "PRIVATE";
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
  } // namespace APIGateway
} // namespace Aws
