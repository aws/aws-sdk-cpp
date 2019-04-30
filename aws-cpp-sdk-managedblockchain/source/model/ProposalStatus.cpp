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

#include <aws/managedblockchain/model/ProposalStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace ProposalStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int ACTION_FAILED_HASH = HashingUtils::HashString("ACTION_FAILED");


        ProposalStatus GetProposalStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ProposalStatus::IN_PROGRESS;
          }
          else if (hashCode == APPROVED_HASH)
          {
            return ProposalStatus::APPROVED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ProposalStatus::REJECTED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ProposalStatus::EXPIRED;
          }
          else if (hashCode == ACTION_FAILED_HASH)
          {
            return ProposalStatus::ACTION_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProposalStatus>(hashCode);
          }

          return ProposalStatus::NOT_SET;
        }

        Aws::String GetNameForProposalStatus(ProposalStatus enumValue)
        {
          switch(enumValue)
          {
          case ProposalStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ProposalStatus::APPROVED:
            return "APPROVED";
          case ProposalStatus::REJECTED:
            return "REJECTED";
          case ProposalStatus::EXPIRED:
            return "EXPIRED";
          case ProposalStatus::ACTION_FAILED:
            return "ACTION_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProposalStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
