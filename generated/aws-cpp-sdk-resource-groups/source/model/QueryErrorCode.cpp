/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
