/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverEndpointDirection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ResolverEndpointDirectionMapper
      {

        static const int INBOUND_HASH = HashingUtils::HashString("INBOUND");
        static const int OUTBOUND_HASH = HashingUtils::HashString("OUTBOUND");


        ResolverEndpointDirection GetResolverEndpointDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INBOUND_HASH)
          {
            return ResolverEndpointDirection::INBOUND;
          }
          else if (hashCode == OUTBOUND_HASH)
          {
            return ResolverEndpointDirection::OUTBOUND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverEndpointDirection>(hashCode);
          }

          return ResolverEndpointDirection::NOT_SET;
        }

        Aws::String GetNameForResolverEndpointDirection(ResolverEndpointDirection enumValue)
        {
          switch(enumValue)
          {
          case ResolverEndpointDirection::INBOUND:
            return "INBOUND";
          case ResolverEndpointDirection::OUTBOUND:
            return "OUTBOUND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverEndpointDirectionMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
