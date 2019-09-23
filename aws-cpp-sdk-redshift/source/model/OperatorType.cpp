/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/redshift/model/OperatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace OperatorTypeMapper
      {

        static const int eq_HASH = HashingUtils::HashString("eq");
        static const int lt_HASH = HashingUtils::HashString("lt");
        static const int gt_HASH = HashingUtils::HashString("gt");
        static const int le_HASH = HashingUtils::HashString("le");
        static const int ge_HASH = HashingUtils::HashString("ge");
        static const int in_HASH = HashingUtils::HashString("in");
        static const int between_HASH = HashingUtils::HashString("between");


        OperatorType GetOperatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == eq_HASH)
          {
            return OperatorType::eq;
          }
          else if (hashCode == lt_HASH)
          {
            return OperatorType::lt;
          }
          else if (hashCode == gt_HASH)
          {
            return OperatorType::gt;
          }
          else if (hashCode == le_HASH)
          {
            return OperatorType::le;
          }
          else if (hashCode == ge_HASH)
          {
            return OperatorType::ge;
          }
          else if (hashCode == in_HASH)
          {
            return OperatorType::in;
          }
          else if (hashCode == between_HASH)
          {
            return OperatorType::between;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperatorType>(hashCode);
          }

          return OperatorType::NOT_SET;
        }

        Aws::String GetNameForOperatorType(OperatorType enumValue)
        {
          switch(enumValue)
          {
          case OperatorType::eq:
            return "eq";
          case OperatorType::lt:
            return "lt";
          case OperatorType::gt:
            return "gt";
          case OperatorType::le:
            return "le";
          case OperatorType::ge:
            return "ge";
          case OperatorType::in:
            return "in";
          case OperatorType::between:
            return "between";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OperatorTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
