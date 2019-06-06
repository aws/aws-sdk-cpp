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

#include <aws/ssm/model/OpsItemFilterOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace OpsItemFilterOperatorMapper
      {

        static const int Equal_HASH = HashingUtils::HashString("Equal");
        static const int Contains_HASH = HashingUtils::HashString("Contains");
        static const int GreaterThan_HASH = HashingUtils::HashString("GreaterThan");
        static const int LessThan_HASH = HashingUtils::HashString("LessThan");


        OpsItemFilterOperator GetOpsItemFilterOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equal_HASH)
          {
            return OpsItemFilterOperator::Equal;
          }
          else if (hashCode == Contains_HASH)
          {
            return OpsItemFilterOperator::Contains;
          }
          else if (hashCode == GreaterThan_HASH)
          {
            return OpsItemFilterOperator::GreaterThan;
          }
          else if (hashCode == LessThan_HASH)
          {
            return OpsItemFilterOperator::LessThan;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpsItemFilterOperator>(hashCode);
          }

          return OpsItemFilterOperator::NOT_SET;
        }

        Aws::String GetNameForOpsItemFilterOperator(OpsItemFilterOperator enumValue)
        {
          switch(enumValue)
          {
          case OpsItemFilterOperator::Equal:
            return "Equal";
          case OpsItemFilterOperator::Contains:
            return "Contains";
          case OpsItemFilterOperator::GreaterThan:
            return "GreaterThan";
          case OpsItemFilterOperator::LessThan:
            return "LessThan";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpsItemFilterOperatorMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
