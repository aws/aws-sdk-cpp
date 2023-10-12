/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/EndpointType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace EndpointTypeMapper
      {

        static constexpr uint32_t PUBLIC__HASH = ConstExprHashingUtils::HashString("PUBLIC");
        static constexpr uint32_t PRIVATE_LINK_HASH = ConstExprHashingUtils::HashString("PRIVATE_LINK");
        static constexpr uint32_t FIPS_HASH = ConstExprHashingUtils::HashString("FIPS");


        EndpointType GetEndpointTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return EndpointType::PUBLIC_;
          }
          else if (hashCode == PRIVATE_LINK_HASH)
          {
            return EndpointType::PRIVATE_LINK;
          }
          else if (hashCode == FIPS_HASH)
          {
            return EndpointType::FIPS;
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
          case EndpointType::PRIVATE_LINK:
            return "PRIVATE_LINK";
          case EndpointType::FIPS:
            return "FIPS";
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
  } // namespace DataSync
} // namespace Aws
