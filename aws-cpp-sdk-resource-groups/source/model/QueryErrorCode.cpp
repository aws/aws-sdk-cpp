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

#include <aws/resource-groups/model/QueryErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroups
  {
    namespace Model
    {
      namespace QueryErrorCodeMapper
      {

        static const int CLOUDFORMATION_STACK_INACTIVE_HASH = HashingUtils::HashString("CLOUDFORMATION_STACK_INACTIVE");
        static const int CLOUDFORMATION_STACK_NOT_EXISTING_HASH = HashingUtils::HashString("CLOUDFORMATION_STACK_NOT_EXISTING");


        QueryErrorCode GetQueryErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CLOUDFORMATION_STACK_INACTIVE_HASH)
          {
            return QueryErrorCode::CLOUDFORMATION_STACK_INACTIVE;
          }
          else if (hashCode == CLOUDFORMATION_STACK_NOT_EXISTING_HASH)
          {
            return QueryErrorCode::CLOUDFORMATION_STACK_NOT_EXISTING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryErrorCode>(hashCode);
          }

          return QueryErrorCode::NOT_SET;
        }

        Aws::String GetNameForQueryErrorCode(QueryErrorCode enumValue)
        {
          switch(enumValue)
          {
          case QueryErrorCode::CLOUDFORMATION_STACK_INACTIVE:
            return "CLOUDFORMATION_STACK_INACTIVE";
          case QueryErrorCode::CLOUDFORMATION_STACK_NOT_EXISTING:
            return "CLOUDFORMATION_STACK_NOT_EXISTING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryErrorCodeMapper
    } // namespace Model
  } // namespace ResourceGroups
} // namespace Aws
