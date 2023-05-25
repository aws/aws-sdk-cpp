/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/R53HostedZoneDeletionStateCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace R53HostedZoneDeletionStateCodeMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");


        R53HostedZoneDeletionStateCode GetR53HostedZoneDeletionStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return R53HostedZoneDeletionStateCode::SUCCEEDED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return R53HostedZoneDeletionStateCode::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return R53HostedZoneDeletionStateCode::FAILED;
          }
          else if (hashCode == STARTED_HASH)
          {
            return R53HostedZoneDeletionStateCode::STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<R53HostedZoneDeletionStateCode>(hashCode);
          }

          return R53HostedZoneDeletionStateCode::NOT_SET;
        }

        Aws::String GetNameForR53HostedZoneDeletionStateCode(R53HostedZoneDeletionStateCode enumValue)
        {
          switch(enumValue)
          {
          case R53HostedZoneDeletionStateCode::SUCCEEDED:
            return "SUCCEEDED";
          case R53HostedZoneDeletionStateCode::PENDING:
            return "PENDING";
          case R53HostedZoneDeletionStateCode::FAILED:
            return "FAILED";
          case R53HostedZoneDeletionStateCode::STARTED:
            return "STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace R53HostedZoneDeletionStateCodeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
