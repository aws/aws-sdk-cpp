/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
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
      namespace ProductionVariantInstanceTypeMapper
      {

        static const int ml_t2_medium_HASH = HashingUtils::HashString("ml.t2.medium");
        static const int ml_t2_large_HASH = HashingUtils::HashString("ml.t2.large");
        static const int ml_t2_xlarge_HASH = HashingUtils::HashString("ml.t2.xlarge");
        static const int ml_t2_2xlarge_HASH = HashingUtils::HashString("ml.t2.2xlarge");
        static const int ml_m4_xlarge_HASH = HashingUtils::HashString("ml.m4.xlarge");
        static const int ml_m4_2xlarge_HASH = HashingUtils::HashString("ml.m4.2xlarge");
        static const int ml_m4_4xlarge_HASH = HashingUtils::HashString("ml.m4.4xlarge");
        static const int ml_m4_10xlarge_HASH = HashingUtils::HashString("ml.m4.10xlarge");
        static const int ml_m4_16xlarge_HASH = HashingUtils::HashString("ml.m4.16xlarge");
        static const int ml_m5_large_HASH = HashingUtils::HashString("ml.m5.large");
        static const int ml_m5_xlarge_HASH = HashingUtils::HashString("ml.m5.xlarge");
        static const int ml_m5_2xlarge_HASH = HashingUtils::HashString("ml.m5.2xlarge");
        static const int ml_m5_4xlarge_HASH = HashingUtils::HashString("ml.m5.4xlarge");
        static const int ml_m5_12xlarge_HASH = HashingUtils::HashString("ml.m5.12xlarge");
        static const int ml_m5_24xlarge_HASH = HashingUtils::HashString("ml.m5.24xlarge");
        static const int ml_m5d_large_HASH = HashingUtils::HashString("ml.m5d.large");
        static const int ml_m5d_xlarge_HASH = HashingUtils::HashString("ml.m5d.xlarge");
        static const int ml_m5d_2xlarge_HASH = HashingUtils::HashString("ml.m5d.2xlarge");
        static const int ml_m5d_4xlarge_HASH = HashingUtils::HashString("ml.m5d.4xlarge");
        static const int ml_m5d_12xlarge_HASH = HashingUtils::HashString("ml.m5d.12xlarge");
        static const int ml_m5d_24xlarge_HASH = HashingUtils::HashString("ml.m5d.24xlarge");
        static const int ml_c4_large_HASH = HashingUtils::HashString("ml.c4.large");
        static const int ml_c4_xlarge_HASH = HashingUtils::HashString("ml.c4.xlarge");
        static const int ml_c4_2xlarge_HASH = HashingUtils::HashString("ml.c4.2xlarge");
        static const int ml_c4_4xlarge_HASH = HashingUtils::HashString("ml.c4.4xlarge");
        static const int ml_c4_8xlarge_HASH = HashingUtils::HashString("ml.c4.8xlarge");
        static const int ml_p2_xlarge_HASH = HashingUtils::HashString("ml.p2.xlarge");
        static const int ml_p2_8xlarge_HASH = HashingUtils::HashString("ml.p2.8xlarge");
        static const int ml_p2_16xlarge_HASH = HashingUtils::HashString("ml.p2.16xlarge");
        static const int ml_p3_2xlarge_HASH = HashingUtils::HashString("ml.p3.2xlarge");
        static const int ml_p3_8xlarge_HASH = HashingUtils::HashString("ml.p3.8xlarge");
        static const int ml_p3_16xlarge_HASH = HashingUtils::HashString("ml.p3.16xlarge");
        static const int ml_c5_large_HASH = HashingUtils::HashString("ml.c5.large");
        static const int ml_c5_xlarge_HASH = HashingUtils::HashString("ml.c5.xlarge");
        static const int ml_c5_2xlarge_HASH = HashingUtils::HashString("ml.c5.2xlarge");
        static const int ml_c5_4xlarge_HASH = HashingUtils::HashString("ml.c5.4xlarge");
        static const int ml_c5_9xlarge_HASH = HashingUtils::HashString("ml.c5.9xlarge");
        static const int ml_c5_18xlarge_HASH = HashingUtils::HashString("ml.c5.18xlarge");
        static const int ml_c5d_large_HASH = HashingUtils::HashString("ml.c5d.large");
        static const int ml_c5d_xlarge_HASH = HashingUtils::HashString("ml.c5d.xlarge");
        static const int ml_c5d_2xlarge_HASH = HashingUtils::HashString("ml.c5d.2xlarge");
        static const int ml_c5d_4xlarge_HASH = HashingUtils::HashString("ml.c5d.4xlarge");
        static const int ml_c5d_9xlarge_HASH = HashingUtils::HashString("ml.c5d.9xlarge");
        static const int ml_c5d_18xlarge_HASH = HashingUtils::HashString("ml.c5d.18xlarge");
        static const int ml_g4dn_xlarge_HASH = HashingUtils::HashString("ml.g4dn.xlarge");
        static const int ml_g4dn_2xlarge_HASH = HashingUtils::HashString("ml.g4dn.2xlarge");
        static const int ml_g4dn_4xlarge_HASH = HashingUtils::HashString("ml.g4dn.4xlarge");
        static const int ml_g4dn_8xlarge_HASH = HashingUtils::HashString("ml.g4dn.8xlarge");
        static const int ml_g4dn_12xlarge_HASH = HashingUtils::HashString("ml.g4dn.12xlarge");
        static const int ml_g4dn_16xlarge_HASH = HashingUtils::HashString("ml.g4dn.16xlarge");
        static const int ml_r5_large_HASH = HashingUtils::HashString("ml.r5.large");
        static const int ml_r5_xlarge_HASH = HashingUtils::HashString("ml.r5.xlarge");
        static const int ml_r5_2xlarge_HASH = HashingUtils::HashString("ml.r5.2xlarge");
        static const int ml_r5_4xlarge_HASH = HashingUtils::HashString("ml.r5.4xlarge");
        static const int ml_r5_12xlarge_HASH = HashingUtils::HashString("ml.r5.12xlarge");
        static const int ml_r5_24xlarge_HASH = HashingUtils::HashString("ml.r5.24xlarge");
        static const int ml_r5d_large_HASH = HashingUtils::HashString("ml.r5d.large");
        static const int ml_r5d_xlarge_HASH = HashingUtils::HashString("ml.r5d.xlarge");
        static const int ml_r5d_2xlarge_HASH = HashingUtils::HashString("ml.r5d.2xlarge");
        static const int ml_r5d_4xlarge_HASH = HashingUtils::HashString("ml.r5d.4xlarge");
        static const int ml_r5d_12xlarge_HASH = HashingUtils::HashString("ml.r5d.12xlarge");
        static const int ml_r5d_24xlarge_HASH = HashingUtils::HashString("ml.r5d.24xlarge");
        static const int ml_inf1_xlarge_HASH = HashingUtils::HashString("ml.inf1.xlarge");
        static const int ml_inf1_2xlarge_HASH = HashingUtils::HashString("ml.inf1.2xlarge");
        static const int ml_inf1_6xlarge_HASH = HashingUtils::HashString("ml.inf1.6xlarge");
        static const int ml_inf1_24xlarge_HASH = HashingUtils::HashString("ml.inf1.24xlarge");
        static const int ml_c6i_large_HASH = HashingUtils::HashString("ml.c6i.large");
        static const int ml_c6i_xlarge_HASH = HashingUtils::HashString("ml.c6i.xlarge");
        static const int ml_c6i_2xlarge_HASH = HashingUtils::HashString("ml.c6i.2xlarge");
        static const int ml_c6i_4xlarge_HASH = HashingUtils::HashString("ml.c6i.4xlarge");
        static const int ml_c6i_8xlarge_HASH = HashingUtils::HashString("ml.c6i.8xlarge");
        static const int ml_c6i_12xlarge_HASH = HashingUtils::HashString("ml.c6i.12xlarge");
        static const int ml_c6i_16xlarge_HASH = HashingUtils::HashString("ml.c6i.16xlarge");
        static const int ml_c6i_24xlarge_HASH = HashingUtils::HashString("ml.c6i.24xlarge");
        static const int ml_c6i_32xlarge_HASH = HashingUtils::HashString("ml.c6i.32xlarge");
        static const int ml_g5_xlarge_HASH = HashingUtils::HashString("ml.g5.xlarge");
        static const int ml_g5_2xlarge_HASH = HashingUtils::HashString("ml.g5.2xlarge");
        static const int ml_g5_4xlarge_HASH = HashingUtils::HashString("ml.g5.4xlarge");
        static const int ml_g5_8xlarge_HASH = HashingUtils::HashString("ml.g5.8xlarge");
        static const int ml_g5_12xlarge_HASH = HashingUtils::HashString("ml.g5.12xlarge");
        static const int ml_g5_16xlarge_HASH = HashingUtils::HashString("ml.g5.16xlarge");
        static const int ml_g5_24xlarge_HASH = HashingUtils::HashString("ml.g5.24xlarge");
        static const int ml_g5_48xlarge_HASH = HashingUtils::HashString("ml.g5.48xlarge");
        static const int ml_p4d_24xlarge_HASH = HashingUtils::HashString("ml.p4d.24xlarge");
        static const int ml_c7g_large_HASH = HashingUtils::HashString("ml.c7g.large");
        static const int ml_c7g_xlarge_HASH = HashingUtils::HashString("ml.c7g.xlarge");
        static const int ml_c7g_2xlarge_HASH = HashingUtils::HashString("ml.c7g.2xlarge");
        static const int ml_c7g_4xlarge_HASH = HashingUtils::HashString("ml.c7g.4xlarge");
        static const int ml_c7g_8xlarge_HASH = HashingUtils::HashString("ml.c7g.8xlarge");
        static const int ml_c7g_12xlarge_HASH = HashingUtils::HashString("ml.c7g.12xlarge");
        static const int ml_c7g_16xlarge_HASH = HashingUtils::HashString("ml.c7g.16xlarge");
        static const int ml_m6g_large_HASH = HashingUtils::HashString("ml.m6g.large");
        static const int ml_m6g_xlarge_HASH = HashingUtils::HashString("ml.m6g.xlarge");
        static const int ml_m6g_2xlarge_HASH = HashingUtils::HashString("ml.m6g.2xlarge");
        static const int ml_m6g_4xlarge_HASH = HashingUtils::HashString("ml.m6g.4xlarge");
        static const int ml_m6g_8xlarge_HASH = HashingUtils::HashString("ml.m6g.8xlarge");
        static const int ml_m6g_12xlarge_HASH = HashingUtils::HashString("ml.m6g.12xlarge");
        static const int ml_m6g_16xlarge_HASH = HashingUtils::HashString("ml.m6g.16xlarge");
        static const int ml_m6gd_large_HASH = HashingUtils::HashString("ml.m6gd.large");
        static const int ml_m6gd_xlarge_HASH = HashingUtils::HashString("ml.m6gd.xlarge");
        static const int ml_m6gd_2xlarge_HASH = HashingUtils::HashString("ml.m6gd.2xlarge");
        static const int ml_m6gd_4xlarge_HASH = HashingUtils::HashString("ml.m6gd.4xlarge");
        static const int ml_m6gd_8xlarge_HASH = HashingUtils::HashString("ml.m6gd.8xlarge");
        static const int ml_m6gd_12xlarge_HASH = HashingUtils::HashString("ml.m6gd.12xlarge");
        static const int ml_m6gd_16xlarge_HASH = HashingUtils::HashString("ml.m6gd.16xlarge");
        static const int ml_c6g_large_HASH = HashingUtils::HashString("ml.c6g.large");
        static const int ml_c6g_xlarge_HASH = HashingUtils::HashString("ml.c6g.xlarge");
        static const int ml_c6g_2xlarge_HASH = HashingUtils::HashString("ml.c6g.2xlarge");
        static const int ml_c6g_4xlarge_HASH = HashingUtils::HashString("ml.c6g.4xlarge");
        static const int ml_c6g_8xlarge_HASH = HashingUtils::HashString("ml.c6g.8xlarge");
        static const int ml_c6g_12xlarge_HASH = HashingUtils::HashString("ml.c6g.12xlarge");
        static const int ml_c6g_16xlarge_HASH = HashingUtils::HashString("ml.c6g.16xlarge");
        static const int ml_c6gd_large_HASH = HashingUtils::HashString("ml.c6gd.large");
        static const int ml_c6gd_xlarge_HASH = HashingUtils::HashString("ml.c6gd.xlarge");
        static const int ml_c6gd_2xlarge_HASH = HashingUtils::HashString("ml.c6gd.2xlarge");
        static const int ml_c6gd_4xlarge_HASH = HashingUtils::HashString("ml.c6gd.4xlarge");
        static const int ml_c6gd_8xlarge_HASH = HashingUtils::HashString("ml.c6gd.8xlarge");
        static const int ml_c6gd_12xlarge_HASH = HashingUtils::HashString("ml.c6gd.12xlarge");
        static const int ml_c6gd_16xlarge_HASH = HashingUtils::HashString("ml.c6gd.16xlarge");
        static const int ml_c6gn_large_HASH = HashingUtils::HashString("ml.c6gn.large");
        static const int ml_c6gn_xlarge_HASH = HashingUtils::HashString("ml.c6gn.xlarge");
        static const int ml_c6gn_2xlarge_HASH = HashingUtils::HashString("ml.c6gn.2xlarge");
        static const int ml_c6gn_4xlarge_HASH = HashingUtils::HashString("ml.c6gn.4xlarge");
        static const int ml_c6gn_8xlarge_HASH = HashingUtils::HashString("ml.c6gn.8xlarge");
        static const int ml_c6gn_12xlarge_HASH = HashingUtils::HashString("ml.c6gn.12xlarge");
        static const int ml_c6gn_16xlarge_HASH = HashingUtils::HashString("ml.c6gn.16xlarge");
        static const int ml_r6g_large_HASH = HashingUtils::HashString("ml.r6g.large");
        static const int ml_r6g_xlarge_HASH = HashingUtils::HashString("ml.r6g.xlarge");
        static const int ml_r6g_2xlarge_HASH = HashingUtils::HashString("ml.r6g.2xlarge");
        static const int ml_r6g_4xlarge_HASH = HashingUtils::HashString("ml.r6g.4xlarge");
        static const int ml_r6g_8xlarge_HASH = HashingUtils::HashString("ml.r6g.8xlarge");
        static const int ml_r6g_12xlarge_HASH = HashingUtils::HashString("ml.r6g.12xlarge");
        static const int ml_r6g_16xlarge_HASH = HashingUtils::HashString("ml.r6g.16xlarge");
        static const int ml_r6gd_large_HASH = HashingUtils::HashString("ml.r6gd.large");
        static const int ml_r6gd_xlarge_HASH = HashingUtils::HashString("ml.r6gd.xlarge");
        static const int ml_r6gd_2xlarge_HASH = HashingUtils::HashString("ml.r6gd.2xlarge");
        static const int ml_r6gd_4xlarge_HASH = HashingUtils::HashString("ml.r6gd.4xlarge");
        static const int ml_r6gd_8xlarge_HASH = HashingUtils::HashString("ml.r6gd.8xlarge");
        static const int ml_r6gd_12xlarge_HASH = HashingUtils::HashString("ml.r6gd.12xlarge");
        static const int ml_r6gd_16xlarge_HASH = HashingUtils::HashString("ml.r6gd.16xlarge");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, ProductionVariantInstanceType& enumValue)
        {
          if (hashCode == ml_t2_medium_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_t2_medium;
            return true;
          }
          else if (hashCode == ml_t2_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_t2_large;
            return true;
          }
          else if (hashCode == ml_t2_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_t2_xlarge;
            return true;
          }
          else if (hashCode == ml_t2_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_t2_2xlarge;
            return true;
          }
          else if (hashCode == ml_m4_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m4_xlarge;
            return true;
          }
          else if (hashCode == ml_m4_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m4_2xlarge;
            return true;
          }
          else if (hashCode == ml_m4_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m4_4xlarge;
            return true;
          }
          else if (hashCode == ml_m4_10xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m4_10xlarge;
            return true;
          }
          else if (hashCode == ml_m4_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m4_16xlarge;
            return true;
          }
          else if (hashCode == ml_m5_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5_large;
            return true;
          }
          else if (hashCode == ml_m5_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5_xlarge;
            return true;
          }
          else if (hashCode == ml_m5_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5_2xlarge;
            return true;
          }
          else if (hashCode == ml_m5_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5_4xlarge;
            return true;
          }
          else if (hashCode == ml_m5_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5_12xlarge;
            return true;
          }
          else if (hashCode == ml_m5_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5_24xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5d_large;
            return true;
          }
          else if (hashCode == ml_m5d_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5d_xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5d_2xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5d_4xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5d_12xlarge;
            return true;
          }
          else if (hashCode == ml_m5d_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m5d_24xlarge;
            return true;
          }
          else if (hashCode == ml_c4_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c4_large;
            return true;
          }
          else if (hashCode == ml_c4_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c4_xlarge;
            return true;
          }
          else if (hashCode == ml_c4_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c4_2xlarge;
            return true;
          }
          else if (hashCode == ml_c4_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c4_4xlarge;
            return true;
          }
          else if (hashCode == ml_c4_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c4_8xlarge;
            return true;
          }
          else if (hashCode == ml_p2_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_p2_xlarge;
            return true;
          }
          else if (hashCode == ml_p2_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_p2_8xlarge;
            return true;
          }
          else if (hashCode == ml_p2_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_p2_16xlarge;
            return true;
          }
          else if (hashCode == ml_p3_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_p3_2xlarge;
            return true;
          }
          else if (hashCode == ml_p3_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_p3_8xlarge;
            return true;
          }
          else if (hashCode == ml_p3_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_p3_16xlarge;
            return true;
          }
          else if (hashCode == ml_c5_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5_large;
            return true;
          }
          else if (hashCode == ml_c5_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5_xlarge;
            return true;
          }
          else if (hashCode == ml_c5_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5_2xlarge;
            return true;
          }
          else if (hashCode == ml_c5_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5_4xlarge;
            return true;
          }
          else if (hashCode == ml_c5_9xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5_9xlarge;
            return true;
          }
          else if (hashCode == ml_c5_18xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5_18xlarge;
            return true;
          }
          else if (hashCode == ml_c5d_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5d_large;
            return true;
          }
          else if (hashCode == ml_c5d_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5d_xlarge;
            return true;
          }
          else if (hashCode == ml_c5d_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5d_2xlarge;
            return true;
          }
          else if (hashCode == ml_c5d_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5d_4xlarge;
            return true;
          }
          else if (hashCode == ml_c5d_9xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5d_9xlarge;
            return true;
          }
          else if (hashCode == ml_c5d_18xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c5d_18xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g4dn_xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g4dn_2xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g4dn_4xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g4dn_8xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g4dn_12xlarge;
            return true;
          }
          else if (hashCode == ml_g4dn_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g4dn_16xlarge;
            return true;
          }
          else if (hashCode == ml_r5_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5_large;
            return true;
          }
          else if (hashCode == ml_r5_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5_xlarge;
            return true;
          }
          else if (hashCode == ml_r5_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5_2xlarge;
            return true;
          }
          else if (hashCode == ml_r5_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5_4xlarge;
            return true;
          }
          else if (hashCode == ml_r5_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5_12xlarge;
            return true;
          }
          else if (hashCode == ml_r5_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5_24xlarge;
            return true;
          }
          else if (hashCode == ml_r5d_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5d_large;
            return true;
          }
          else if (hashCode == ml_r5d_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5d_xlarge;
            return true;
          }
          else if (hashCode == ml_r5d_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5d_2xlarge;
            return true;
          }
          else if (hashCode == ml_r5d_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5d_4xlarge;
            return true;
          }
          else if (hashCode == ml_r5d_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5d_12xlarge;
            return true;
          }
          else if (hashCode == ml_r5d_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r5d_24xlarge;
            return true;
          }
          else if (hashCode == ml_inf1_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_inf1_xlarge;
            return true;
          }
          else if (hashCode == ml_inf1_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_inf1_2xlarge;
            return true;
          }
          else if (hashCode == ml_inf1_6xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_inf1_6xlarge;
            return true;
          }
          else if (hashCode == ml_inf1_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_inf1_24xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_large;
            return true;
          }
          else if (hashCode == ml_c6i_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_2xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_4xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_8xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_12xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_16xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_24xlarge;
            return true;
          }
          else if (hashCode == ml_c6i_32xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6i_32xlarge;
            return true;
          }
          else if (hashCode == ml_g5_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_xlarge;
            return true;
          }
          else if (hashCode == ml_g5_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_2xlarge;
            return true;
          }
          else if (hashCode == ml_g5_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_4xlarge;
            return true;
          }
          else if (hashCode == ml_g5_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_8xlarge;
            return true;
          }
          else if (hashCode == ml_g5_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_12xlarge;
            return true;
          }
          else if (hashCode == ml_g5_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_16xlarge;
            return true;
          }
          else if (hashCode == ml_g5_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_24xlarge;
            return true;
          }
          else if (hashCode == ml_g5_48xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_g5_48xlarge;
            return true;
          }
          else if (hashCode == ml_p4d_24xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_p4d_24xlarge;
            return true;
          }
          else if (hashCode == ml_c7g_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c7g_large;
            return true;
          }
          else if (hashCode == ml_c7g_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c7g_xlarge;
            return true;
          }
          else if (hashCode == ml_c7g_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c7g_2xlarge;
            return true;
          }
          else if (hashCode == ml_c7g_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c7g_4xlarge;
            return true;
          }
          else if (hashCode == ml_c7g_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c7g_8xlarge;
            return true;
          }
          else if (hashCode == ml_c7g_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c7g_12xlarge;
            return true;
          }
          else if (hashCode == ml_c7g_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c7g_16xlarge;
            return true;
          }
          else if (hashCode == ml_m6g_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6g_large;
            return true;
          }
          else if (hashCode == ml_m6g_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6g_xlarge;
            return true;
          }
          else if (hashCode == ml_m6g_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6g_2xlarge;
            return true;
          }
          else if (hashCode == ml_m6g_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6g_4xlarge;
            return true;
          }
          else if (hashCode == ml_m6g_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6g_8xlarge;
            return true;
          }
          else if (hashCode == ml_m6g_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6g_12xlarge;
            return true;
          }
          else if (hashCode == ml_m6g_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6g_16xlarge;
            return true;
          }
          else if (hashCode == ml_m6gd_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6gd_large;
            return true;
          }
          else if (hashCode == ml_m6gd_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6gd_xlarge;
            return true;
          }
          else if (hashCode == ml_m6gd_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6gd_2xlarge;
            return true;
          }
          else if (hashCode == ml_m6gd_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6gd_4xlarge;
            return true;
          }
          else if (hashCode == ml_m6gd_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6gd_8xlarge;
            return true;
          }
          else if (hashCode == ml_m6gd_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6gd_12xlarge;
            return true;
          }
          else if (hashCode == ml_m6gd_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_m6gd_16xlarge;
            return true;
          }
          else if (hashCode == ml_c6g_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6g_large;
            return true;
          }
          else if (hashCode == ml_c6g_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6g_xlarge;
            return true;
          }
          else if (hashCode == ml_c6g_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6g_2xlarge;
            return true;
          }
          else if (hashCode == ml_c6g_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6g_4xlarge;
            return true;
          }
          else if (hashCode == ml_c6g_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6g_8xlarge;
            return true;
          }
          else if (hashCode == ml_c6g_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6g_12xlarge;
            return true;
          }
          else if (hashCode == ml_c6g_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6g_16xlarge;
            return true;
          }
          else if (hashCode == ml_c6gd_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gd_large;
            return true;
          }
          else if (hashCode == ml_c6gd_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gd_xlarge;
            return true;
          }
          else if (hashCode == ml_c6gd_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gd_2xlarge;
            return true;
          }
          else if (hashCode == ml_c6gd_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gd_4xlarge;
            return true;
          }
          else if (hashCode == ml_c6gd_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gd_8xlarge;
            return true;
          }
          else if (hashCode == ml_c6gd_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gd_12xlarge;
            return true;
          }
          else if (hashCode == ml_c6gd_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gd_16xlarge;
            return true;
          }
          else if (hashCode == ml_c6gn_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gn_large;
            return true;
          }
          else if (hashCode == ml_c6gn_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gn_xlarge;
            return true;
          }
          else if (hashCode == ml_c6gn_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gn_2xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, ProductionVariantInstanceType& enumValue)
        {
          if (hashCode == ml_c6gn_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gn_4xlarge;
            return true;
          }
          else if (hashCode == ml_c6gn_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gn_8xlarge;
            return true;
          }
          else if (hashCode == ml_c6gn_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gn_12xlarge;
            return true;
          }
          else if (hashCode == ml_c6gn_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_c6gn_16xlarge;
            return true;
          }
          else if (hashCode == ml_r6g_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6g_large;
            return true;
          }
          else if (hashCode == ml_r6g_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6g_xlarge;
            return true;
          }
          else if (hashCode == ml_r6g_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6g_2xlarge;
            return true;
          }
          else if (hashCode == ml_r6g_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6g_4xlarge;
            return true;
          }
          else if (hashCode == ml_r6g_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6g_8xlarge;
            return true;
          }
          else if (hashCode == ml_r6g_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6g_12xlarge;
            return true;
          }
          else if (hashCode == ml_r6g_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6g_16xlarge;
            return true;
          }
          else if (hashCode == ml_r6gd_large_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6gd_large;
            return true;
          }
          else if (hashCode == ml_r6gd_xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6gd_xlarge;
            return true;
          }
          else if (hashCode == ml_r6gd_2xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6gd_2xlarge;
            return true;
          }
          else if (hashCode == ml_r6gd_4xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6gd_4xlarge;
            return true;
          }
          else if (hashCode == ml_r6gd_8xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6gd_8xlarge;
            return true;
          }
          else if (hashCode == ml_r6gd_12xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6gd_12xlarge;
            return true;
          }
          else if (hashCode == ml_r6gd_16xlarge_HASH)
          {
            enumValue = ProductionVariantInstanceType::ml_r6gd_16xlarge;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(ProductionVariantInstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ProductionVariantInstanceType::ml_t2_medium:
            value = "ml.t2.medium";
            return true;
          case ProductionVariantInstanceType::ml_t2_large:
            value = "ml.t2.large";
            return true;
          case ProductionVariantInstanceType::ml_t2_xlarge:
            value = "ml.t2.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_t2_2xlarge:
            value = "ml.t2.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m4_xlarge:
            value = "ml.m4.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m4_2xlarge:
            value = "ml.m4.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m4_4xlarge:
            value = "ml.m4.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m4_10xlarge:
            value = "ml.m4.10xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m4_16xlarge:
            value = "ml.m4.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5_large:
            value = "ml.m5.large";
            return true;
          case ProductionVariantInstanceType::ml_m5_xlarge:
            value = "ml.m5.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5_2xlarge:
            value = "ml.m5.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5_4xlarge:
            value = "ml.m5.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5_12xlarge:
            value = "ml.m5.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5_24xlarge:
            value = "ml.m5.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5d_large:
            value = "ml.m5d.large";
            return true;
          case ProductionVariantInstanceType::ml_m5d_xlarge:
            value = "ml.m5d.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5d_2xlarge:
            value = "ml.m5d.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5d_4xlarge:
            value = "ml.m5d.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5d_12xlarge:
            value = "ml.m5d.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m5d_24xlarge:
            value = "ml.m5d.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c4_large:
            value = "ml.c4.large";
            return true;
          case ProductionVariantInstanceType::ml_c4_xlarge:
            value = "ml.c4.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c4_2xlarge:
            value = "ml.c4.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c4_4xlarge:
            value = "ml.c4.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c4_8xlarge:
            value = "ml.c4.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_p2_xlarge:
            value = "ml.p2.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_p2_8xlarge:
            value = "ml.p2.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_p2_16xlarge:
            value = "ml.p2.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_p3_2xlarge:
            value = "ml.p3.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_p3_8xlarge:
            value = "ml.p3.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_p3_16xlarge:
            value = "ml.p3.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5_large:
            value = "ml.c5.large";
            return true;
          case ProductionVariantInstanceType::ml_c5_xlarge:
            value = "ml.c5.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5_2xlarge:
            value = "ml.c5.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5_4xlarge:
            value = "ml.c5.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5_9xlarge:
            value = "ml.c5.9xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5_18xlarge:
            value = "ml.c5.18xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5d_large:
            value = "ml.c5d.large";
            return true;
          case ProductionVariantInstanceType::ml_c5d_xlarge:
            value = "ml.c5d.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5d_2xlarge:
            value = "ml.c5d.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5d_4xlarge:
            value = "ml.c5d.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5d_9xlarge:
            value = "ml.c5d.9xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c5d_18xlarge:
            value = "ml.c5d.18xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g4dn_xlarge:
            value = "ml.g4dn.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g4dn_2xlarge:
            value = "ml.g4dn.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g4dn_4xlarge:
            value = "ml.g4dn.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g4dn_8xlarge:
            value = "ml.g4dn.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g4dn_12xlarge:
            value = "ml.g4dn.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g4dn_16xlarge:
            value = "ml.g4dn.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5_large:
            value = "ml.r5.large";
            return true;
          case ProductionVariantInstanceType::ml_r5_xlarge:
            value = "ml.r5.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5_2xlarge:
            value = "ml.r5.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5_4xlarge:
            value = "ml.r5.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5_12xlarge:
            value = "ml.r5.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5_24xlarge:
            value = "ml.r5.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5d_large:
            value = "ml.r5d.large";
            return true;
          case ProductionVariantInstanceType::ml_r5d_xlarge:
            value = "ml.r5d.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5d_2xlarge:
            value = "ml.r5d.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5d_4xlarge:
            value = "ml.r5d.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5d_12xlarge:
            value = "ml.r5d.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r5d_24xlarge:
            value = "ml.r5d.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_inf1_xlarge:
            value = "ml.inf1.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_inf1_2xlarge:
            value = "ml.inf1.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_inf1_6xlarge:
            value = "ml.inf1.6xlarge";
            return true;
          case ProductionVariantInstanceType::ml_inf1_24xlarge:
            value = "ml.inf1.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_large:
            value = "ml.c6i.large";
            return true;
          case ProductionVariantInstanceType::ml_c6i_xlarge:
            value = "ml.c6i.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_2xlarge:
            value = "ml.c6i.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_4xlarge:
            value = "ml.c6i.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_8xlarge:
            value = "ml.c6i.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_12xlarge:
            value = "ml.c6i.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_16xlarge:
            value = "ml.c6i.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_24xlarge:
            value = "ml.c6i.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6i_32xlarge:
            value = "ml.c6i.32xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_xlarge:
            value = "ml.g5.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_2xlarge:
            value = "ml.g5.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_4xlarge:
            value = "ml.g5.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_8xlarge:
            value = "ml.g5.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_12xlarge:
            value = "ml.g5.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_16xlarge:
            value = "ml.g5.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_24xlarge:
            value = "ml.g5.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_g5_48xlarge:
            value = "ml.g5.48xlarge";
            return true;
          case ProductionVariantInstanceType::ml_p4d_24xlarge:
            value = "ml.p4d.24xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c7g_large:
            value = "ml.c7g.large";
            return true;
          case ProductionVariantInstanceType::ml_c7g_xlarge:
            value = "ml.c7g.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c7g_2xlarge:
            value = "ml.c7g.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c7g_4xlarge:
            value = "ml.c7g.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c7g_8xlarge:
            value = "ml.c7g.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c7g_12xlarge:
            value = "ml.c7g.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c7g_16xlarge:
            value = "ml.c7g.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6g_large:
            value = "ml.m6g.large";
            return true;
          case ProductionVariantInstanceType::ml_m6g_xlarge:
            value = "ml.m6g.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6g_2xlarge:
            value = "ml.m6g.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6g_4xlarge:
            value = "ml.m6g.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6g_8xlarge:
            value = "ml.m6g.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6g_12xlarge:
            value = "ml.m6g.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6g_16xlarge:
            value = "ml.m6g.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6gd_large:
            value = "ml.m6gd.large";
            return true;
          case ProductionVariantInstanceType::ml_m6gd_xlarge:
            value = "ml.m6gd.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6gd_2xlarge:
            value = "ml.m6gd.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6gd_4xlarge:
            value = "ml.m6gd.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6gd_8xlarge:
            value = "ml.m6gd.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6gd_12xlarge:
            value = "ml.m6gd.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_m6gd_16xlarge:
            value = "ml.m6gd.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6g_large:
            value = "ml.c6g.large";
            return true;
          case ProductionVariantInstanceType::ml_c6g_xlarge:
            value = "ml.c6g.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6g_2xlarge:
            value = "ml.c6g.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6g_4xlarge:
            value = "ml.c6g.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6g_8xlarge:
            value = "ml.c6g.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6g_12xlarge:
            value = "ml.c6g.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6g_16xlarge:
            value = "ml.c6g.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gd_large:
            value = "ml.c6gd.large";
            return true;
          case ProductionVariantInstanceType::ml_c6gd_xlarge:
            value = "ml.c6gd.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gd_2xlarge:
            value = "ml.c6gd.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gd_4xlarge:
            value = "ml.c6gd.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gd_8xlarge:
            value = "ml.c6gd.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gd_12xlarge:
            value = "ml.c6gd.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gd_16xlarge:
            value = "ml.c6gd.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gn_large:
            value = "ml.c6gn.large";
            return true;
          case ProductionVariantInstanceType::ml_c6gn_xlarge:
            value = "ml.c6gn.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gn_2xlarge:
            value = "ml.c6gn.2xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(ProductionVariantInstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case ProductionVariantInstanceType::ml_c6gn_4xlarge:
            value = "ml.c6gn.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gn_8xlarge:
            value = "ml.c6gn.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gn_12xlarge:
            value = "ml.c6gn.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_c6gn_16xlarge:
            value = "ml.c6gn.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6g_large:
            value = "ml.r6g.large";
            return true;
          case ProductionVariantInstanceType::ml_r6g_xlarge:
            value = "ml.r6g.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6g_2xlarge:
            value = "ml.r6g.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6g_4xlarge:
            value = "ml.r6g.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6g_8xlarge:
            value = "ml.r6g.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6g_12xlarge:
            value = "ml.r6g.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6g_16xlarge:
            value = "ml.r6g.16xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6gd_large:
            value = "ml.r6gd.large";
            return true;
          case ProductionVariantInstanceType::ml_r6gd_xlarge:
            value = "ml.r6gd.xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6gd_2xlarge:
            value = "ml.r6gd.2xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6gd_4xlarge:
            value = "ml.r6gd.4xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6gd_8xlarge:
            value = "ml.r6gd.8xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6gd_12xlarge:
            value = "ml.r6gd.12xlarge";
            return true;
          case ProductionVariantInstanceType::ml_r6gd_16xlarge:
            value = "ml.r6gd.16xlarge";
            return true;
          default:
            return false;
          }
        }

        ProductionVariantInstanceType GetProductionVariantInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          ProductionVariantInstanceType enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProductionVariantInstanceType>(hashCode);
          }

          return ProductionVariantInstanceType::NOT_SET;
        }

        Aws::String GetNameForProductionVariantInstanceType(ProductionVariantInstanceType enumValue)
        {
          Aws::String value;
          if (GetNameForEnumHelper0(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper1(enumValue, value))
          {
            return value;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
          }

          return {};
        }

      } // namespace ProductionVariantInstanceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
