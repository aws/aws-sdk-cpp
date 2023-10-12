/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ExistCondition.h>
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
      namespace ExistConditionMapper
      {

        static constexpr uint32_t MUST_EXIST_HASH = ConstExprHashingUtils::HashString("MUST_EXIST");
        static constexpr uint32_t NOT_EXIST_HASH = ConstExprHashingUtils::HashString("NOT_EXIST");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        ExistCondition GetExistConditionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MUST_EXIST_HASH)
          {
            return ExistCondition::MUST_EXIST;
          }
          else if (hashCode == NOT_EXIST_HASH)
          {
            return ExistCondition::NOT_EXIST;
          }
          else if (hashCode == NONE_HASH)
          {
            return ExistCondition::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExistCondition>(hashCode);
          }

          return ExistCondition::NOT_SET;
        }

        Aws::String GetNameForExistCondition(ExistCondition enumValue)
        {
          switch(enumValue)
          {
          case ExistCondition::NOT_SET:
            return {};
          case ExistCondition::MUST_EXIST:
            return "MUST_EXIST";
          case ExistCondition::NOT_EXIST:
            return "NOT_EXIST";
          case ExistCondition::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExistConditionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
