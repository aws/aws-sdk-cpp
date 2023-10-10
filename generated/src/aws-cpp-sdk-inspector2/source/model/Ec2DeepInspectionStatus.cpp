/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/Ec2DeepInspectionStatus.h>
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
      namespace Ec2DeepInspectionStatusMapper
      {

        static const int ACTIVATED_HASH = HashingUtils::HashString("ACTIVATED");
        static const int DEACTIVATED_HASH = HashingUtils::HashString("DEACTIVATED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        Ec2DeepInspectionStatus GetEc2DeepInspectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATED_HASH)
          {
            return Ec2DeepInspectionStatus::ACTIVATED;
          }
          else if (hashCode == DEACTIVATED_HASH)
          {
            return Ec2DeepInspectionStatus::DEACTIVATED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return Ec2DeepInspectionStatus::PENDING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return Ec2DeepInspectionStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ec2DeepInspectionStatus>(hashCode);
          }

          return Ec2DeepInspectionStatus::NOT_SET;
        }

        Aws::String GetNameForEc2DeepInspectionStatus(Ec2DeepInspectionStatus enumValue)
        {
          switch(enumValue)
          {
          case Ec2DeepInspectionStatus::NOT_SET:
            return {};
          case Ec2DeepInspectionStatus::ACTIVATED:
            return "ACTIVATED";
          case Ec2DeepInspectionStatus::DEACTIVATED:
            return "DEACTIVATED";
          case Ec2DeepInspectionStatus::PENDING:
            return "PENDING";
          case Ec2DeepInspectionStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ec2DeepInspectionStatusMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
