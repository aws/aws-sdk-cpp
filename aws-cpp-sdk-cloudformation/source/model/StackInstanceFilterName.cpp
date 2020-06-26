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

#include <aws/cloudformation/model/StackInstanceFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackInstanceFilterNameMapper
      {

        static const int DETAILED_STATUS_HASH = HashingUtils::HashString("DETAILED_STATUS");


        StackInstanceFilterName GetStackInstanceFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETAILED_STATUS_HASH)
          {
            return StackInstanceFilterName::DETAILED_STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackInstanceFilterName>(hashCode);
          }

          return StackInstanceFilterName::NOT_SET;
        }

        Aws::String GetNameForStackInstanceFilterName(StackInstanceFilterName enumValue)
        {
          switch(enumValue)
          {
          case StackInstanceFilterName::DETAILED_STATUS:
            return "DETAILED_STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackInstanceFilterNameMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
