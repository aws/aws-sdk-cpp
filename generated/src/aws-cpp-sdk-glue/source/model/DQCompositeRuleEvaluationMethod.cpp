/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DQCompositeRuleEvaluationMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace DQCompositeRuleEvaluationMethodMapper
      {

        static const int COLUMN_HASH = HashingUtils::HashString("COLUMN");
        static const int ROW_HASH = HashingUtils::HashString("ROW");


        DQCompositeRuleEvaluationMethod GetDQCompositeRuleEvaluationMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COLUMN_HASH)
          {
            return DQCompositeRuleEvaluationMethod::COLUMN;
          }
          else if (hashCode == ROW_HASH)
          {
            return DQCompositeRuleEvaluationMethod::ROW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DQCompositeRuleEvaluationMethod>(hashCode);
          }

          return DQCompositeRuleEvaluationMethod::NOT_SET;
        }

        Aws::String GetNameForDQCompositeRuleEvaluationMethod(DQCompositeRuleEvaluationMethod enumValue)
        {
          switch(enumValue)
          {
          case DQCompositeRuleEvaluationMethod::NOT_SET:
            return {};
          case DQCompositeRuleEvaluationMethod::COLUMN:
            return "COLUMN";
          case DQCompositeRuleEvaluationMethod::ROW:
            return "ROW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DQCompositeRuleEvaluationMethodMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
