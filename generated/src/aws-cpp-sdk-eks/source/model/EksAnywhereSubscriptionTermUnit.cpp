/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/EksAnywhereSubscriptionTermUnit.h>
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
      namespace EksAnywhereSubscriptionTermUnitMapper
      {

        static const int MONTHS_HASH = HashingUtils::HashString("MONTHS");


        EksAnywhereSubscriptionTermUnit GetEksAnywhereSubscriptionTermUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MONTHS_HASH)
          {
            return EksAnywhereSubscriptionTermUnit::MONTHS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EksAnywhereSubscriptionTermUnit>(hashCode);
          }

          return EksAnywhereSubscriptionTermUnit::NOT_SET;
        }

        Aws::String GetNameForEksAnywhereSubscriptionTermUnit(EksAnywhereSubscriptionTermUnit enumValue)
        {
          switch(enumValue)
          {
          case EksAnywhereSubscriptionTermUnit::NOT_SET:
            return {};
          case EksAnywhereSubscriptionTermUnit::MONTHS:
            return "MONTHS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EksAnywhereSubscriptionTermUnitMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
