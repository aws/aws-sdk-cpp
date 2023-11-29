/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/PolicyExistenceCondition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace PolicyExistenceConditionMapper
      {

        static const int POLICY_MUST_EXIST_HASH = HashingUtils::HashString("POLICY_MUST_EXIST");
        static const int POLICY_MUST_NOT_EXIST_HASH = HashingUtils::HashString("POLICY_MUST_NOT_EXIST");


        PolicyExistenceCondition GetPolicyExistenceConditionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POLICY_MUST_EXIST_HASH)
          {
            return PolicyExistenceCondition::POLICY_MUST_EXIST;
          }
          else if (hashCode == POLICY_MUST_NOT_EXIST_HASH)
          {
            return PolicyExistenceCondition::POLICY_MUST_NOT_EXIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyExistenceCondition>(hashCode);
          }

          return PolicyExistenceCondition::NOT_SET;
        }

        Aws::String GetNameForPolicyExistenceCondition(PolicyExistenceCondition enumValue)
        {
          switch(enumValue)
          {
          case PolicyExistenceCondition::NOT_SET:
            return {};
          case PolicyExistenceCondition::POLICY_MUST_EXIST:
            return "POLICY_MUST_EXIST";
          case PolicyExistenceCondition::POLICY_MUST_NOT_EXIST:
            return "POLICY_MUST_NOT_EXIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyExistenceConditionMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
