/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2ScanModeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace Ec2ScanModeStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");


        Ec2ScanModeStatus GetEc2ScanModeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return Ec2ScanModeStatus::SUCCESS;
          }
          else if (hashCode == PENDING_HASH)
          {
            return Ec2ScanModeStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2ScanModeStatus>(hashCode);
          }

          return Ec2ScanModeStatus::NOT_SET;
        }

        Aws::String GetNameForEc2ScanModeStatus(Ec2ScanModeStatus enumValue)
        {
          switch(enumValue)
          {
          case Ec2ScanModeStatus::NOT_SET:
            return {};
          case Ec2ScanModeStatus::SUCCESS:
            return "SUCCESS";
          case Ec2ScanModeStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2ScanModeStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
