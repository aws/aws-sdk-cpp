/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CriterionKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace CriterionKeyMapper
      {

        static const int EC2_INSTANCE_ARN_HASH = HashingUtils::HashString("EC2_INSTANCE_ARN");
        static const int SCAN_ID_HASH = HashingUtils::HashString("SCAN_ID");
        static const int ACCOUNT_ID_HASH = HashingUtils::HashString("ACCOUNT_ID");
        static const int GUARDDUTY_FINDING_ID_HASH = HashingUtils::HashString("GUARDDUTY_FINDING_ID");
        static const int SCAN_START_TIME_HASH = HashingUtils::HashString("SCAN_START_TIME");
        static const int SCAN_STATUS_HASH = HashingUtils::HashString("SCAN_STATUS");
        static const int SCAN_TYPE_HASH = HashingUtils::HashString("SCAN_TYPE");


        CriterionKey GetCriterionKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_INSTANCE_ARN_HASH)
          {
            return CriterionKey::EC2_INSTANCE_ARN;
          }
          else if (hashCode == SCAN_ID_HASH)
          {
            return CriterionKey::SCAN_ID;
          }
          else if (hashCode == ACCOUNT_ID_HASH)
          {
            return CriterionKey::ACCOUNT_ID;
          }
          else if (hashCode == GUARDDUTY_FINDING_ID_HASH)
          {
            return CriterionKey::GUARDDUTY_FINDING_ID;
          }
          else if (hashCode == SCAN_START_TIME_HASH)
          {
            return CriterionKey::SCAN_START_TIME;
          }
          else if (hashCode == SCAN_STATUS_HASH)
          {
            return CriterionKey::SCAN_STATUS;
          }
          else if (hashCode == SCAN_TYPE_HASH)
          {
            return CriterionKey::SCAN_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CriterionKey>(hashCode);
          }

          return CriterionKey::NOT_SET;
        }

        Aws::String GetNameForCriterionKey(CriterionKey enumValue)
        {
          switch(enumValue)
          {
          case CriterionKey::NOT_SET:
            return {};
          case CriterionKey::EC2_INSTANCE_ARN:
            return "EC2_INSTANCE_ARN";
          case CriterionKey::SCAN_ID:
            return "SCAN_ID";
          case CriterionKey::ACCOUNT_ID:
            return "ACCOUNT_ID";
          case CriterionKey::GUARDDUTY_FINDING_ID:
            return "GUARDDUTY_FINDING_ID";
          case CriterionKey::SCAN_START_TIME:
            return "SCAN_START_TIME";
          case CriterionKey::SCAN_STATUS:
            return "SCAN_STATUS";
          case CriterionKey::SCAN_TYPE:
            return "SCAN_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CriterionKeyMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
