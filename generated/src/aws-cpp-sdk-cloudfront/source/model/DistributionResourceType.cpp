/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DistributionResourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace DistributionResourceTypeMapper
      {

        static const int distribution_HASH = HashingUtils::HashString("distribution");
        static const int distribution_tenant_HASH = HashingUtils::HashString("distribution-tenant");


        DistributionResourceType GetDistributionResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == distribution_HASH)
          {
            return DistributionResourceType::distribution;
          }
          else if (hashCode == distribution_tenant_HASH)
          {
            return DistributionResourceType::distribution_tenant;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DistributionResourceType>(hashCode);
          }

          return DistributionResourceType::NOT_SET;
        }

        Aws::String GetNameForDistributionResourceType(DistributionResourceType enumValue)
        {
          switch(enumValue)
          {
          case DistributionResourceType::NOT_SET:
            return {};
          case DistributionResourceType::distribution:
            return "distribution";
          case DistributionResourceType::distribution_tenant:
            return "distribution-tenant";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DistributionResourceTypeMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
