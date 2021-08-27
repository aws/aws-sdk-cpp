/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AppInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace AppInstanceTypeMapper
      {

        static const int system_HASH = HashingUtils::HashString("system");
        static const int ml_t3_micro_HASH = HashingUtils::HashString("ml.t3.micro");
        static const int ml_t3_small_HASH = HashingUtils::HashString("ml.t3.small");
        static const int ml_t3_medium_HASH = HashingUtils::HashString("ml.t3.medium");
        static const int ml_t3_large_HASH = HashingUtils::HashString("ml.t3.large");
        static const int ml_t3_xlarge_HASH = HashingUtils::HashString("ml.t3.xlarge");
        static const int ml_t3_2xlarge_HASH = HashingUtils::HashString("ml.t3.2xlarge");
        static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
        static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
        static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
        static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
        static const int ml_m5_8xlarge_HASH = HashingUtils::HashString("ml.m5.8xlarge");
        static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
        static const int ml_m5_16xlarge_HASH = HashingUtils::HashString("ml.m5.16xlarge");
        static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
        static const int ml_c5_large_HASH = HashingUtils::HashString("ml.c5.large");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_12xlarge_HASH = HashingUtils::HashString("ml.c5.12xlarge");
        static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
        static const int ml_c5_24xlarge_HASH = HashingUtils::HashString("ml.c5.24xlarge");
        static const int ml_p3_2xlarge_HASH = HashingUtils::HashString("ml.p3.2xlarge");
        static const int ml_p3_8xlarge_HASH = HashingUtils::HashString("ml.p3.8xlarge");
        static const int ml_p3_16xlarge_HASH = HashingUtils::HashString("ml.p3.16xlarge");
        static const int ml_g4dn_xlarge_HASH = HashingUtils::HashString("ml.g4dn.xlarge");
        static const int ml_g4dn_2xlarge_HASH = HashingUtils::HashString("ml.g4dn.2xlarge");
        static const int ml_g4dn_4xlarge_HASH = HashingUtils::HashString("ml.g4dn.4xlarge");
        static const int ml_g4dn_8xlarge_HASH = HashingUtils::HashString("ml.g4dn.8xlarge");
        static const int ml_g4dn_12xlarge_HASH = HashingUtils::HashString("ml.g4dn.12xlarge");
        static const int ml_g4dn_16xlarge_HASH = HashingUtils::HashString("ml.g4dn.16xlarge");


        AppInstanceType GetAppInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == system_HASH)
          {
            return AppInstanceType::system;
          }
          else if (hashCode == ml_t3_micro_HASH)
          {
            return AppInstanceType::ml_t3_micro;
          }
          else if (hashCode == ml_t3_small_HASH)
          {
            return AppInstanceType::ml_t3_small;
          }
          else if (hashCode == ml_t3_medium_HASH)
          {
            return AppInstanceType::ml_t3_medium;
          }
          else if (hashCode == ml_t3_large_HASH)
          {
            return AppInstanceType::ml_t3_large;
          }
          else if (hashCode == ml_t3_xlarge_HASH)
          {
            return AppInstanceType::ml_t3_xlarge;
          }
          else if (hashCode == ml_t3_2xlarge_HASH)
          {
            return AppInstanceType::ml_t3_2xlarge;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            return AppInstanceType::ml_m5_large;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            return AppInstanceType::ml_m5_xlarge;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            return AppInstanceType::ml_m5_2xlarge;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            return AppInstanceType::ml_m5_4xlarge;
          }
          else if (hashCode == ml_m5_8xlarge_HASH)
          {
            return AppInstanceType::ml_m5_8xlarge;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            return AppInstanceType::ml_m5_12xlarge;
          }
          else if (hashCode == ml_m5_16xlarge_HASH)
          {
            return AppInstanceType::ml_m5_16xlarge;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            return AppInstanceType::ml_m5_24xlarge;
          }
          else if (hashCode == ml_c5_large_HASH)
          {
            return AppInstanceType::ml_c5_large;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            return AppInstanceType::ml_c5_xlarge;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            return AppInstanceType::ml_c5_2xlarge;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            return AppInstanceType::ml_c5_4xlarge;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            return AppInstanceType::ml_c5_9xlarge;
          }
          else if (hashCode == ml_c5_12xlarge_HASH)
          {
            return AppInstanceType::ml_c5_12xlarge;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            return AppInstanceType::ml_c5_18xlarge;
          }
          else if (hashCode == ml_c5_24xlarge_HASH)
          {
            return AppInstanceType::ml_c5_24xlarge;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            return AppInstanceType::ml_p3_2xlarge;
          }
          else if (hashCode == ml_p3_8xlarge_HASH)
          {
            return AppInstanceType::ml_p3_8xlarge;
          }
          else if (hashCode == ml_p3_16xlarge_HASH)
          {
            return AppInstanceType::ml_p3_16xlarge;
          }
          else if (hashCode == ml_g4dn_xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_xlarge;
          }
          else if (hashCode == ml_g4dn_2xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_2xlarge;
          }
          else if (hashCode == ml_g4dn_4xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_4xlarge;
          }
          else if (hashCode == ml_g4dn_8xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_8xlarge;
          }
          else if (hashCode == ml_g4dn_12xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_12xlarge;
          }
          else if (hashCode == ml_g4dn_16xlarge_HASH)
          {
            return AppInstanceType::ml_g4dn_16xlarge;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AppInstanceType>(hashCode);
          }

          return AppInstanceType::NOT_SET;
        }

        Aws::String GetNameForAppInstanceType(AppInstanceType enumValue)
        {
          switch(enumValue)
          {
          case AppInstanceType::system:
            return "system";
          case AppInstanceType::ml_t3_micro:
            return "ml.t3.micro";
          case AppInstanceType::ml_t3_small:
            return "ml.t3.small";
          case AppInstanceType::ml_t3_medium:
            return "ml.t3.medium";
          case AppInstanceType::ml_t3_large:
            return "ml.t3.large";
          case AppInstanceType::ml_t3_xlarge:
            return "ml.t3.xlarge";
          case AppInstanceType::ml_t3_2xlarge:
            return "ml.t3.2xlarge";
          case AppInstanceType::ml_m5_large:
            return "ml.m5.large";
          case AppInstanceType::ml_m5_xlarge:
            return "ml.m5.xlarge";
          case AppInstanceType::ml_m5_2xlarge:
            return "ml.m5.2xlarge";
          case AppInstanceType::ml_m5_4xlarge:
            return "ml.m5.4xlarge";
          case AppInstanceType::ml_m5_8xlarge:
            return "ml.m5.8xlarge";
          case AppInstanceType::ml_m5_12xlarge:
            return "ml.m5.12xlarge";
          case AppInstanceType::ml_m5_16xlarge:
            return "ml.m5.16xlarge";
          case AppInstanceType::ml_m5_24xlarge:
            return "ml.m5.24xlarge";
          case AppInstanceType::ml_c5_large:
            return "ml.c5.large";
          case AppInstanceType::ml_c5_xlarge:
            return "ml.c5.xlarge";
          case AppInstanceType::ml_c5_2xlarge:
            return "ml.c5.2xlarge";
          case AppInstanceType::ml_c5_4xlarge:
            return "ml.c5.4xlarge";
          case AppInstanceType::ml_c5_9xlarge:
            return "ml.c5.9xlarge";
          case AppInstanceType::ml_c5_12xlarge:
            return "ml.c5.12xlarge";
          case AppInstanceType::ml_c5_18xlarge:
            return "ml.c5.18xlarge";
          case AppInstanceType::ml_c5_24xlarge:
            return "ml.c5.24xlarge";
          case AppInstanceType::ml_p3_2xlarge:
            return "ml.p3.2xlarge";
          case AppInstanceType::ml_p3_8xlarge:
            return "ml.p3.8xlarge";
          case AppInstanceType::ml_p3_16xlarge:
            return "ml.p3.16xlarge";
          case AppInstanceType::ml_g4dn_xlarge:
            return "ml.g4dn.xlarge";
          case AppInstanceType::ml_g4dn_2xlarge:
            return "ml.g4dn.2xlarge";
          case AppInstanceType::ml_g4dn_4xlarge:
            return "ml.g4dn.4xlarge";
          case AppInstanceType::ml_g4dn_8xlarge:
            return "ml.g4dn.8xlarge";
          case AppInstanceType::ml_g4dn_12xlarge:
            return "ml.g4dn.12xlarge";
          case AppInstanceType::ml_g4dn_16xlarge:
            return "ml.g4dn.16xlarge";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AppInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
