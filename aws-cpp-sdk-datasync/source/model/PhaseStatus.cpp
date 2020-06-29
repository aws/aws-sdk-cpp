/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/PhaseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace PhaseStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        PhaseStatus GetPhaseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return PhaseStatus::PENDING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return PhaseStatus::SUCCESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return PhaseStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhaseStatus>(hashCode);
          }

          return PhaseStatus::NOT_SET;
        }

        Aws::String GetNameForPhaseStatus(PhaseStatus enumValue)
        {
          switch(enumValue)
          {
          case PhaseStatus::PENDING:
            return "PENDING";
          case PhaseStatus::SUCCESS:
            return "SUCCESS";
          case PhaseStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhaseStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
