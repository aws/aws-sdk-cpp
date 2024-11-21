/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RuleType.h>
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
      namespace RuleTypeMapper
      {

        static const int METADATA_FORM_ENFORCEMENT_HASH = HashingUtils::HashString("METADATA_FORM_ENFORCEMENT");


        RuleType GetRuleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == METADATA_FORM_ENFORCEMENT_HASH)
          {
            return RuleType::METADATA_FORM_ENFORCEMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleType>(hashCode);
          }

          return RuleType::NOT_SET;
        }

        Aws::String GetNameForRuleType(RuleType enumValue)
        {
          switch(enumValue)
          {
          case RuleType::NOT_SET:
            return {};
          case RuleType::METADATA_FORM_ENFORCEMENT:
            return "METADATA_FORM_ENFORCEMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleTypeMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
