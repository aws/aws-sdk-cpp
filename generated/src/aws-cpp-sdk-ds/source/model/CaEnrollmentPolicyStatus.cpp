/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CaEnrollmentPolicyStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace CaEnrollmentPolicyStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Disabling_HASH = HashingUtils::HashString("Disabling");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int Impaired_HASH = HashingUtils::HashString("Impaired");


        CaEnrollmentPolicyStatus GetCaEnrollmentPolicyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return CaEnrollmentPolicyStatus::InProgress;
          }
          else if (hashCode == Success_HASH)
          {
            return CaEnrollmentPolicyStatus::Success;
          }
          else if (hashCode == Failed_HASH)
          {
            return CaEnrollmentPolicyStatus::Failed;
          }
          else if (hashCode == Disabling_HASH)
          {
            return CaEnrollmentPolicyStatus::Disabling;
          }
          else if (hashCode == Disabled_HASH)
          {
            return CaEnrollmentPolicyStatus::Disabled;
          }
          else if (hashCode == Impaired_HASH)
          {
            return CaEnrollmentPolicyStatus::Impaired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaEnrollmentPolicyStatus>(hashCode);
          }

          return CaEnrollmentPolicyStatus::NOT_SET;
        }

        Aws::String GetNameForCaEnrollmentPolicyStatus(CaEnrollmentPolicyStatus enumValue)
        {
          switch(enumValue)
          {
          case CaEnrollmentPolicyStatus::NOT_SET:
            return {};
          case CaEnrollmentPolicyStatus::InProgress:
            return "InProgress";
          case CaEnrollmentPolicyStatus::Success:
            return "Success";
          case CaEnrollmentPolicyStatus::Failed:
            return "Failed";
          case CaEnrollmentPolicyStatus::Disabling:
            return "Disabling";
          case CaEnrollmentPolicyStatus::Disabled:
            return "Disabled";
          case CaEnrollmentPolicyStatus::Impaired:
            return "Impaired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaEnrollmentPolicyStatusMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
