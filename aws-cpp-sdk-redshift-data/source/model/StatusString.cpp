/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/StatusString.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RedshiftDataAPIService
  {
    namespace Model
    {
      namespace StatusStringMapper
      {

        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int PICKED_HASH = HashingUtils::HashString("PICKED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");
        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");


        StatusString GetStatusStringForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ABORTED_HASH)
          {
            return StatusString::ABORTED;
          }
          else if (hashCode == ALL_HASH)
          {
            return StatusString::ALL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StatusString::FAILED;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return StatusString::FINISHED;
          }
          else if (hashCode == PICKED_HASH)
          {
            return StatusString::PICKED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return StatusString::STARTED;
          }
          else if (hashCode == SUBMITTED_HASH)
          {
            return StatusString::SUBMITTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatusString>(hashCode);
          }

          return StatusString::NOT_SET;
        }

        Aws::String GetNameForStatusString(StatusString enumValue)
        {
          switch(enumValue)
          {
          case StatusString::ABORTED:
            return "ABORTED";
          case StatusString::ALL:
            return "ALL";
          case StatusString::FAILED:
            return "FAILED";
          case StatusString::FINISHED:
            return "FINISHED";
          case StatusString::PICKED:
            return "PICKED";
          case StatusString::STARTED:
            return "STARTED";
          case StatusString::SUBMITTED:
            return "SUBMITTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatusStringMapper
    } // namespace Model
  } // namespace RedshiftDataAPIService
} // namespace Aws
