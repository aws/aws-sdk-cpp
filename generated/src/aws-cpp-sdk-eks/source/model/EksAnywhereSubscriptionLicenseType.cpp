/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/EksAnywhereSubscriptionLicenseType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace EksAnywhereSubscriptionLicenseTypeMapper
      {

        static const int Cluster_HASH = HashingUtils::HashString("Cluster");


        EksAnywhereSubscriptionLicenseType GetEksAnywhereSubscriptionLicenseTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cluster_HASH)
          {
            return EksAnywhereSubscriptionLicenseType::Cluster;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EksAnywhereSubscriptionLicenseType>(hashCode);
          }

          return EksAnywhereSubscriptionLicenseType::NOT_SET;
        }

        Aws::String GetNameForEksAnywhereSubscriptionLicenseType(EksAnywhereSubscriptionLicenseType enumValue)
        {
          switch(enumValue)
          {
          case EksAnywhereSubscriptionLicenseType::NOT_SET:
            return {};
          case EksAnywhereSubscriptionLicenseType::Cluster:
            return "Cluster";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EksAnywhereSubscriptionLicenseTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
