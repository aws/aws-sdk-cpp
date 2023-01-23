/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ApprovalState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace ApprovalStateMapper
      {

        static const int APPROVE_HASH = HashingUtils::HashString("APPROVE");
        static const int REVOKE_HASH = HashingUtils::HashString("REVOKE");


        ApprovalState GetApprovalStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVE_HASH)
          {
            return ApprovalState::APPROVE;
          }
          else if (hashCode == REVOKE_HASH)
          {
            return ApprovalState::REVOKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApprovalState>(hashCode);
          }

          return ApprovalState::NOT_SET;
        }

        Aws::String GetNameForApprovalState(ApprovalState enumValue)
        {
          switch(enumValue)
          {
          case ApprovalState::APPROVE:
            return "APPROVE";
          case ApprovalState::REVOKE:
            return "REVOKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApprovalStateMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
