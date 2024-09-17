/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/ConditionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace ConditionTypeMapper
      {

        static const int BEFORE_ENTRY_HASH = HashingUtils::HashString("BEFORE_ENTRY");
        static const int ON_SUCCESS_HASH = HashingUtils::HashString("ON_SUCCESS");


        ConditionType GetConditionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEFORE_ENTRY_HASH)
          {
            return ConditionType::BEFORE_ENTRY;
          }
          else if (hashCode == ON_SUCCESS_HASH)
          {
            return ConditionType::ON_SUCCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConditionType>(hashCode);
          }

          return ConditionType::NOT_SET;
        }

        Aws::String GetNameForConditionType(ConditionType enumValue)
        {
          switch(enumValue)
          {
          case ConditionType::NOT_SET:
            return {};
          case ConditionType::BEFORE_ENTRY:
            return "BEFORE_ENTRY";
          case ConditionType::ON_SUCCESS:
            return "ON_SUCCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConditionTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
