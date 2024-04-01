/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/StepParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace StepParameterTypeMapper
      {

        static const int INT_HASH = HashingUtils::HashString("INT");
        static const int FLOAT_HASH = HashingUtils::HashString("FLOAT");
        static const int STRING_HASH = HashingUtils::HashString("STRING");
        static const int PATH_HASH = HashingUtils::HashString("PATH");


        StepParameterType GetStepParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INT_HASH)
          {
            return StepParameterType::INT;
          }
          else if (hashCode == FLOAT_HASH)
          {
            return StepParameterType::FLOAT;
          }
          else if (hashCode == STRING_HASH)
          {
            return StepParameterType::STRING;
          }
          else if (hashCode == PATH_HASH)
          {
            return StepParameterType::PATH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StepParameterType>(hashCode);
          }

          return StepParameterType::NOT_SET;
        }

        Aws::String GetNameForStepParameterType(StepParameterType enumValue)
        {
          switch(enumValue)
          {
          case StepParameterType::NOT_SET:
            return {};
          case StepParameterType::INT:
            return "INT";
          case StepParameterType::FLOAT:
            return "FLOAT";
          case StepParameterType::STRING:
            return "STRING";
          case StepParameterType::PATH:
            return "PATH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StepParameterTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
