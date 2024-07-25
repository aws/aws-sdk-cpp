/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/TrustStoreAssociationStatusEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticLoadBalancingv2
  {
    namespace Model
    {
      namespace TrustStoreAssociationStatusEnumMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int removed_HASH = HashingUtils::HashString("removed");


        TrustStoreAssociationStatusEnum GetTrustStoreAssociationStatusEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return TrustStoreAssociationStatusEnum::active;
          }
          else if (hashCode == removed_HASH)
          {
            return TrustStoreAssociationStatusEnum::removed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TrustStoreAssociationStatusEnum>(hashCode);
          }

          return TrustStoreAssociationStatusEnum::NOT_SET;
        }

        Aws::String GetNameForTrustStoreAssociationStatusEnum(TrustStoreAssociationStatusEnum enumValue)
        {
          switch(enumValue)
          {
          case TrustStoreAssociationStatusEnum::NOT_SET:
            return {};
          case TrustStoreAssociationStatusEnum::active:
            return "active";
          case TrustStoreAssociationStatusEnum::removed:
            return "removed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TrustStoreAssociationStatusEnumMapper
    } // namespace Model
  } // namespace ElasticLoadBalancingv2
} // namespace Aws
