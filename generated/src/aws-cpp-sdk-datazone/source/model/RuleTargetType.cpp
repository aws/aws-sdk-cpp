/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RuleTargetType.h>
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
      namespace RuleTargetTypeMapper
      {

        static const int DOMAIN_UNIT_HASH = HashingUtils::HashString("DOMAIN_UNIT");


        RuleTargetType GetRuleTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN_UNIT_HASH)
          {
            return RuleTargetType::DOMAIN_UNIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleTargetType>(hashCode);
          }

          return RuleTargetType::NOT_SET;
        }

        Aws::String GetNameForRuleTargetType(RuleTargetType enumValue)
        {
          switch(enumValue)
          {
          case RuleTargetType::NOT_SET:
            return {};
          case RuleTargetType::DOMAIN_UNIT:
            return "DOMAIN_UNIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleTargetTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
