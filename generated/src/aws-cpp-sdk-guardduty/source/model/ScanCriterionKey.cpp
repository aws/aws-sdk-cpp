/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanCriterionKey.h>
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
      namespace ScanCriterionKeyMapper
      {

        static constexpr uint32_t EC2_INSTANCE_TAG_HASH = ConstExprHashingUtils::HashString("EC2_INSTANCE_TAG");


        ScanCriterionKey GetScanCriterionKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_INSTANCE_TAG_HASH)
          {
            return ScanCriterionKey::EC2_INSTANCE_TAG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScanCriterionKey>(hashCode);
          }

          return ScanCriterionKey::NOT_SET;
        }

        Aws::String GetNameForScanCriterionKey(ScanCriterionKey enumValue)
        {
          switch(enumValue)
          {
          case ScanCriterionKey::NOT_SET:
            return {};
          case ScanCriterionKey::EC2_INSTANCE_TAG:
            return "EC2_INSTANCE_TAG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScanCriterionKeyMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
