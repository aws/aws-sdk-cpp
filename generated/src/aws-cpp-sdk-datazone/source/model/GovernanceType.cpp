/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GovernanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace GovernanceTypeMapper
      {

        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");
        static const int USER_MANAGED_HASH = HashingUtils::HashString("USER_MANAGED");


        GovernanceType GetGovernanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_MANAGED_HASH)
          {
            return GovernanceType::AWS_MANAGED;
          }
          else if (hashCode == USER_MANAGED_HASH)
          {
            return GovernanceType::USER_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GovernanceType>(hashCode);
          }

          return GovernanceType::NOT_SET;
        }

        Aws::String GetNameForGovernanceType(GovernanceType enumValue)
        {
          switch(enumValue)
          {
          case GovernanceType::NOT_SET:
            return {};
          case GovernanceType::AWS_MANAGED:
            return "AWS_MANAGED";
          case GovernanceType::USER_MANAGED:
            return "USER_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GovernanceTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
