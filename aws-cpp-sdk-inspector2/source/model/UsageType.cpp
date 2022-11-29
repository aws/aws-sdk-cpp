/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UsageType.h>
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
      namespace UsageTypeMapper
      {

        static const int EC2_INSTANCE_HOURS_HASH = HashingUtils::HashString("EC2_INSTANCE_HOURS");
        static const int ECR_INITIAL_SCAN_HASH = HashingUtils::HashString("ECR_INITIAL_SCAN");
        static const int ECR_RESCAN_HASH = HashingUtils::HashString("ECR_RESCAN");
        static const int LAMBDA_FUNCTION_HOURS_HASH = HashingUtils::HashString("LAMBDA_FUNCTION_HOURS");


        UsageType GetUsageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EC2_INSTANCE_HOURS_HASH)
          {
            return UsageType::EC2_INSTANCE_HOURS;
          }
          else if (hashCode == ECR_INITIAL_SCAN_HASH)
          {
            return UsageType::ECR_INITIAL_SCAN;
          }
          else if (hashCode == ECR_RESCAN_HASH)
          {
            return UsageType::ECR_RESCAN;
          }
          else if (hashCode == LAMBDA_FUNCTION_HOURS_HASH)
          {
            return UsageType::LAMBDA_FUNCTION_HOURS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UsageType>(hashCode);
          }

          return UsageType::NOT_SET;
        }

        Aws::String GetNameForUsageType(UsageType enumValue)
        {
          switch(enumValue)
          {
          case UsageType::EC2_INSTANCE_HOURS:
            return "EC2_INSTANCE_HOURS";
          case UsageType::ECR_INITIAL_SCAN:
            return "ECR_INITIAL_SCAN";
          case UsageType::ECR_RESCAN:
            return "ECR_RESCAN";
          case UsageType::LAMBDA_FUNCTION_HOURS:
            return "LAMBDA_FUNCTION_HOURS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UsageTypeMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
