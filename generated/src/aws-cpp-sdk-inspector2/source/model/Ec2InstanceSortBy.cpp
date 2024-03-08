/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2InstanceSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace Ec2InstanceSortByMapper
      {

        static const int NETWORK_FINDINGS_HASH = HashingUtils::HashString("NETWORK_FINDINGS");
        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        Ec2InstanceSortBy GetEc2InstanceSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NETWORK_FINDINGS_HASH)
          {
            return Ec2InstanceSortBy::NETWORK_FINDINGS;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return Ec2InstanceSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Ec2InstanceSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return Ec2InstanceSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2InstanceSortBy>(hashCode);
          }

          return Ec2InstanceSortBy::NOT_SET;
        }

        Aws::String GetNameForEc2InstanceSortBy(Ec2InstanceSortBy enumValue)
        {
          switch(enumValue)
          {
          case Ec2InstanceSortBy::NOT_SET:
            return {};
          case Ec2InstanceSortBy::NETWORK_FINDINGS:
            return "NETWORK_FINDINGS";
          case Ec2InstanceSortBy::CRITICAL:
            return "CRITICAL";
          case Ec2InstanceSortBy::HIGH:
            return "HIGH";
          case Ec2InstanceSortBy::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2InstanceSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
