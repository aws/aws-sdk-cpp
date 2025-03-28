/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/EC2InstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace EC2InstanceTypeMapper
      {

        static const int t2_micro_HASH = HashingUtils::HashString("t2.micro");
        static const int t2_small_HASH = HashingUtils::HashString("t2.small");
        static const int t2_medium_HASH = HashingUtils::HashString("t2.medium");
        static const int t2_large_HASH = HashingUtils::HashString("t2.large");
        static const int c3_large_HASH = HashingUtils::HashString("c3.large");
        static const int c3_xlarge_HASH = HashingUtils::HashString("c3.xlarge");
        static const int c3_2xlarge_HASH = HashingUtils::HashString("c3.2xlarge");
        static const int c3_4xlarge_HASH = HashingUtils::HashString("c3.4xlarge");
        static const int c3_8xlarge_HASH = HashingUtils::HashString("c3.8xlarge");
        static const int c4_large_HASH = HashingUtils::HashString("c4.large");
        static const int c4_xlarge_HASH = HashingUtils::HashString("c4.xlarge");
        static const int c4_2xlarge_HASH = HashingUtils::HashString("c4.2xlarge");
        static const int c4_4xlarge_HASH = HashingUtils::HashString("c4.4xlarge");
        static const int c4_8xlarge_HASH = HashingUtils::HashString("c4.8xlarge");
        static const int c5_large_HASH = HashingUtils::HashString("c5.large");
        static const int c5_xlarge_HASH = HashingUtils::HashString("c5.xlarge");
        static const int c5_2xlarge_HASH = HashingUtils::HashString("c5.2xlarge");
        static const int c5_4xlarge_HASH = HashingUtils::HashString("c5.4xlarge");
        static const int c5_9xlarge_HASH = HashingUtils::HashString("c5.9xlarge");
        static const int c5_12xlarge_HASH = HashingUtils::HashString("c5.12xlarge");
        static const int c5_18xlarge_HASH = HashingUtils::HashString("c5.18xlarge");
        static const int c5_24xlarge_HASH = HashingUtils::HashString("c5.24xlarge");
        static const int c5a_large_HASH = HashingUtils::HashString("c5a.large");
        static const int c5a_xlarge_HASH = HashingUtils::HashString("c5a.xlarge");
        static const int c5a_2xlarge_HASH = HashingUtils::HashString("c5a.2xlarge");
        static const int c5a_4xlarge_HASH = HashingUtils::HashString("c5a.4xlarge");
        static const int c5a_8xlarge_HASH = HashingUtils::HashString("c5a.8xlarge");
        static const int c5a_12xlarge_HASH = HashingUtils::HashString("c5a.12xlarge");
        static const int c5a_16xlarge_HASH = HashingUtils::HashString("c5a.16xlarge");
        static const int c5a_24xlarge_HASH = HashingUtils::HashString("c5a.24xlarge");
        static const int r3_large_HASH = HashingUtils::HashString("r3.large");
        static const int r3_xlarge_HASH = HashingUtils::HashString("r3.xlarge");
        static const int r3_2xlarge_HASH = HashingUtils::HashString("r3.2xlarge");
        static const int r3_4xlarge_HASH = HashingUtils::HashString("r3.4xlarge");
        static const int r3_8xlarge_HASH = HashingUtils::HashString("r3.8xlarge");
        static const int r4_large_HASH = HashingUtils::HashString("r4.large");
        static const int r4_xlarge_HASH = HashingUtils::HashString("r4.xlarge");
        static const int r4_2xlarge_HASH = HashingUtils::HashString("r4.2xlarge");
        static const int r4_4xlarge_HASH = HashingUtils::HashString("r4.4xlarge");
        static const int r4_8xlarge_HASH = HashingUtils::HashString("r4.8xlarge");
        static const int r4_16xlarge_HASH = HashingUtils::HashString("r4.16xlarge");
        static const int r5_large_HASH = HashingUtils::HashString("r5.large");
        static const int r5_xlarge_HASH = HashingUtils::HashString("r5.xlarge");
        static const int r5_2xlarge_HASH = HashingUtils::HashString("r5.2xlarge");
        static const int r5_4xlarge_HASH = HashingUtils::HashString("r5.4xlarge");
        static const int r5_8xlarge_HASH = HashingUtils::HashString("r5.8xlarge");
        static const int r5_12xlarge_HASH = HashingUtils::HashString("r5.12xlarge");
        static const int r5_16xlarge_HASH = HashingUtils::HashString("r5.16xlarge");
        static const int r5_24xlarge_HASH = HashingUtils::HashString("r5.24xlarge");
        static const int r5a_large_HASH = HashingUtils::HashString("r5a.large");
        static const int r5a_xlarge_HASH = HashingUtils::HashString("r5a.xlarge");
        static const int r5a_2xlarge_HASH = HashingUtils::HashString("r5a.2xlarge");
        static const int r5a_4xlarge_HASH = HashingUtils::HashString("r5a.4xlarge");
        static const int r5a_8xlarge_HASH = HashingUtils::HashString("r5a.8xlarge");
        static const int r5a_12xlarge_HASH = HashingUtils::HashString("r5a.12xlarge");
        static const int r5a_16xlarge_HASH = HashingUtils::HashString("r5a.16xlarge");
        static const int r5a_24xlarge_HASH = HashingUtils::HashString("r5a.24xlarge");
        static const int m3_medium_HASH = HashingUtils::HashString("m3.medium");
        static const int m3_large_HASH = HashingUtils::HashString("m3.large");
        static const int m3_xlarge_HASH = HashingUtils::HashString("m3.xlarge");
        static const int m3_2xlarge_HASH = HashingUtils::HashString("m3.2xlarge");
        static const int m4_large_HASH = HashingUtils::HashString("m4.large");
        static const int m4_xlarge_HASH = HashingUtils::HashString("m4.xlarge");
        static const int m4_2xlarge_HASH = HashingUtils::HashString("m4.2xlarge");
        static const int m4_4xlarge_HASH = HashingUtils::HashString("m4.4xlarge");
        static const int m4_10xlarge_HASH = HashingUtils::HashString("m4.10xlarge");
        static const int m5_large_HASH = HashingUtils::HashString("m5.large");
        static const int m5_xlarge_HASH = HashingUtils::HashString("m5.xlarge");
        static const int m5_2xlarge_HASH = HashingUtils::HashString("m5.2xlarge");
        static const int m5_4xlarge_HASH = HashingUtils::HashString("m5.4xlarge");
        static const int m5_8xlarge_HASH = HashingUtils::HashString("m5.8xlarge");
        static const int m5_12xlarge_HASH = HashingUtils::HashString("m5.12xlarge");
        static const int m5_16xlarge_HASH = HashingUtils::HashString("m5.16xlarge");
        static const int m5_24xlarge_HASH = HashingUtils::HashString("m5.24xlarge");
        static const int m5a_large_HASH = HashingUtils::HashString("m5a.large");
        static const int m5a_xlarge_HASH = HashingUtils::HashString("m5a.xlarge");
        static const int m5a_2xlarge_HASH = HashingUtils::HashString("m5a.2xlarge");
        static const int m5a_4xlarge_HASH = HashingUtils::HashString("m5a.4xlarge");
        static const int m5a_8xlarge_HASH = HashingUtils::HashString("m5a.8xlarge");
        static const int m5a_12xlarge_HASH = HashingUtils::HashString("m5a.12xlarge");
        static const int m5a_16xlarge_HASH = HashingUtils::HashString("m5a.16xlarge");
        static const int m5a_24xlarge_HASH = HashingUtils::HashString("m5a.24xlarge");
        static const int c5d_large_HASH = HashingUtils::HashString("c5d.large");
        static const int c5d_xlarge_HASH = HashingUtils::HashString("c5d.xlarge");
        static const int c5d_2xlarge_HASH = HashingUtils::HashString("c5d.2xlarge");
        static const int c5d_4xlarge_HASH = HashingUtils::HashString("c5d.4xlarge");
        static const int c5d_9xlarge_HASH = HashingUtils::HashString("c5d.9xlarge");
        static const int c5d_12xlarge_HASH = HashingUtils::HashString("c5d.12xlarge");
        static const int c5d_18xlarge_HASH = HashingUtils::HashString("c5d.18xlarge");
        static const int c5d_24xlarge_HASH = HashingUtils::HashString("c5d.24xlarge");
        static const int c6a_large_HASH = HashingUtils::HashString("c6a.large");
        static const int c6a_xlarge_HASH = HashingUtils::HashString("c6a.xlarge");
        static const int c6a_2xlarge_HASH = HashingUtils::HashString("c6a.2xlarge");
        static const int c6a_4xlarge_HASH = HashingUtils::HashString("c6a.4xlarge");
        static const int c6a_8xlarge_HASH = HashingUtils::HashString("c6a.8xlarge");
        static const int c6a_12xlarge_HASH = HashingUtils::HashString("c6a.12xlarge");
        static const int c6a_16xlarge_HASH = HashingUtils::HashString("c6a.16xlarge");
        static const int c6a_24xlarge_HASH = HashingUtils::HashString("c6a.24xlarge");
        static const int c6i_large_HASH = HashingUtils::HashString("c6i.large");
        static const int c6i_xlarge_HASH = HashingUtils::HashString("c6i.xlarge");
        static const int c6i_2xlarge_HASH = HashingUtils::HashString("c6i.2xlarge");
        static const int c6i_4xlarge_HASH = HashingUtils::HashString("c6i.4xlarge");
        static const int c6i_8xlarge_HASH = HashingUtils::HashString("c6i.8xlarge");
        static const int c6i_12xlarge_HASH = HashingUtils::HashString("c6i.12xlarge");
        static const int c6i_16xlarge_HASH = HashingUtils::HashString("c6i.16xlarge");
        static const int c6i_24xlarge_HASH = HashingUtils::HashString("c6i.24xlarge");
        static const int r5d_large_HASH = HashingUtils::HashString("r5d.large");
        static const int r5d_xlarge_HASH = HashingUtils::HashString("r5d.xlarge");
        static const int r5d_2xlarge_HASH = HashingUtils::HashString("r5d.2xlarge");
        static const int r5d_4xlarge_HASH = HashingUtils::HashString("r5d.4xlarge");
        static const int r5d_8xlarge_HASH = HashingUtils::HashString("r5d.8xlarge");
        static const int r5d_12xlarge_HASH = HashingUtils::HashString("r5d.12xlarge");
        static const int r5d_16xlarge_HASH = HashingUtils::HashString("r5d.16xlarge");
        static const int r5d_24xlarge_HASH = HashingUtils::HashString("r5d.24xlarge");
        static const int m6g_medium_HASH = HashingUtils::HashString("m6g.medium");
        static const int m6g_large_HASH = HashingUtils::HashString("m6g.large");
        static const int m6g_xlarge_HASH = HashingUtils::HashString("m6g.xlarge");
        static const int m6g_2xlarge_HASH = HashingUtils::HashString("m6g.2xlarge");
        static const int m6g_4xlarge_HASH = HashingUtils::HashString("m6g.4xlarge");
        static const int m6g_8xlarge_HASH = HashingUtils::HashString("m6g.8xlarge");
        static const int m6g_12xlarge_HASH = HashingUtils::HashString("m6g.12xlarge");
        static const int m6g_16xlarge_HASH = HashingUtils::HashString("m6g.16xlarge");
        static const int c6g_medium_HASH = HashingUtils::HashString("c6g.medium");
        static const int c6g_large_HASH = HashingUtils::HashString("c6g.large");
        static const int c6g_xlarge_HASH = HashingUtils::HashString("c6g.xlarge");
        static const int c6g_2xlarge_HASH = HashingUtils::HashString("c6g.2xlarge");
        static const int c6g_4xlarge_HASH = HashingUtils::HashString("c6g.4xlarge");
        static const int c6g_8xlarge_HASH = HashingUtils::HashString("c6g.8xlarge");
        static const int c6g_12xlarge_HASH = HashingUtils::HashString("c6g.12xlarge");
        static const int c6g_16xlarge_HASH = HashingUtils::HashString("c6g.16xlarge");
        static const int r6g_medium_HASH = HashingUtils::HashString("r6g.medium");
        static const int r6g_large_HASH = HashingUtils::HashString("r6g.large");
        static const int r6g_xlarge_HASH = HashingUtils::HashString("r6g.xlarge");
        static const int r6g_2xlarge_HASH = HashingUtils::HashString("r6g.2xlarge");
        static const int r6g_4xlarge_HASH = HashingUtils::HashString("r6g.4xlarge");
        static const int r6g_8xlarge_HASH = HashingUtils::HashString("r6g.8xlarge");
        static const int r6g_12xlarge_HASH = HashingUtils::HashString("r6g.12xlarge");
        static const int r6g_16xlarge_HASH = HashingUtils::HashString("r6g.16xlarge");
        static const int c6gn_medium_HASH = HashingUtils::HashString("c6gn.medium");
        static const int c6gn_large_HASH = HashingUtils::HashString("c6gn.large");
        static const int c6gn_xlarge_HASH = HashingUtils::HashString("c6gn.xlarge");
        static const int c6gn_2xlarge_HASH = HashingUtils::HashString("c6gn.2xlarge");
        static const int c6gn_4xlarge_HASH = HashingUtils::HashString("c6gn.4xlarge");
        static const int c6gn_8xlarge_HASH = HashingUtils::HashString("c6gn.8xlarge");
        static const int c6gn_12xlarge_HASH = HashingUtils::HashString("c6gn.12xlarge");
        static const int c6gn_16xlarge_HASH = HashingUtils::HashString("c6gn.16xlarge");
        static const int c7g_medium_HASH = HashingUtils::HashString("c7g.medium");
        static const int c7g_large_HASH = HashingUtils::HashString("c7g.large");
        static const int c7g_xlarge_HASH = HashingUtils::HashString("c7g.xlarge");
        static const int c7g_2xlarge_HASH = HashingUtils::HashString("c7g.2xlarge");
        static const int c7g_4xlarge_HASH = HashingUtils::HashString("c7g.4xlarge");
        static const int c7g_8xlarge_HASH = HashingUtils::HashString("c7g.8xlarge");
        static const int c7g_12xlarge_HASH = HashingUtils::HashString("c7g.12xlarge");
        static const int c7g_16xlarge_HASH = HashingUtils::HashString("c7g.16xlarge");
        static const int r7g_medium_HASH = HashingUtils::HashString("r7g.medium");
        static const int r7g_large_HASH = HashingUtils::HashString("r7g.large");
        static const int r7g_xlarge_HASH = HashingUtils::HashString("r7g.xlarge");
        static const int r7g_2xlarge_HASH = HashingUtils::HashString("r7g.2xlarge");
        static const int r7g_4xlarge_HASH = HashingUtils::HashString("r7g.4xlarge");
        static const int r7g_8xlarge_HASH = HashingUtils::HashString("r7g.8xlarge");
        static const int r7g_12xlarge_HASH = HashingUtils::HashString("r7g.12xlarge");
        static const int r7g_16xlarge_HASH = HashingUtils::HashString("r7g.16xlarge");
        static const int m7g_medium_HASH = HashingUtils::HashString("m7g.medium");
        static const int m7g_large_HASH = HashingUtils::HashString("m7g.large");
        static const int m7g_xlarge_HASH = HashingUtils::HashString("m7g.xlarge");
        static const int m7g_2xlarge_HASH = HashingUtils::HashString("m7g.2xlarge");
        static const int m7g_4xlarge_HASH = HashingUtils::HashString("m7g.4xlarge");
        static const int m7g_8xlarge_HASH = HashingUtils::HashString("m7g.8xlarge");
        static const int m7g_12xlarge_HASH = HashingUtils::HashString("m7g.12xlarge");
        static const int m7g_16xlarge_HASH = HashingUtils::HashString("m7g.16xlarge");
        static const int g5g_xlarge_HASH = HashingUtils::HashString("g5g.xlarge");
        static const int g5g_2xlarge_HASH = HashingUtils::HashString("g5g.2xlarge");
        static const int g5g_4xlarge_HASH = HashingUtils::HashString("g5g.4xlarge");
        static const int g5g_8xlarge_HASH = HashingUtils::HashString("g5g.8xlarge");
        static const int g5g_16xlarge_HASH = HashingUtils::HashString("g5g.16xlarge");
        static const int r6i_large_HASH = HashingUtils::HashString("r6i.large");
        static const int r6i_xlarge_HASH = HashingUtils::HashString("r6i.xlarge");
        static const int r6i_2xlarge_HASH = HashingUtils::HashString("r6i.2xlarge");
        static const int r6i_4xlarge_HASH = HashingUtils::HashString("r6i.4xlarge");
        static const int r6i_8xlarge_HASH = HashingUtils::HashString("r6i.8xlarge");
        static const int r6i_12xlarge_HASH = HashingUtils::HashString("r6i.12xlarge");
        static const int r6i_16xlarge_HASH = HashingUtils::HashString("r6i.16xlarge");
        static const int c6gd_medium_HASH = HashingUtils::HashString("c6gd.medium");
        static const int c6gd_large_HASH = HashingUtils::HashString("c6gd.large");
        static const int c6gd_xlarge_HASH = HashingUtils::HashString("c6gd.xlarge");
        static const int c6gd_2xlarge_HASH = HashingUtils::HashString("c6gd.2xlarge");
        static const int c6gd_4xlarge_HASH = HashingUtils::HashString("c6gd.4xlarge");
        static const int c6gd_8xlarge_HASH = HashingUtils::HashString("c6gd.8xlarge");
        static const int c6gd_12xlarge_HASH = HashingUtils::HashString("c6gd.12xlarge");
        static const int c6gd_16xlarge_HASH = HashingUtils::HashString("c6gd.16xlarge");
        static const int c6in_large_HASH = HashingUtils::HashString("c6in.large");
        static const int c6in_xlarge_HASH = HashingUtils::HashString("c6in.xlarge");
        static const int c6in_2xlarge_HASH = HashingUtils::HashString("c6in.2xlarge");
        static const int c6in_4xlarge_HASH = HashingUtils::HashString("c6in.4xlarge");
        static const int c6in_8xlarge_HASH = HashingUtils::HashString("c6in.8xlarge");
        static const int c6in_12xlarge_HASH = HashingUtils::HashString("c6in.12xlarge");
        static const int c6in_16xlarge_HASH = HashingUtils::HashString("c6in.16xlarge");
        static const int c7a_medium_HASH = HashingUtils::HashString("c7a.medium");
        static const int c7a_large_HASH = HashingUtils::HashString("c7a.large");
        static const int c7a_xlarge_HASH = HashingUtils::HashString("c7a.xlarge");
        static const int c7a_2xlarge_HASH = HashingUtils::HashString("c7a.2xlarge");
        static const int c7a_4xlarge_HASH = HashingUtils::HashString("c7a.4xlarge");
        static const int c7a_8xlarge_HASH = HashingUtils::HashString("c7a.8xlarge");
        static const int c7a_12xlarge_HASH = HashingUtils::HashString("c7a.12xlarge");
        static const int c7a_16xlarge_HASH = HashingUtils::HashString("c7a.16xlarge");
        static const int c7gd_medium_HASH = HashingUtils::HashString("c7gd.medium");
        static const int c7gd_large_HASH = HashingUtils::HashString("c7gd.large");
        static const int c7gd_xlarge_HASH = HashingUtils::HashString("c7gd.xlarge");
        static const int c7gd_2xlarge_HASH = HashingUtils::HashString("c7gd.2xlarge");
        static const int c7gd_4xlarge_HASH = HashingUtils::HashString("c7gd.4xlarge");
        static const int c7gd_8xlarge_HASH = HashingUtils::HashString("c7gd.8xlarge");
        static const int c7gd_12xlarge_HASH = HashingUtils::HashString("c7gd.12xlarge");
        static const int c7gd_16xlarge_HASH = HashingUtils::HashString("c7gd.16xlarge");
        static const int c7gn_medium_HASH = HashingUtils::HashString("c7gn.medium");
        static const int c7gn_large_HASH = HashingUtils::HashString("c7gn.large");
        static const int c7gn_xlarge_HASH = HashingUtils::HashString("c7gn.xlarge");
        static const int c7gn_2xlarge_HASH = HashingUtils::HashString("c7gn.2xlarge");
        static const int c7gn_4xlarge_HASH = HashingUtils::HashString("c7gn.4xlarge");
        static const int c7gn_8xlarge_HASH = HashingUtils::HashString("c7gn.8xlarge");
        static const int c7gn_12xlarge_HASH = HashingUtils::HashString("c7gn.12xlarge");
        static const int c7gn_16xlarge_HASH = HashingUtils::HashString("c7gn.16xlarge");
        static const int c7i_large_HASH = HashingUtils::HashString("c7i.large");
        static const int c7i_xlarge_HASH = HashingUtils::HashString("c7i.xlarge");
        static const int c7i_2xlarge_HASH = HashingUtils::HashString("c7i.2xlarge");
        static const int c7i_4xlarge_HASH = HashingUtils::HashString("c7i.4xlarge");
        static const int c7i_8xlarge_HASH = HashingUtils::HashString("c7i.8xlarge");
        static const int c7i_12xlarge_HASH = HashingUtils::HashString("c7i.12xlarge");
        static const int c7i_16xlarge_HASH = HashingUtils::HashString("c7i.16xlarge");
        static const int m6a_large_HASH = HashingUtils::HashString("m6a.large");
        static const int m6a_xlarge_HASH = HashingUtils::HashString("m6a.xlarge");
        static const int m6a_2xlarge_HASH = HashingUtils::HashString("m6a.2xlarge");
        static const int m6a_4xlarge_HASH = HashingUtils::HashString("m6a.4xlarge");
        static const int m6a_8xlarge_HASH = HashingUtils::HashString("m6a.8xlarge");
        static const int m6a_12xlarge_HASH = HashingUtils::HashString("m6a.12xlarge");
        static const int m6a_16xlarge_HASH = HashingUtils::HashString("m6a.16xlarge");
        static const int m6gd_medium_HASH = HashingUtils::HashString("m6gd.medium");
        static const int m6gd_large_HASH = HashingUtils::HashString("m6gd.large");
        static const int m6gd_xlarge_HASH = HashingUtils::HashString("m6gd.xlarge");
        static const int m6gd_2xlarge_HASH = HashingUtils::HashString("m6gd.2xlarge");
        static const int m6gd_4xlarge_HASH = HashingUtils::HashString("m6gd.4xlarge");
        static const int m6gd_8xlarge_HASH = HashingUtils::HashString("m6gd.8xlarge");
        static const int m6gd_12xlarge_HASH = HashingUtils::HashString("m6gd.12xlarge");
        static const int m6gd_16xlarge_HASH = HashingUtils::HashString("m6gd.16xlarge");
        static const int m6i_large_HASH = HashingUtils::HashString("m6i.large");
        static const int m6i_xlarge_HASH = HashingUtils::HashString("m6i.xlarge");
        static const int m6i_2xlarge_HASH = HashingUtils::HashString("m6i.2xlarge");
        static const int m6i_4xlarge_HASH = HashingUtils::HashString("m6i.4xlarge");
        static const int m6i_8xlarge_HASH = HashingUtils::HashString("m6i.8xlarge");
        static const int m6i_12xlarge_HASH = HashingUtils::HashString("m6i.12xlarge");
        static const int m6i_16xlarge_HASH = HashingUtils::HashString("m6i.16xlarge");
        static const int m7a_medium_HASH = HashingUtils::HashString("m7a.medium");
        static const int m7a_large_HASH = HashingUtils::HashString("m7a.large");
        static const int m7a_xlarge_HASH = HashingUtils::HashString("m7a.xlarge");
        static const int m7a_2xlarge_HASH = HashingUtils::HashString("m7a.2xlarge");
        static const int m7a_4xlarge_HASH = HashingUtils::HashString("m7a.4xlarge");
        static const int m7a_8xlarge_HASH = HashingUtils::HashString("m7a.8xlarge");
        static const int m7a_12xlarge_HASH = HashingUtils::HashString("m7a.12xlarge");
        static const int m7a_16xlarge_HASH = HashingUtils::HashString("m7a.16xlarge");
        static const int m7gd_medium_HASH = HashingUtils::HashString("m7gd.medium");
        static const int m7gd_large_HASH = HashingUtils::HashString("m7gd.large");
        static const int m7gd_xlarge_HASH = HashingUtils::HashString("m7gd.xlarge");
        static const int m7gd_2xlarge_HASH = HashingUtils::HashString("m7gd.2xlarge");
        static const int m7gd_4xlarge_HASH = HashingUtils::HashString("m7gd.4xlarge");
        static const int m7gd_8xlarge_HASH = HashingUtils::HashString("m7gd.8xlarge");
        static const int m7gd_12xlarge_HASH = HashingUtils::HashString("m7gd.12xlarge");
        static const int m7gd_16xlarge_HASH = HashingUtils::HashString("m7gd.16xlarge");
        static const int m7i_large_HASH = HashingUtils::HashString("m7i.large");
        static const int m7i_xlarge_HASH = HashingUtils::HashString("m7i.xlarge");
        static const int m7i_2xlarge_HASH = HashingUtils::HashString("m7i.2xlarge");
        static const int m7i_4xlarge_HASH = HashingUtils::HashString("m7i.4xlarge");
        static const int m7i_8xlarge_HASH = HashingUtils::HashString("m7i.8xlarge");
        static const int m7i_12xlarge_HASH = HashingUtils::HashString("m7i.12xlarge");
        static const int m7i_16xlarge_HASH = HashingUtils::HashString("m7i.16xlarge");
        static const int r6gd_medium_HASH = HashingUtils::HashString("r6gd.medium");
        static const int r6gd_large_HASH = HashingUtils::HashString("r6gd.large");
        static const int r6gd_xlarge_HASH = HashingUtils::HashString("r6gd.xlarge");
        static const int r6gd_2xlarge_HASH = HashingUtils::HashString("r6gd.2xlarge");
        static const int r6gd_4xlarge_HASH = HashingUtils::HashString("r6gd.4xlarge");
        static const int r6gd_8xlarge_HASH = HashingUtils::HashString("r6gd.8xlarge");
        static const int r6gd_12xlarge_HASH = HashingUtils::HashString("r6gd.12xlarge");
        static const int r6gd_16xlarge_HASH = HashingUtils::HashString("r6gd.16xlarge");
        static const int r7a_medium_HASH = HashingUtils::HashString("r7a.medium");
        static const int r7a_large_HASH = HashingUtils::HashString("r7a.large");
        static const int r7a_xlarge_HASH = HashingUtils::HashString("r7a.xlarge");
        static const int r7a_2xlarge_HASH = HashingUtils::HashString("r7a.2xlarge");
        static const int r7a_4xlarge_HASH = HashingUtils::HashString("r7a.4xlarge");
        static const int r7a_8xlarge_HASH = HashingUtils::HashString("r7a.8xlarge");
        static const int r7a_12xlarge_HASH = HashingUtils::HashString("r7a.12xlarge");
        static const int r7a_16xlarge_HASH = HashingUtils::HashString("r7a.16xlarge");
        static const int r7gd_medium_HASH = HashingUtils::HashString("r7gd.medium");
        static const int r7gd_large_HASH = HashingUtils::HashString("r7gd.large");
        static const int r7gd_xlarge_HASH = HashingUtils::HashString("r7gd.xlarge");
        static const int r7gd_2xlarge_HASH = HashingUtils::HashString("r7gd.2xlarge");
        static const int r7gd_4xlarge_HASH = HashingUtils::HashString("r7gd.4xlarge");
        static const int r7gd_8xlarge_HASH = HashingUtils::HashString("r7gd.8xlarge");
        static const int r7gd_12xlarge_HASH = HashingUtils::HashString("r7gd.12xlarge");
        static const int r7gd_16xlarge_HASH = HashingUtils::HashString("r7gd.16xlarge");
        static const int r7i_large_HASH = HashingUtils::HashString("r7i.large");
        static const int r7i_xlarge_HASH = HashingUtils::HashString("r7i.xlarge");
        static const int r7i_2xlarge_HASH = HashingUtils::HashString("r7i.2xlarge");
        static const int r7i_4xlarge_HASH = HashingUtils::HashString("r7i.4xlarge");
        static const int r7i_8xlarge_HASH = HashingUtils::HashString("r7i.8xlarge");
        static const int r7i_12xlarge_HASH = HashingUtils::HashString("r7i.12xlarge");
        static const int r7i_16xlarge_HASH = HashingUtils::HashString("r7i.16xlarge");
        static const int r7i_24xlarge_HASH = HashingUtils::HashString("r7i.24xlarge");
        static const int r7i_48xlarge_HASH = HashingUtils::HashString("r7i.48xlarge");
        static const int c5ad_large_HASH = HashingUtils::HashString("c5ad.large");
        static const int c5ad_xlarge_HASH = HashingUtils::HashString("c5ad.xlarge");
        static const int c5ad_2xlarge_HASH = HashingUtils::HashString("c5ad.2xlarge");
        static const int c5ad_4xlarge_HASH = HashingUtils::HashString("c5ad.4xlarge");
        static const int c5ad_8xlarge_HASH = HashingUtils::HashString("c5ad.8xlarge");
        static const int c5ad_12xlarge_HASH = HashingUtils::HashString("c5ad.12xlarge");
        static const int c5ad_16xlarge_HASH = HashingUtils::HashString("c5ad.16xlarge");
        static const int c5ad_24xlarge_HASH = HashingUtils::HashString("c5ad.24xlarge");
        static const int c5n_large_HASH = HashingUtils::HashString("c5n.large");
        static const int c5n_xlarge_HASH = HashingUtils::HashString("c5n.xlarge");
        static const int c5n_2xlarge_HASH = HashingUtils::HashString("c5n.2xlarge");
        static const int c5n_4xlarge_HASH = HashingUtils::HashString("c5n.4xlarge");
        static const int c5n_9xlarge_HASH = HashingUtils::HashString("c5n.9xlarge");
        static const int c5n_18xlarge_HASH = HashingUtils::HashString("c5n.18xlarge");
        static const int r5ad_large_HASH = HashingUtils::HashString("r5ad.large");
        static const int r5ad_xlarge_HASH = HashingUtils::HashString("r5ad.xlarge");
        static const int r5ad_2xlarge_HASH = HashingUtils::HashString("r5ad.2xlarge");
        static const int r5ad_4xlarge_HASH = HashingUtils::HashString("r5ad.4xlarge");
        static const int r5ad_8xlarge_HASH = HashingUtils::HashString("r5ad.8xlarge");
        static const int r5ad_12xlarge_HASH = HashingUtils::HashString("r5ad.12xlarge");
        static const int r5ad_16xlarge_HASH = HashingUtils::HashString("r5ad.16xlarge");
        static const int r5ad_24xlarge_HASH = HashingUtils::HashString("r5ad.24xlarge");
        static const int c6id_large_HASH = HashingUtils::HashString("c6id.large");
        static const int c6id_xlarge_HASH = HashingUtils::HashString("c6id.xlarge");
        static const int c6id_2xlarge_HASH = HashingUtils::HashString("c6id.2xlarge");
        static const int c6id_4xlarge_HASH = HashingUtils::HashString("c6id.4xlarge");
        static const int c6id_8xlarge_HASH = HashingUtils::HashString("c6id.8xlarge");
        static const int c6id_12xlarge_HASH = HashingUtils::HashString("c6id.12xlarge");
        static const int c6id_16xlarge_HASH = HashingUtils::HashString("c6id.16xlarge");
        static const int c6id_24xlarge_HASH = HashingUtils::HashString("c6id.24xlarge");
        static const int c6id_32xlarge_HASH = HashingUtils::HashString("c6id.32xlarge");
        static const int c8g_medium_HASH = HashingUtils::HashString("c8g.medium");
        static const int c8g_large_HASH = HashingUtils::HashString("c8g.large");
        static const int c8g_xlarge_HASH = HashingUtils::HashString("c8g.xlarge");
        static const int c8g_2xlarge_HASH = HashingUtils::HashString("c8g.2xlarge");
        static const int c8g_4xlarge_HASH = HashingUtils::HashString("c8g.4xlarge");
        static const int c8g_8xlarge_HASH = HashingUtils::HashString("c8g.8xlarge");
        static const int c8g_12xlarge_HASH = HashingUtils::HashString("c8g.12xlarge");
        static const int c8g_16xlarge_HASH = HashingUtils::HashString("c8g.16xlarge");
        static const int c8g_24xlarge_HASH = HashingUtils::HashString("c8g.24xlarge");
        static const int c8g_48xlarge_HASH = HashingUtils::HashString("c8g.48xlarge");
        static const int m5ad_large_HASH = HashingUtils::HashString("m5ad.large");
        static const int m5ad_xlarge_HASH = HashingUtils::HashString("m5ad.xlarge");
        static const int m5ad_2xlarge_HASH = HashingUtils::HashString("m5ad.2xlarge");
        static const int m5ad_4xlarge_HASH = HashingUtils::HashString("m5ad.4xlarge");
        static const int m5ad_8xlarge_HASH = HashingUtils::HashString("m5ad.8xlarge");
        static const int m5ad_12xlarge_HASH = HashingUtils::HashString("m5ad.12xlarge");
        static const int m5ad_16xlarge_HASH = HashingUtils::HashString("m5ad.16xlarge");
        static const int m5ad_24xlarge_HASH = HashingUtils::HashString("m5ad.24xlarge");
        static const int m5d_large_HASH = HashingUtils::HashString("m5d.large");
        static const int m5d_xlarge_HASH = HashingUtils::HashString("m5d.xlarge");
        static const int m5d_2xlarge_HASH = HashingUtils::HashString("m5d.2xlarge");
        static const int m5d_4xlarge_HASH = HashingUtils::HashString("m5d.4xlarge");
        static const int m5d_8xlarge_HASH = HashingUtils::HashString("m5d.8xlarge");
        static const int m5d_12xlarge_HASH = HashingUtils::HashString("m5d.12xlarge");
        static const int m5d_16xlarge_HASH = HashingUtils::HashString("m5d.16xlarge");
        static const int m5d_24xlarge_HASH = HashingUtils::HashString("m5d.24xlarge");
        static const int m5dn_large_HASH = HashingUtils::HashString("m5dn.large");
        static const int m5dn_xlarge_HASH = HashingUtils::HashString("m5dn.xlarge");
        static const int m5dn_2xlarge_HASH = HashingUtils::HashString("m5dn.2xlarge");
        static const int m5dn_4xlarge_HASH = HashingUtils::HashString("m5dn.4xlarge");
        static const int m5dn_8xlarge_HASH = HashingUtils::HashString("m5dn.8xlarge");
        static const int m5dn_12xlarge_HASH = HashingUtils::HashString("m5dn.12xlarge");
        static const int m5dn_16xlarge_HASH = HashingUtils::HashString("m5dn.16xlarge");
        static const int m5dn_24xlarge_HASH = HashingUtils::HashString("m5dn.24xlarge");
        static const int m5n_large_HASH = HashingUtils::HashString("m5n.large");
        static const int m5n_xlarge_HASH = HashingUtils::HashString("m5n.xlarge");
        static const int m5n_2xlarge_HASH = HashingUtils::HashString("m5n.2xlarge");
        static const int m5n_4xlarge_HASH = HashingUtils::HashString("m5n.4xlarge");
        static const int m5n_8xlarge_HASH = HashingUtils::HashString("m5n.8xlarge");
        static const int m5n_12xlarge_HASH = HashingUtils::HashString("m5n.12xlarge");
        static const int m5n_16xlarge_HASH = HashingUtils::HashString("m5n.16xlarge");
        static const int m5n_24xlarge_HASH = HashingUtils::HashString("m5n.24xlarge");
        static const int m6id_large_HASH = HashingUtils::HashString("m6id.large");
        static const int m6id_xlarge_HASH = HashingUtils::HashString("m6id.xlarge");
        static const int m6id_2xlarge_HASH = HashingUtils::HashString("m6id.2xlarge");
        static const int m6id_4xlarge_HASH = HashingUtils::HashString("m6id.4xlarge");
        static const int m6id_8xlarge_HASH = HashingUtils::HashString("m6id.8xlarge");
        static const int m6id_12xlarge_HASH = HashingUtils::HashString("m6id.12xlarge");
        static const int m6id_16xlarge_HASH = HashingUtils::HashString("m6id.16xlarge");
        static const int m6id_24xlarge_HASH = HashingUtils::HashString("m6id.24xlarge");
        static const int m6id_32xlarge_HASH = HashingUtils::HashString("m6id.32xlarge");
        static const int m6idn_large_HASH = HashingUtils::HashString("m6idn.large");
        static const int m6idn_xlarge_HASH = HashingUtils::HashString("m6idn.xlarge");
        static const int m6idn_2xlarge_HASH = HashingUtils::HashString("m6idn.2xlarge");
        static const int m6idn_4xlarge_HASH = HashingUtils::HashString("m6idn.4xlarge");
        static const int m6idn_8xlarge_HASH = HashingUtils::HashString("m6idn.8xlarge");
        static const int m6idn_12xlarge_HASH = HashingUtils::HashString("m6idn.12xlarge");
        static const int m6idn_16xlarge_HASH = HashingUtils::HashString("m6idn.16xlarge");
        static const int m6idn_24xlarge_HASH = HashingUtils::HashString("m6idn.24xlarge");
        static const int m6idn_32xlarge_HASH = HashingUtils::HashString("m6idn.32xlarge");
        static const int m6in_large_HASH = HashingUtils::HashString("m6in.large");
        static const int m6in_xlarge_HASH = HashingUtils::HashString("m6in.xlarge");
        static const int m6in_2xlarge_HASH = HashingUtils::HashString("m6in.2xlarge");
        static const int m6in_4xlarge_HASH = HashingUtils::HashString("m6in.4xlarge");
        static const int m6in_8xlarge_HASH = HashingUtils::HashString("m6in.8xlarge");
        static const int m6in_12xlarge_HASH = HashingUtils::HashString("m6in.12xlarge");
        static const int m6in_16xlarge_HASH = HashingUtils::HashString("m6in.16xlarge");
        static const int m6in_24xlarge_HASH = HashingUtils::HashString("m6in.24xlarge");
        static const int m6in_32xlarge_HASH = HashingUtils::HashString("m6in.32xlarge");
        static const int m8g_medium_HASH = HashingUtils::HashString("m8g.medium");
        static const int m8g_large_HASH = HashingUtils::HashString("m8g.large");
        static const int m8g_xlarge_HASH = HashingUtils::HashString("m8g.xlarge");
        static const int m8g_2xlarge_HASH = HashingUtils::HashString("m8g.2xlarge");
        static const int m8g_4xlarge_HASH = HashingUtils::HashString("m8g.4xlarge");
        static const int m8g_8xlarge_HASH = HashingUtils::HashString("m8g.8xlarge");
        static const int m8g_12xlarge_HASH = HashingUtils::HashString("m8g.12xlarge");
        static const int m8g_16xlarge_HASH = HashingUtils::HashString("m8g.16xlarge");
        static const int m8g_24xlarge_HASH = HashingUtils::HashString("m8g.24xlarge");
        static const int m8g_48xlarge_HASH = HashingUtils::HashString("m8g.48xlarge");
        static const int r5dn_large_HASH = HashingUtils::HashString("r5dn.large");
        static const int r5dn_xlarge_HASH = HashingUtils::HashString("r5dn.xlarge");
        static const int r5dn_2xlarge_HASH = HashingUtils::HashString("r5dn.2xlarge");
        static const int r5dn_4xlarge_HASH = HashingUtils::HashString("r5dn.4xlarge");
        static const int r5dn_8xlarge_HASH = HashingUtils::HashString("r5dn.8xlarge");
        static const int r5dn_12xlarge_HASH = HashingUtils::HashString("r5dn.12xlarge");
        static const int r5dn_16xlarge_HASH = HashingUtils::HashString("r5dn.16xlarge");
        static const int r5dn_24xlarge_HASH = HashingUtils::HashString("r5dn.24xlarge");
        static const int r5n_large_HASH = HashingUtils::HashString("r5n.large");
        static const int r5n_xlarge_HASH = HashingUtils::HashString("r5n.xlarge");
        static const int r5n_2xlarge_HASH = HashingUtils::HashString("r5n.2xlarge");
        static const int r5n_4xlarge_HASH = HashingUtils::HashString("r5n.4xlarge");
        static const int r5n_8xlarge_HASH = HashingUtils::HashString("r5n.8xlarge");
        static const int r5n_12xlarge_HASH = HashingUtils::HashString("r5n.12xlarge");
        static const int r5n_16xlarge_HASH = HashingUtils::HashString("r5n.16xlarge");
        static const int r5n_24xlarge_HASH = HashingUtils::HashString("r5n.24xlarge");
        static const int r6a_large_HASH = HashingUtils::HashString("r6a.large");
        static const int r6a_xlarge_HASH = HashingUtils::HashString("r6a.xlarge");
        static const int r6a_2xlarge_HASH = HashingUtils::HashString("r6a.2xlarge");
        static const int r6a_4xlarge_HASH = HashingUtils::HashString("r6a.4xlarge");
        static const int r6a_8xlarge_HASH = HashingUtils::HashString("r6a.8xlarge");
        static const int r6a_12xlarge_HASH = HashingUtils::HashString("r6a.12xlarge");
        static const int r6a_16xlarge_HASH = HashingUtils::HashString("r6a.16xlarge");
        static const int r6a_24xlarge_HASH = HashingUtils::HashString("r6a.24xlarge");
        static const int r6a_32xlarge_HASH = HashingUtils::HashString("r6a.32xlarge");
        static const int r6a_48xlarge_HASH = HashingUtils::HashString("r6a.48xlarge");
        static const int r6id_large_HASH = HashingUtils::HashString("r6id.large");
        static const int r6id_xlarge_HASH = HashingUtils::HashString("r6id.xlarge");
        static const int r6id_2xlarge_HASH = HashingUtils::HashString("r6id.2xlarge");
        static const int r6id_4xlarge_HASH = HashingUtils::HashString("r6id.4xlarge");
        static const int r6id_8xlarge_HASH = HashingUtils::HashString("r6id.8xlarge");
        static const int r6id_12xlarge_HASH = HashingUtils::HashString("r6id.12xlarge");
        static const int r6id_16xlarge_HASH = HashingUtils::HashString("r6id.16xlarge");
        static const int r6id_24xlarge_HASH = HashingUtils::HashString("r6id.24xlarge");
        static const int r6id_32xlarge_HASH = HashingUtils::HashString("r6id.32xlarge");
        static const int r6idn_large_HASH = HashingUtils::HashString("r6idn.large");
        static const int r6idn_xlarge_HASH = HashingUtils::HashString("r6idn.xlarge");
        static const int r6idn_2xlarge_HASH = HashingUtils::HashString("r6idn.2xlarge");
        static const int r6idn_4xlarge_HASH = HashingUtils::HashString("r6idn.4xlarge");
        static const int r6idn_8xlarge_HASH = HashingUtils::HashString("r6idn.8xlarge");
        static const int r6idn_12xlarge_HASH = HashingUtils::HashString("r6idn.12xlarge");
        static const int r6idn_16xlarge_HASH = HashingUtils::HashString("r6idn.16xlarge");
        static const int r6idn_24xlarge_HASH = HashingUtils::HashString("r6idn.24xlarge");
        static const int r6idn_32xlarge_HASH = HashingUtils::HashString("r6idn.32xlarge");
        static const int r6in_large_HASH = HashingUtils::HashString("r6in.large");
        static const int r6in_xlarge_HASH = HashingUtils::HashString("r6in.xlarge");
        static const int r6in_2xlarge_HASH = HashingUtils::HashString("r6in.2xlarge");
        static const int r6in_4xlarge_HASH = HashingUtils::HashString("r6in.4xlarge");
        static const int r6in_8xlarge_HASH = HashingUtils::HashString("r6in.8xlarge");
        static const int r6in_12xlarge_HASH = HashingUtils::HashString("r6in.12xlarge");
        static const int r6in_16xlarge_HASH = HashingUtils::HashString("r6in.16xlarge");
        static const int r6in_24xlarge_HASH = HashingUtils::HashString("r6in.24xlarge");
        static const int r6in_32xlarge_HASH = HashingUtils::HashString("r6in.32xlarge");
        static const int r8g_medium_HASH = HashingUtils::HashString("r8g.medium");
        static const int r8g_large_HASH = HashingUtils::HashString("r8g.large");
        static const int r8g_xlarge_HASH = HashingUtils::HashString("r8g.xlarge");
        static const int r8g_2xlarge_HASH = HashingUtils::HashString("r8g.2xlarge");
        static const int r8g_4xlarge_HASH = HashingUtils::HashString("r8g.4xlarge");
        static const int r8g_8xlarge_HASH = HashingUtils::HashString("r8g.8xlarge");
        static const int r8g_12xlarge_HASH = HashingUtils::HashString("r8g.12xlarge");
        static const int r8g_16xlarge_HASH = HashingUtils::HashString("r8g.16xlarge");
        static const int r8g_24xlarge_HASH = HashingUtils::HashString("r8g.24xlarge");
        static const int r8g_48xlarge_HASH = HashingUtils::HashString("r8g.48xlarge");
        static const int m4_16xlarge_HASH = HashingUtils::HashString("m4.16xlarge");
        static const int c6a_32xlarge_HASH = HashingUtils::HashString("c6a.32xlarge");
        static const int c6a_48xlarge_HASH = HashingUtils::HashString("c6a.48xlarge");
        static const int c6i_32xlarge_HASH = HashingUtils::HashString("c6i.32xlarge");
        static const int r6i_24xlarge_HASH = HashingUtils::HashString("r6i.24xlarge");
        static const int r6i_32xlarge_HASH = HashingUtils::HashString("r6i.32xlarge");
        static const int c6in_24xlarge_HASH = HashingUtils::HashString("c6in.24xlarge");
        static const int c6in_32xlarge_HASH = HashingUtils::HashString("c6in.32xlarge");
        static const int c7a_24xlarge_HASH = HashingUtils::HashString("c7a.24xlarge");
        static const int c7a_32xlarge_HASH = HashingUtils::HashString("c7a.32xlarge");
        static const int c7a_48xlarge_HASH = HashingUtils::HashString("c7a.48xlarge");
        static const int c7i_24xlarge_HASH = HashingUtils::HashString("c7i.24xlarge");
        static const int c7i_48xlarge_HASH = HashingUtils::HashString("c7i.48xlarge");
        static const int m6a_24xlarge_HASH = HashingUtils::HashString("m6a.24xlarge");
        static const int m6a_32xlarge_HASH = HashingUtils::HashString("m6a.32xlarge");
        static const int m6a_48xlarge_HASH = HashingUtils::HashString("m6a.48xlarge");
        static const int m6i_24xlarge_HASH = HashingUtils::HashString("m6i.24xlarge");
        static const int m6i_32xlarge_HASH = HashingUtils::HashString("m6i.32xlarge");
        static const int m7a_24xlarge_HASH = HashingUtils::HashString("m7a.24xlarge");
        static const int m7a_32xlarge_HASH = HashingUtils::HashString("m7a.32xlarge");
        static const int m7a_48xlarge_HASH = HashingUtils::HashString("m7a.48xlarge");
        static const int m7i_24xlarge_HASH = HashingUtils::HashString("m7i.24xlarge");
        static const int m7i_48xlarge_HASH = HashingUtils::HashString("m7i.48xlarge");
        static const int r7a_24xlarge_HASH = HashingUtils::HashString("r7a.24xlarge");
        static const int r7a_32xlarge_HASH = HashingUtils::HashString("r7a.32xlarge");
        static const int r7a_48xlarge_HASH = HashingUtils::HashString("r7a.48xlarge");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, EC2InstanceType& enumValue)
        {
          if (hashCode == t2_micro_HASH)
          {
            enumValue = EC2InstanceType::t2_micro;
            return true;
          }
          else if (hashCode == t2_small_HASH)
          {
            enumValue = EC2InstanceType::t2_small;
            return true;
          }
          else if (hashCode == t2_medium_HASH)
          {
            enumValue = EC2InstanceType::t2_medium;
            return true;
          }
          else if (hashCode == t2_large_HASH)
          {
            enumValue = EC2InstanceType::t2_large;
            return true;
          }
          else if (hashCode == c3_large_HASH)
          {
            enumValue = EC2InstanceType::c3_large;
            return true;
          }
          else if (hashCode == c3_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c3_xlarge;
            return true;
          }
          else if (hashCode == c3_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c3_2xlarge;
            return true;
          }
          else if (hashCode == c3_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c3_4xlarge;
            return true;
          }
          else if (hashCode == c3_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c3_8xlarge;
            return true;
          }
          else if (hashCode == c4_large_HASH)
          {
            enumValue = EC2InstanceType::c4_large;
            return true;
          }
          else if (hashCode == c4_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c4_xlarge;
            return true;
          }
          else if (hashCode == c4_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c4_2xlarge;
            return true;
          }
          else if (hashCode == c4_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c4_4xlarge;
            return true;
          }
          else if (hashCode == c4_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c4_8xlarge;
            return true;
          }
          else if (hashCode == c5_large_HASH)
          {
            enumValue = EC2InstanceType::c5_large;
            return true;
          }
          else if (hashCode == c5_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5_xlarge;
            return true;
          }
          else if (hashCode == c5_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5_2xlarge;
            return true;
          }
          else if (hashCode == c5_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5_4xlarge;
            return true;
          }
          else if (hashCode == c5_9xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5_9xlarge;
            return true;
          }
          else if (hashCode == c5_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5_12xlarge;
            return true;
          }
          else if (hashCode == c5_18xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5_18xlarge;
            return true;
          }
          else if (hashCode == c5_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5_24xlarge;
            return true;
          }
          else if (hashCode == c5a_large_HASH)
          {
            enumValue = EC2InstanceType::c5a_large;
            return true;
          }
          else if (hashCode == c5a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5a_xlarge;
            return true;
          }
          else if (hashCode == c5a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5a_2xlarge;
            return true;
          }
          else if (hashCode == c5a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5a_4xlarge;
            return true;
          }
          else if (hashCode == c5a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5a_8xlarge;
            return true;
          }
          else if (hashCode == c5a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5a_12xlarge;
            return true;
          }
          else if (hashCode == c5a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5a_16xlarge;
            return true;
          }
          else if (hashCode == c5a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5a_24xlarge;
            return true;
          }
          else if (hashCode == r3_large_HASH)
          {
            enumValue = EC2InstanceType::r3_large;
            return true;
          }
          else if (hashCode == r3_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r3_xlarge;
            return true;
          }
          else if (hashCode == r3_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r3_2xlarge;
            return true;
          }
          else if (hashCode == r3_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r3_4xlarge;
            return true;
          }
          else if (hashCode == r3_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r3_8xlarge;
            return true;
          }
          else if (hashCode == r4_large_HASH)
          {
            enumValue = EC2InstanceType::r4_large;
            return true;
          }
          else if (hashCode == r4_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r4_xlarge;
            return true;
          }
          else if (hashCode == r4_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r4_2xlarge;
            return true;
          }
          else if (hashCode == r4_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r4_4xlarge;
            return true;
          }
          else if (hashCode == r4_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r4_8xlarge;
            return true;
          }
          else if (hashCode == r4_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r4_16xlarge;
            return true;
          }
          else if (hashCode == r5_large_HASH)
          {
            enumValue = EC2InstanceType::r5_large;
            return true;
          }
          else if (hashCode == r5_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5_xlarge;
            return true;
          }
          else if (hashCode == r5_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5_2xlarge;
            return true;
          }
          else if (hashCode == r5_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5_4xlarge;
            return true;
          }
          else if (hashCode == r5_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5_8xlarge;
            return true;
          }
          else if (hashCode == r5_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5_12xlarge;
            return true;
          }
          else if (hashCode == r5_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5_16xlarge;
            return true;
          }
          else if (hashCode == r5_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5_24xlarge;
            return true;
          }
          else if (hashCode == r5a_large_HASH)
          {
            enumValue = EC2InstanceType::r5a_large;
            return true;
          }
          else if (hashCode == r5a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5a_xlarge;
            return true;
          }
          else if (hashCode == r5a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5a_2xlarge;
            return true;
          }
          else if (hashCode == r5a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5a_4xlarge;
            return true;
          }
          else if (hashCode == r5a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5a_8xlarge;
            return true;
          }
          else if (hashCode == r5a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5a_12xlarge;
            return true;
          }
          else if (hashCode == r5a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5a_16xlarge;
            return true;
          }
          else if (hashCode == r5a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5a_24xlarge;
            return true;
          }
          else if (hashCode == m3_medium_HASH)
          {
            enumValue = EC2InstanceType::m3_medium;
            return true;
          }
          else if (hashCode == m3_large_HASH)
          {
            enumValue = EC2InstanceType::m3_large;
            return true;
          }
          else if (hashCode == m3_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m3_xlarge;
            return true;
          }
          else if (hashCode == m3_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m3_2xlarge;
            return true;
          }
          else if (hashCode == m4_large_HASH)
          {
            enumValue = EC2InstanceType::m4_large;
            return true;
          }
          else if (hashCode == m4_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m4_xlarge;
            return true;
          }
          else if (hashCode == m4_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m4_2xlarge;
            return true;
          }
          else if (hashCode == m4_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m4_4xlarge;
            return true;
          }
          else if (hashCode == m4_10xlarge_HASH)
          {
            enumValue = EC2InstanceType::m4_10xlarge;
            return true;
          }
          else if (hashCode == m5_large_HASH)
          {
            enumValue = EC2InstanceType::m5_large;
            return true;
          }
          else if (hashCode == m5_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5_xlarge;
            return true;
          }
          else if (hashCode == m5_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5_2xlarge;
            return true;
          }
          else if (hashCode == m5_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5_4xlarge;
            return true;
          }
          else if (hashCode == m5_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5_8xlarge;
            return true;
          }
          else if (hashCode == m5_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5_12xlarge;
            return true;
          }
          else if (hashCode == m5_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5_16xlarge;
            return true;
          }
          else if (hashCode == m5_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5_24xlarge;
            return true;
          }
          else if (hashCode == m5a_large_HASH)
          {
            enumValue = EC2InstanceType::m5a_large;
            return true;
          }
          else if (hashCode == m5a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5a_xlarge;
            return true;
          }
          else if (hashCode == m5a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5a_2xlarge;
            return true;
          }
          else if (hashCode == m5a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5a_4xlarge;
            return true;
          }
          else if (hashCode == m5a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5a_8xlarge;
            return true;
          }
          else if (hashCode == m5a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5a_12xlarge;
            return true;
          }
          else if (hashCode == m5a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5a_16xlarge;
            return true;
          }
          else if (hashCode == m5a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5a_24xlarge;
            return true;
          }
          else if (hashCode == c5d_large_HASH)
          {
            enumValue = EC2InstanceType::c5d_large;
            return true;
          }
          else if (hashCode == c5d_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5d_xlarge;
            return true;
          }
          else if (hashCode == c5d_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5d_2xlarge;
            return true;
          }
          else if (hashCode == c5d_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5d_4xlarge;
            return true;
          }
          else if (hashCode == c5d_9xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5d_9xlarge;
            return true;
          }
          else if (hashCode == c5d_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5d_12xlarge;
            return true;
          }
          else if (hashCode == c5d_18xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5d_18xlarge;
            return true;
          }
          else if (hashCode == c5d_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5d_24xlarge;
            return true;
          }
          else if (hashCode == c6a_large_HASH)
          {
            enumValue = EC2InstanceType::c6a_large;
            return true;
          }
          else if (hashCode == c6a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_xlarge;
            return true;
          }
          else if (hashCode == c6a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_2xlarge;
            return true;
          }
          else if (hashCode == c6a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_4xlarge;
            return true;
          }
          else if (hashCode == c6a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_8xlarge;
            return true;
          }
          else if (hashCode == c6a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_12xlarge;
            return true;
          }
          else if (hashCode == c6a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_16xlarge;
            return true;
          }
          else if (hashCode == c6a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_24xlarge;
            return true;
          }
          else if (hashCode == c6i_large_HASH)
          {
            enumValue = EC2InstanceType::c6i_large;
            return true;
          }
          else if (hashCode == c6i_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_xlarge;
            return true;
          }
          else if (hashCode == c6i_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_2xlarge;
            return true;
          }
          else if (hashCode == c6i_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_4xlarge;
            return true;
          }
          else if (hashCode == c6i_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_8xlarge;
            return true;
          }
          else if (hashCode == c6i_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_12xlarge;
            return true;
          }
          else if (hashCode == c6i_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_16xlarge;
            return true;
          }
          else if (hashCode == c6i_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_24xlarge;
            return true;
          }
          else if (hashCode == r5d_large_HASH)
          {
            enumValue = EC2InstanceType::r5d_large;
            return true;
          }
          else if (hashCode == r5d_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5d_xlarge;
            return true;
          }
          else if (hashCode == r5d_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5d_2xlarge;
            return true;
          }
          else if (hashCode == r5d_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5d_4xlarge;
            return true;
          }
          else if (hashCode == r5d_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5d_8xlarge;
            return true;
          }
          else if (hashCode == r5d_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5d_12xlarge;
            return true;
          }
          else if (hashCode == r5d_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5d_16xlarge;
            return true;
          }
          else if (hashCode == r5d_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5d_24xlarge;
            return true;
          }
          else if (hashCode == m6g_medium_HASH)
          {
            enumValue = EC2InstanceType::m6g_medium;
            return true;
          }
          else if (hashCode == m6g_large_HASH)
          {
            enumValue = EC2InstanceType::m6g_large;
            return true;
          }
          else if (hashCode == m6g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6g_xlarge;
            return true;
          }
          else if (hashCode == m6g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6g_2xlarge;
            return true;
          }
          else if (hashCode == m6g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6g_4xlarge;
            return true;
          }
          else if (hashCode == m6g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6g_8xlarge;
            return true;
          }
          else if (hashCode == m6g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6g_12xlarge;
            return true;
          }
          else if (hashCode == m6g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6g_16xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, EC2InstanceType& enumValue)
        {
          if (hashCode == c6g_medium_HASH)
          {
            enumValue = EC2InstanceType::c6g_medium;
            return true;
          }
          else if (hashCode == c6g_large_HASH)
          {
            enumValue = EC2InstanceType::c6g_large;
            return true;
          }
          else if (hashCode == c6g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6g_xlarge;
            return true;
          }
          else if (hashCode == c6g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6g_2xlarge;
            return true;
          }
          else if (hashCode == c6g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6g_4xlarge;
            return true;
          }
          else if (hashCode == c6g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6g_8xlarge;
            return true;
          }
          else if (hashCode == c6g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6g_12xlarge;
            return true;
          }
          else if (hashCode == c6g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6g_16xlarge;
            return true;
          }
          else if (hashCode == r6g_medium_HASH)
          {
            enumValue = EC2InstanceType::r6g_medium;
            return true;
          }
          else if (hashCode == r6g_large_HASH)
          {
            enumValue = EC2InstanceType::r6g_large;
            return true;
          }
          else if (hashCode == r6g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6g_xlarge;
            return true;
          }
          else if (hashCode == r6g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6g_2xlarge;
            return true;
          }
          else if (hashCode == r6g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6g_4xlarge;
            return true;
          }
          else if (hashCode == r6g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6g_8xlarge;
            return true;
          }
          else if (hashCode == r6g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6g_12xlarge;
            return true;
          }
          else if (hashCode == r6g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6g_16xlarge;
            return true;
          }
          else if (hashCode == c6gn_medium_HASH)
          {
            enumValue = EC2InstanceType::c6gn_medium;
            return true;
          }
          else if (hashCode == c6gn_large_HASH)
          {
            enumValue = EC2InstanceType::c6gn_large;
            return true;
          }
          else if (hashCode == c6gn_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gn_xlarge;
            return true;
          }
          else if (hashCode == c6gn_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gn_2xlarge;
            return true;
          }
          else if (hashCode == c6gn_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gn_4xlarge;
            return true;
          }
          else if (hashCode == c6gn_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gn_8xlarge;
            return true;
          }
          else if (hashCode == c6gn_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gn_12xlarge;
            return true;
          }
          else if (hashCode == c6gn_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gn_16xlarge;
            return true;
          }
          else if (hashCode == c7g_medium_HASH)
          {
            enumValue = EC2InstanceType::c7g_medium;
            return true;
          }
          else if (hashCode == c7g_large_HASH)
          {
            enumValue = EC2InstanceType::c7g_large;
            return true;
          }
          else if (hashCode == c7g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7g_xlarge;
            return true;
          }
          else if (hashCode == c7g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7g_2xlarge;
            return true;
          }
          else if (hashCode == c7g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7g_4xlarge;
            return true;
          }
          else if (hashCode == c7g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7g_8xlarge;
            return true;
          }
          else if (hashCode == c7g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7g_12xlarge;
            return true;
          }
          else if (hashCode == c7g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7g_16xlarge;
            return true;
          }
          else if (hashCode == r7g_medium_HASH)
          {
            enumValue = EC2InstanceType::r7g_medium;
            return true;
          }
          else if (hashCode == r7g_large_HASH)
          {
            enumValue = EC2InstanceType::r7g_large;
            return true;
          }
          else if (hashCode == r7g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7g_xlarge;
            return true;
          }
          else if (hashCode == r7g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7g_2xlarge;
            return true;
          }
          else if (hashCode == r7g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7g_4xlarge;
            return true;
          }
          else if (hashCode == r7g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7g_8xlarge;
            return true;
          }
          else if (hashCode == r7g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7g_12xlarge;
            return true;
          }
          else if (hashCode == r7g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7g_16xlarge;
            return true;
          }
          else if (hashCode == m7g_medium_HASH)
          {
            enumValue = EC2InstanceType::m7g_medium;
            return true;
          }
          else if (hashCode == m7g_large_HASH)
          {
            enumValue = EC2InstanceType::m7g_large;
            return true;
          }
          else if (hashCode == m7g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7g_xlarge;
            return true;
          }
          else if (hashCode == m7g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7g_2xlarge;
            return true;
          }
          else if (hashCode == m7g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7g_4xlarge;
            return true;
          }
          else if (hashCode == m7g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7g_8xlarge;
            return true;
          }
          else if (hashCode == m7g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7g_12xlarge;
            return true;
          }
          else if (hashCode == m7g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7g_16xlarge;
            return true;
          }
          else if (hashCode == g5g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::g5g_xlarge;
            return true;
          }
          else if (hashCode == g5g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::g5g_2xlarge;
            return true;
          }
          else if (hashCode == g5g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::g5g_4xlarge;
            return true;
          }
          else if (hashCode == g5g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::g5g_8xlarge;
            return true;
          }
          else if (hashCode == g5g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::g5g_16xlarge;
            return true;
          }
          else if (hashCode == r6i_large_HASH)
          {
            enumValue = EC2InstanceType::r6i_large;
            return true;
          }
          else if (hashCode == r6i_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_xlarge;
            return true;
          }
          else if (hashCode == r6i_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_2xlarge;
            return true;
          }
          else if (hashCode == r6i_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_4xlarge;
            return true;
          }
          else if (hashCode == r6i_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_8xlarge;
            return true;
          }
          else if (hashCode == r6i_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_12xlarge;
            return true;
          }
          else if (hashCode == r6i_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_16xlarge;
            return true;
          }
          else if (hashCode == c6gd_medium_HASH)
          {
            enumValue = EC2InstanceType::c6gd_medium;
            return true;
          }
          else if (hashCode == c6gd_large_HASH)
          {
            enumValue = EC2InstanceType::c6gd_large;
            return true;
          }
          else if (hashCode == c6gd_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gd_xlarge;
            return true;
          }
          else if (hashCode == c6gd_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gd_2xlarge;
            return true;
          }
          else if (hashCode == c6gd_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gd_4xlarge;
            return true;
          }
          else if (hashCode == c6gd_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gd_8xlarge;
            return true;
          }
          else if (hashCode == c6gd_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gd_12xlarge;
            return true;
          }
          else if (hashCode == c6gd_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6gd_16xlarge;
            return true;
          }
          else if (hashCode == c6in_large_HASH)
          {
            enumValue = EC2InstanceType::c6in_large;
            return true;
          }
          else if (hashCode == c6in_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_xlarge;
            return true;
          }
          else if (hashCode == c6in_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_2xlarge;
            return true;
          }
          else if (hashCode == c6in_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_4xlarge;
            return true;
          }
          else if (hashCode == c6in_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_8xlarge;
            return true;
          }
          else if (hashCode == c6in_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_12xlarge;
            return true;
          }
          else if (hashCode == c6in_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_16xlarge;
            return true;
          }
          else if (hashCode == c7a_medium_HASH)
          {
            enumValue = EC2InstanceType::c7a_medium;
            return true;
          }
          else if (hashCode == c7a_large_HASH)
          {
            enumValue = EC2InstanceType::c7a_large;
            return true;
          }
          else if (hashCode == c7a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_xlarge;
            return true;
          }
          else if (hashCode == c7a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_2xlarge;
            return true;
          }
          else if (hashCode == c7a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_4xlarge;
            return true;
          }
          else if (hashCode == c7a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_8xlarge;
            return true;
          }
          else if (hashCode == c7a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_12xlarge;
            return true;
          }
          else if (hashCode == c7a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_16xlarge;
            return true;
          }
          else if (hashCode == c7gd_medium_HASH)
          {
            enumValue = EC2InstanceType::c7gd_medium;
            return true;
          }
          else if (hashCode == c7gd_large_HASH)
          {
            enumValue = EC2InstanceType::c7gd_large;
            return true;
          }
          else if (hashCode == c7gd_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gd_xlarge;
            return true;
          }
          else if (hashCode == c7gd_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gd_2xlarge;
            return true;
          }
          else if (hashCode == c7gd_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gd_4xlarge;
            return true;
          }
          else if (hashCode == c7gd_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gd_8xlarge;
            return true;
          }
          else if (hashCode == c7gd_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gd_12xlarge;
            return true;
          }
          else if (hashCode == c7gd_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gd_16xlarge;
            return true;
          }
          else if (hashCode == c7gn_medium_HASH)
          {
            enumValue = EC2InstanceType::c7gn_medium;
            return true;
          }
          else if (hashCode == c7gn_large_HASH)
          {
            enumValue = EC2InstanceType::c7gn_large;
            return true;
          }
          else if (hashCode == c7gn_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gn_xlarge;
            return true;
          }
          else if (hashCode == c7gn_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gn_2xlarge;
            return true;
          }
          else if (hashCode == c7gn_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gn_4xlarge;
            return true;
          }
          else if (hashCode == c7gn_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gn_8xlarge;
            return true;
          }
          else if (hashCode == c7gn_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gn_12xlarge;
            return true;
          }
          else if (hashCode == c7gn_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7gn_16xlarge;
            return true;
          }
          else if (hashCode == c7i_large_HASH)
          {
            enumValue = EC2InstanceType::c7i_large;
            return true;
          }
          else if (hashCode == c7i_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_xlarge;
            return true;
          }
          else if (hashCode == c7i_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_2xlarge;
            return true;
          }
          else if (hashCode == c7i_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_4xlarge;
            return true;
          }
          else if (hashCode == c7i_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_8xlarge;
            return true;
          }
          else if (hashCode == c7i_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_12xlarge;
            return true;
          }
          else if (hashCode == c7i_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_16xlarge;
            return true;
          }
          else if (hashCode == m6a_large_HASH)
          {
            enumValue = EC2InstanceType::m6a_large;
            return true;
          }
          else if (hashCode == m6a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_xlarge;
            return true;
          }
          else if (hashCode == m6a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_2xlarge;
            return true;
          }
          else if (hashCode == m6a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_4xlarge;
            return true;
          }
          else if (hashCode == m6a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_8xlarge;
            return true;
          }
          else if (hashCode == m6a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_12xlarge;
            return true;
          }
          else if (hashCode == m6a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_16xlarge;
            return true;
          }
          else if (hashCode == m6gd_medium_HASH)
          {
            enumValue = EC2InstanceType::m6gd_medium;
            return true;
          }
          else if (hashCode == m6gd_large_HASH)
          {
            enumValue = EC2InstanceType::m6gd_large;
            return true;
          }
          else if (hashCode == m6gd_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6gd_xlarge;
            return true;
          }
          else if (hashCode == m6gd_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6gd_2xlarge;
            return true;
          }
          else if (hashCode == m6gd_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6gd_4xlarge;
            return true;
          }
          else if (hashCode == m6gd_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6gd_8xlarge;
            return true;
          }
          else if (hashCode == m6gd_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6gd_12xlarge;
            return true;
          }
          else if (hashCode == m6gd_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6gd_16xlarge;
            return true;
          }
          else if (hashCode == m6i_large_HASH)
          {
            enumValue = EC2InstanceType::m6i_large;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper2(int hashCode, EC2InstanceType& enumValue)
        {
          if (hashCode == m6i_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_xlarge;
            return true;
          }
          else if (hashCode == m6i_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_2xlarge;
            return true;
          }
          else if (hashCode == m6i_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_4xlarge;
            return true;
          }
          else if (hashCode == m6i_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_8xlarge;
            return true;
          }
          else if (hashCode == m6i_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_12xlarge;
            return true;
          }
          else if (hashCode == m6i_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_16xlarge;
            return true;
          }
          else if (hashCode == m7a_medium_HASH)
          {
            enumValue = EC2InstanceType::m7a_medium;
            return true;
          }
          else if (hashCode == m7a_large_HASH)
          {
            enumValue = EC2InstanceType::m7a_large;
            return true;
          }
          else if (hashCode == m7a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_xlarge;
            return true;
          }
          else if (hashCode == m7a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_2xlarge;
            return true;
          }
          else if (hashCode == m7a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_4xlarge;
            return true;
          }
          else if (hashCode == m7a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_8xlarge;
            return true;
          }
          else if (hashCode == m7a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_12xlarge;
            return true;
          }
          else if (hashCode == m7a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_16xlarge;
            return true;
          }
          else if (hashCode == m7gd_medium_HASH)
          {
            enumValue = EC2InstanceType::m7gd_medium;
            return true;
          }
          else if (hashCode == m7gd_large_HASH)
          {
            enumValue = EC2InstanceType::m7gd_large;
            return true;
          }
          else if (hashCode == m7gd_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7gd_xlarge;
            return true;
          }
          else if (hashCode == m7gd_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7gd_2xlarge;
            return true;
          }
          else if (hashCode == m7gd_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7gd_4xlarge;
            return true;
          }
          else if (hashCode == m7gd_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7gd_8xlarge;
            return true;
          }
          else if (hashCode == m7gd_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7gd_12xlarge;
            return true;
          }
          else if (hashCode == m7gd_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7gd_16xlarge;
            return true;
          }
          else if (hashCode == m7i_large_HASH)
          {
            enumValue = EC2InstanceType::m7i_large;
            return true;
          }
          else if (hashCode == m7i_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_xlarge;
            return true;
          }
          else if (hashCode == m7i_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_2xlarge;
            return true;
          }
          else if (hashCode == m7i_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_4xlarge;
            return true;
          }
          else if (hashCode == m7i_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_8xlarge;
            return true;
          }
          else if (hashCode == m7i_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_12xlarge;
            return true;
          }
          else if (hashCode == m7i_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_16xlarge;
            return true;
          }
          else if (hashCode == r6gd_medium_HASH)
          {
            enumValue = EC2InstanceType::r6gd_medium;
            return true;
          }
          else if (hashCode == r6gd_large_HASH)
          {
            enumValue = EC2InstanceType::r6gd_large;
            return true;
          }
          else if (hashCode == r6gd_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6gd_xlarge;
            return true;
          }
          else if (hashCode == r6gd_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6gd_2xlarge;
            return true;
          }
          else if (hashCode == r6gd_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6gd_4xlarge;
            return true;
          }
          else if (hashCode == r6gd_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6gd_8xlarge;
            return true;
          }
          else if (hashCode == r6gd_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6gd_12xlarge;
            return true;
          }
          else if (hashCode == r6gd_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6gd_16xlarge;
            return true;
          }
          else if (hashCode == r7a_medium_HASH)
          {
            enumValue = EC2InstanceType::r7a_medium;
            return true;
          }
          else if (hashCode == r7a_large_HASH)
          {
            enumValue = EC2InstanceType::r7a_large;
            return true;
          }
          else if (hashCode == r7a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_xlarge;
            return true;
          }
          else if (hashCode == r7a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_2xlarge;
            return true;
          }
          else if (hashCode == r7a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_4xlarge;
            return true;
          }
          else if (hashCode == r7a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_8xlarge;
            return true;
          }
          else if (hashCode == r7a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_12xlarge;
            return true;
          }
          else if (hashCode == r7a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_16xlarge;
            return true;
          }
          else if (hashCode == r7gd_medium_HASH)
          {
            enumValue = EC2InstanceType::r7gd_medium;
            return true;
          }
          else if (hashCode == r7gd_large_HASH)
          {
            enumValue = EC2InstanceType::r7gd_large;
            return true;
          }
          else if (hashCode == r7gd_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7gd_xlarge;
            return true;
          }
          else if (hashCode == r7gd_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7gd_2xlarge;
            return true;
          }
          else if (hashCode == r7gd_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7gd_4xlarge;
            return true;
          }
          else if (hashCode == r7gd_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7gd_8xlarge;
            return true;
          }
          else if (hashCode == r7gd_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7gd_12xlarge;
            return true;
          }
          else if (hashCode == r7gd_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7gd_16xlarge;
            return true;
          }
          else if (hashCode == r7i_large_HASH)
          {
            enumValue = EC2InstanceType::r7i_large;
            return true;
          }
          else if (hashCode == r7i_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_xlarge;
            return true;
          }
          else if (hashCode == r7i_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_2xlarge;
            return true;
          }
          else if (hashCode == r7i_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_4xlarge;
            return true;
          }
          else if (hashCode == r7i_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_8xlarge;
            return true;
          }
          else if (hashCode == r7i_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_12xlarge;
            return true;
          }
          else if (hashCode == r7i_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_16xlarge;
            return true;
          }
          else if (hashCode == r7i_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_24xlarge;
            return true;
          }
          else if (hashCode == r7i_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7i_48xlarge;
            return true;
          }
          else if (hashCode == c5ad_large_HASH)
          {
            enumValue = EC2InstanceType::c5ad_large;
            return true;
          }
          else if (hashCode == c5ad_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5ad_xlarge;
            return true;
          }
          else if (hashCode == c5ad_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5ad_2xlarge;
            return true;
          }
          else if (hashCode == c5ad_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5ad_4xlarge;
            return true;
          }
          else if (hashCode == c5ad_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5ad_8xlarge;
            return true;
          }
          else if (hashCode == c5ad_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5ad_12xlarge;
            return true;
          }
          else if (hashCode == c5ad_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5ad_16xlarge;
            return true;
          }
          else if (hashCode == c5ad_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5ad_24xlarge;
            return true;
          }
          else if (hashCode == c5n_large_HASH)
          {
            enumValue = EC2InstanceType::c5n_large;
            return true;
          }
          else if (hashCode == c5n_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5n_xlarge;
            return true;
          }
          else if (hashCode == c5n_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5n_2xlarge;
            return true;
          }
          else if (hashCode == c5n_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5n_4xlarge;
            return true;
          }
          else if (hashCode == c5n_9xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5n_9xlarge;
            return true;
          }
          else if (hashCode == c5n_18xlarge_HASH)
          {
            enumValue = EC2InstanceType::c5n_18xlarge;
            return true;
          }
          else if (hashCode == r5ad_large_HASH)
          {
            enumValue = EC2InstanceType::r5ad_large;
            return true;
          }
          else if (hashCode == r5ad_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5ad_xlarge;
            return true;
          }
          else if (hashCode == r5ad_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5ad_2xlarge;
            return true;
          }
          else if (hashCode == r5ad_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5ad_4xlarge;
            return true;
          }
          else if (hashCode == r5ad_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5ad_8xlarge;
            return true;
          }
          else if (hashCode == r5ad_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5ad_12xlarge;
            return true;
          }
          else if (hashCode == r5ad_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5ad_16xlarge;
            return true;
          }
          else if (hashCode == r5ad_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5ad_24xlarge;
            return true;
          }
          else if (hashCode == c6id_large_HASH)
          {
            enumValue = EC2InstanceType::c6id_large;
            return true;
          }
          else if (hashCode == c6id_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_xlarge;
            return true;
          }
          else if (hashCode == c6id_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_2xlarge;
            return true;
          }
          else if (hashCode == c6id_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_4xlarge;
            return true;
          }
          else if (hashCode == c6id_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_8xlarge;
            return true;
          }
          else if (hashCode == c6id_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_12xlarge;
            return true;
          }
          else if (hashCode == c6id_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_16xlarge;
            return true;
          }
          else if (hashCode == c6id_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_24xlarge;
            return true;
          }
          else if (hashCode == c6id_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6id_32xlarge;
            return true;
          }
          else if (hashCode == c8g_medium_HASH)
          {
            enumValue = EC2InstanceType::c8g_medium;
            return true;
          }
          else if (hashCode == c8g_large_HASH)
          {
            enumValue = EC2InstanceType::c8g_large;
            return true;
          }
          else if (hashCode == c8g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_xlarge;
            return true;
          }
          else if (hashCode == c8g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_2xlarge;
            return true;
          }
          else if (hashCode == c8g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_4xlarge;
            return true;
          }
          else if (hashCode == c8g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_8xlarge;
            return true;
          }
          else if (hashCode == c8g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_12xlarge;
            return true;
          }
          else if (hashCode == c8g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_16xlarge;
            return true;
          }
          else if (hashCode == c8g_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_24xlarge;
            return true;
          }
          else if (hashCode == c8g_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::c8g_48xlarge;
            return true;
          }
          else if (hashCode == m5ad_large_HASH)
          {
            enumValue = EC2InstanceType::m5ad_large;
            return true;
          }
          else if (hashCode == m5ad_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5ad_xlarge;
            return true;
          }
          else if (hashCode == m5ad_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5ad_2xlarge;
            return true;
          }
          else if (hashCode == m5ad_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5ad_4xlarge;
            return true;
          }
          else if (hashCode == m5ad_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5ad_8xlarge;
            return true;
          }
          else if (hashCode == m5ad_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5ad_12xlarge;
            return true;
          }
          else if (hashCode == m5ad_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5ad_16xlarge;
            return true;
          }
          else if (hashCode == m5ad_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5ad_24xlarge;
            return true;
          }
          else if (hashCode == m5d_large_HASH)
          {
            enumValue = EC2InstanceType::m5d_large;
            return true;
          }
          else if (hashCode == m5d_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5d_xlarge;
            return true;
          }
          else if (hashCode == m5d_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5d_2xlarge;
            return true;
          }
          else if (hashCode == m5d_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5d_4xlarge;
            return true;
          }
          else if (hashCode == m5d_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5d_8xlarge;
            return true;
          }
          else if (hashCode == m5d_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5d_12xlarge;
            return true;
          }
          else if (hashCode == m5d_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5d_16xlarge;
            return true;
          }
          else if (hashCode == m5d_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5d_24xlarge;
            return true;
          }
          else if (hashCode == m5dn_large_HASH)
          {
            enumValue = EC2InstanceType::m5dn_large;
            return true;
          }
          else if (hashCode == m5dn_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5dn_xlarge;
            return true;
          }
          else if (hashCode == m5dn_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5dn_2xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper3(int hashCode, EC2InstanceType& enumValue)
        {
          if (hashCode == m5dn_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5dn_4xlarge;
            return true;
          }
          else if (hashCode == m5dn_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5dn_8xlarge;
            return true;
          }
          else if (hashCode == m5dn_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5dn_12xlarge;
            return true;
          }
          else if (hashCode == m5dn_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5dn_16xlarge;
            return true;
          }
          else if (hashCode == m5dn_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5dn_24xlarge;
            return true;
          }
          else if (hashCode == m5n_large_HASH)
          {
            enumValue = EC2InstanceType::m5n_large;
            return true;
          }
          else if (hashCode == m5n_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5n_xlarge;
            return true;
          }
          else if (hashCode == m5n_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5n_2xlarge;
            return true;
          }
          else if (hashCode == m5n_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5n_4xlarge;
            return true;
          }
          else if (hashCode == m5n_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5n_8xlarge;
            return true;
          }
          else if (hashCode == m5n_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5n_12xlarge;
            return true;
          }
          else if (hashCode == m5n_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5n_16xlarge;
            return true;
          }
          else if (hashCode == m5n_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m5n_24xlarge;
            return true;
          }
          else if (hashCode == m6id_large_HASH)
          {
            enumValue = EC2InstanceType::m6id_large;
            return true;
          }
          else if (hashCode == m6id_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_xlarge;
            return true;
          }
          else if (hashCode == m6id_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_2xlarge;
            return true;
          }
          else if (hashCode == m6id_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_4xlarge;
            return true;
          }
          else if (hashCode == m6id_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_8xlarge;
            return true;
          }
          else if (hashCode == m6id_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_12xlarge;
            return true;
          }
          else if (hashCode == m6id_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_16xlarge;
            return true;
          }
          else if (hashCode == m6id_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_24xlarge;
            return true;
          }
          else if (hashCode == m6id_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6id_32xlarge;
            return true;
          }
          else if (hashCode == m6idn_large_HASH)
          {
            enumValue = EC2InstanceType::m6idn_large;
            return true;
          }
          else if (hashCode == m6idn_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_xlarge;
            return true;
          }
          else if (hashCode == m6idn_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_2xlarge;
            return true;
          }
          else if (hashCode == m6idn_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_4xlarge;
            return true;
          }
          else if (hashCode == m6idn_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_8xlarge;
            return true;
          }
          else if (hashCode == m6idn_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_12xlarge;
            return true;
          }
          else if (hashCode == m6idn_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_16xlarge;
            return true;
          }
          else if (hashCode == m6idn_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_24xlarge;
            return true;
          }
          else if (hashCode == m6idn_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6idn_32xlarge;
            return true;
          }
          else if (hashCode == m6in_large_HASH)
          {
            enumValue = EC2InstanceType::m6in_large;
            return true;
          }
          else if (hashCode == m6in_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_xlarge;
            return true;
          }
          else if (hashCode == m6in_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_2xlarge;
            return true;
          }
          else if (hashCode == m6in_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_4xlarge;
            return true;
          }
          else if (hashCode == m6in_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_8xlarge;
            return true;
          }
          else if (hashCode == m6in_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_12xlarge;
            return true;
          }
          else if (hashCode == m6in_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_16xlarge;
            return true;
          }
          else if (hashCode == m6in_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_24xlarge;
            return true;
          }
          else if (hashCode == m6in_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6in_32xlarge;
            return true;
          }
          else if (hashCode == m8g_medium_HASH)
          {
            enumValue = EC2InstanceType::m8g_medium;
            return true;
          }
          else if (hashCode == m8g_large_HASH)
          {
            enumValue = EC2InstanceType::m8g_large;
            return true;
          }
          else if (hashCode == m8g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_xlarge;
            return true;
          }
          else if (hashCode == m8g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_2xlarge;
            return true;
          }
          else if (hashCode == m8g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_4xlarge;
            return true;
          }
          else if (hashCode == m8g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_8xlarge;
            return true;
          }
          else if (hashCode == m8g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_12xlarge;
            return true;
          }
          else if (hashCode == m8g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_16xlarge;
            return true;
          }
          else if (hashCode == m8g_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_24xlarge;
            return true;
          }
          else if (hashCode == m8g_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::m8g_48xlarge;
            return true;
          }
          else if (hashCode == r5dn_large_HASH)
          {
            enumValue = EC2InstanceType::r5dn_large;
            return true;
          }
          else if (hashCode == r5dn_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5dn_xlarge;
            return true;
          }
          else if (hashCode == r5dn_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5dn_2xlarge;
            return true;
          }
          else if (hashCode == r5dn_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5dn_4xlarge;
            return true;
          }
          else if (hashCode == r5dn_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5dn_8xlarge;
            return true;
          }
          else if (hashCode == r5dn_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5dn_12xlarge;
            return true;
          }
          else if (hashCode == r5dn_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5dn_16xlarge;
            return true;
          }
          else if (hashCode == r5dn_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5dn_24xlarge;
            return true;
          }
          else if (hashCode == r5n_large_HASH)
          {
            enumValue = EC2InstanceType::r5n_large;
            return true;
          }
          else if (hashCode == r5n_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5n_xlarge;
            return true;
          }
          else if (hashCode == r5n_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5n_2xlarge;
            return true;
          }
          else if (hashCode == r5n_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5n_4xlarge;
            return true;
          }
          else if (hashCode == r5n_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5n_8xlarge;
            return true;
          }
          else if (hashCode == r5n_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5n_12xlarge;
            return true;
          }
          else if (hashCode == r5n_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5n_16xlarge;
            return true;
          }
          else if (hashCode == r5n_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r5n_24xlarge;
            return true;
          }
          else if (hashCode == r6a_large_HASH)
          {
            enumValue = EC2InstanceType::r6a_large;
            return true;
          }
          else if (hashCode == r6a_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_xlarge;
            return true;
          }
          else if (hashCode == r6a_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_2xlarge;
            return true;
          }
          else if (hashCode == r6a_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_4xlarge;
            return true;
          }
          else if (hashCode == r6a_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_8xlarge;
            return true;
          }
          else if (hashCode == r6a_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_12xlarge;
            return true;
          }
          else if (hashCode == r6a_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_16xlarge;
            return true;
          }
          else if (hashCode == r6a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_24xlarge;
            return true;
          }
          else if (hashCode == r6a_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_32xlarge;
            return true;
          }
          else if (hashCode == r6a_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6a_48xlarge;
            return true;
          }
          else if (hashCode == r6id_large_HASH)
          {
            enumValue = EC2InstanceType::r6id_large;
            return true;
          }
          else if (hashCode == r6id_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_xlarge;
            return true;
          }
          else if (hashCode == r6id_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_2xlarge;
            return true;
          }
          else if (hashCode == r6id_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_4xlarge;
            return true;
          }
          else if (hashCode == r6id_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_8xlarge;
            return true;
          }
          else if (hashCode == r6id_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_12xlarge;
            return true;
          }
          else if (hashCode == r6id_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_16xlarge;
            return true;
          }
          else if (hashCode == r6id_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_24xlarge;
            return true;
          }
          else if (hashCode == r6id_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6id_32xlarge;
            return true;
          }
          else if (hashCode == r6idn_large_HASH)
          {
            enumValue = EC2InstanceType::r6idn_large;
            return true;
          }
          else if (hashCode == r6idn_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_xlarge;
            return true;
          }
          else if (hashCode == r6idn_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_2xlarge;
            return true;
          }
          else if (hashCode == r6idn_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_4xlarge;
            return true;
          }
          else if (hashCode == r6idn_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_8xlarge;
            return true;
          }
          else if (hashCode == r6idn_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_12xlarge;
            return true;
          }
          else if (hashCode == r6idn_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_16xlarge;
            return true;
          }
          else if (hashCode == r6idn_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_24xlarge;
            return true;
          }
          else if (hashCode == r6idn_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6idn_32xlarge;
            return true;
          }
          else if (hashCode == r6in_large_HASH)
          {
            enumValue = EC2InstanceType::r6in_large;
            return true;
          }
          else if (hashCode == r6in_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_xlarge;
            return true;
          }
          else if (hashCode == r6in_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_2xlarge;
            return true;
          }
          else if (hashCode == r6in_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_4xlarge;
            return true;
          }
          else if (hashCode == r6in_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_8xlarge;
            return true;
          }
          else if (hashCode == r6in_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_12xlarge;
            return true;
          }
          else if (hashCode == r6in_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_16xlarge;
            return true;
          }
          else if (hashCode == r6in_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_24xlarge;
            return true;
          }
          else if (hashCode == r6in_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6in_32xlarge;
            return true;
          }
          else if (hashCode == r8g_medium_HASH)
          {
            enumValue = EC2InstanceType::r8g_medium;
            return true;
          }
          else if (hashCode == r8g_large_HASH)
          {
            enumValue = EC2InstanceType::r8g_large;
            return true;
          }
          else if (hashCode == r8g_xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_xlarge;
            return true;
          }
          else if (hashCode == r8g_2xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_2xlarge;
            return true;
          }
          else if (hashCode == r8g_4xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_4xlarge;
            return true;
          }
          else if (hashCode == r8g_8xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_8xlarge;
            return true;
          }
          else if (hashCode == r8g_12xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_12xlarge;
            return true;
          }
          else if (hashCode == r8g_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_16xlarge;
            return true;
          }
          else if (hashCode == r8g_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_24xlarge;
            return true;
          }
          else if (hashCode == r8g_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::r8g_48xlarge;
            return true;
          }
          else if (hashCode == m4_16xlarge_HASH)
          {
            enumValue = EC2InstanceType::m4_16xlarge;
            return true;
          }
          else if (hashCode == c6a_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_32xlarge;
            return true;
          }
          else if (hashCode == c6a_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6a_48xlarge;
            return true;
          }
          else if (hashCode == c6i_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6i_32xlarge;
            return true;
          }
          else if (hashCode == r6i_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_24xlarge;
            return true;
          }
          else if (hashCode == r6i_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::r6i_32xlarge;
            return true;
          }
          else if (hashCode == c6in_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_24xlarge;
            return true;
          }
          else if (hashCode == c6in_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::c6in_32xlarge;
            return true;
          }
          else if (hashCode == c7a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_24xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper4(int hashCode, EC2InstanceType& enumValue)
        {
          if (hashCode == c7a_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_32xlarge;
            return true;
          }
          else if (hashCode == c7a_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7a_48xlarge;
            return true;
          }
          else if (hashCode == c7i_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_24xlarge;
            return true;
          }
          else if (hashCode == c7i_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::c7i_48xlarge;
            return true;
          }
          else if (hashCode == m6a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_24xlarge;
            return true;
          }
          else if (hashCode == m6a_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_32xlarge;
            return true;
          }
          else if (hashCode == m6a_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6a_48xlarge;
            return true;
          }
          else if (hashCode == m6i_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_24xlarge;
            return true;
          }
          else if (hashCode == m6i_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::m6i_32xlarge;
            return true;
          }
          else if (hashCode == m7a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_24xlarge;
            return true;
          }
          else if (hashCode == m7a_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_32xlarge;
            return true;
          }
          else if (hashCode == m7a_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7a_48xlarge;
            return true;
          }
          else if (hashCode == m7i_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_24xlarge;
            return true;
          }
          else if (hashCode == m7i_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::m7i_48xlarge;
            return true;
          }
          else if (hashCode == r7a_24xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_24xlarge;
            return true;
          }
          else if (hashCode == r7a_32xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_32xlarge;
            return true;
          }
          else if (hashCode == r7a_48xlarge_HASH)
          {
            enumValue = EC2InstanceType::r7a_48xlarge;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(EC2InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case EC2InstanceType::t2_micro:
            value = "t2.micro";
            return true;
          case EC2InstanceType::t2_small:
            value = "t2.small";
            return true;
          case EC2InstanceType::t2_medium:
            value = "t2.medium";
            return true;
          case EC2InstanceType::t2_large:
            value = "t2.large";
            return true;
          case EC2InstanceType::c3_large:
            value = "c3.large";
            return true;
          case EC2InstanceType::c3_xlarge:
            value = "c3.xlarge";
            return true;
          case EC2InstanceType::c3_2xlarge:
            value = "c3.2xlarge";
            return true;
          case EC2InstanceType::c3_4xlarge:
            value = "c3.4xlarge";
            return true;
          case EC2InstanceType::c3_8xlarge:
            value = "c3.8xlarge";
            return true;
          case EC2InstanceType::c4_large:
            value = "c4.large";
            return true;
          case EC2InstanceType::c4_xlarge:
            value = "c4.xlarge";
            return true;
          case EC2InstanceType::c4_2xlarge:
            value = "c4.2xlarge";
            return true;
          case EC2InstanceType::c4_4xlarge:
            value = "c4.4xlarge";
            return true;
          case EC2InstanceType::c4_8xlarge:
            value = "c4.8xlarge";
            return true;
          case EC2InstanceType::c5_large:
            value = "c5.large";
            return true;
          case EC2InstanceType::c5_xlarge:
            value = "c5.xlarge";
            return true;
          case EC2InstanceType::c5_2xlarge:
            value = "c5.2xlarge";
            return true;
          case EC2InstanceType::c5_4xlarge:
            value = "c5.4xlarge";
            return true;
          case EC2InstanceType::c5_9xlarge:
            value = "c5.9xlarge";
            return true;
          case EC2InstanceType::c5_12xlarge:
            value = "c5.12xlarge";
            return true;
          case EC2InstanceType::c5_18xlarge:
            value = "c5.18xlarge";
            return true;
          case EC2InstanceType::c5_24xlarge:
            value = "c5.24xlarge";
            return true;
          case EC2InstanceType::c5a_large:
            value = "c5a.large";
            return true;
          case EC2InstanceType::c5a_xlarge:
            value = "c5a.xlarge";
            return true;
          case EC2InstanceType::c5a_2xlarge:
            value = "c5a.2xlarge";
            return true;
          case EC2InstanceType::c5a_4xlarge:
            value = "c5a.4xlarge";
            return true;
          case EC2InstanceType::c5a_8xlarge:
            value = "c5a.8xlarge";
            return true;
          case EC2InstanceType::c5a_12xlarge:
            value = "c5a.12xlarge";
            return true;
          case EC2InstanceType::c5a_16xlarge:
            value = "c5a.16xlarge";
            return true;
          case EC2InstanceType::c5a_24xlarge:
            value = "c5a.24xlarge";
            return true;
          case EC2InstanceType::r3_large:
            value = "r3.large";
            return true;
          case EC2InstanceType::r3_xlarge:
            value = "r3.xlarge";
            return true;
          case EC2InstanceType::r3_2xlarge:
            value = "r3.2xlarge";
            return true;
          case EC2InstanceType::r3_4xlarge:
            value = "r3.4xlarge";
            return true;
          case EC2InstanceType::r3_8xlarge:
            value = "r3.8xlarge";
            return true;
          case EC2InstanceType::r4_large:
            value = "r4.large";
            return true;
          case EC2InstanceType::r4_xlarge:
            value = "r4.xlarge";
            return true;
          case EC2InstanceType::r4_2xlarge:
            value = "r4.2xlarge";
            return true;
          case EC2InstanceType::r4_4xlarge:
            value = "r4.4xlarge";
            return true;
          case EC2InstanceType::r4_8xlarge:
            value = "r4.8xlarge";
            return true;
          case EC2InstanceType::r4_16xlarge:
            value = "r4.16xlarge";
            return true;
          case EC2InstanceType::r5_large:
            value = "r5.large";
            return true;
          case EC2InstanceType::r5_xlarge:
            value = "r5.xlarge";
            return true;
          case EC2InstanceType::r5_2xlarge:
            value = "r5.2xlarge";
            return true;
          case EC2InstanceType::r5_4xlarge:
            value = "r5.4xlarge";
            return true;
          case EC2InstanceType::r5_8xlarge:
            value = "r5.8xlarge";
            return true;
          case EC2InstanceType::r5_12xlarge:
            value = "r5.12xlarge";
            return true;
          case EC2InstanceType::r5_16xlarge:
            value = "r5.16xlarge";
            return true;
          case EC2InstanceType::r5_24xlarge:
            value = "r5.24xlarge";
            return true;
          case EC2InstanceType::r5a_large:
            value = "r5a.large";
            return true;
          case EC2InstanceType::r5a_xlarge:
            value = "r5a.xlarge";
            return true;
          case EC2InstanceType::r5a_2xlarge:
            value = "r5a.2xlarge";
            return true;
          case EC2InstanceType::r5a_4xlarge:
            value = "r5a.4xlarge";
            return true;
          case EC2InstanceType::r5a_8xlarge:
            value = "r5a.8xlarge";
            return true;
          case EC2InstanceType::r5a_12xlarge:
            value = "r5a.12xlarge";
            return true;
          case EC2InstanceType::r5a_16xlarge:
            value = "r5a.16xlarge";
            return true;
          case EC2InstanceType::r5a_24xlarge:
            value = "r5a.24xlarge";
            return true;
          case EC2InstanceType::m3_medium:
            value = "m3.medium";
            return true;
          case EC2InstanceType::m3_large:
            value = "m3.large";
            return true;
          case EC2InstanceType::m3_xlarge:
            value = "m3.xlarge";
            return true;
          case EC2InstanceType::m3_2xlarge:
            value = "m3.2xlarge";
            return true;
          case EC2InstanceType::m4_large:
            value = "m4.large";
            return true;
          case EC2InstanceType::m4_xlarge:
            value = "m4.xlarge";
            return true;
          case EC2InstanceType::m4_2xlarge:
            value = "m4.2xlarge";
            return true;
          case EC2InstanceType::m4_4xlarge:
            value = "m4.4xlarge";
            return true;
          case EC2InstanceType::m4_10xlarge:
            value = "m4.10xlarge";
            return true;
          case EC2InstanceType::m5_large:
            value = "m5.large";
            return true;
          case EC2InstanceType::m5_xlarge:
            value = "m5.xlarge";
            return true;
          case EC2InstanceType::m5_2xlarge:
            value = "m5.2xlarge";
            return true;
          case EC2InstanceType::m5_4xlarge:
            value = "m5.4xlarge";
            return true;
          case EC2InstanceType::m5_8xlarge:
            value = "m5.8xlarge";
            return true;
          case EC2InstanceType::m5_12xlarge:
            value = "m5.12xlarge";
            return true;
          case EC2InstanceType::m5_16xlarge:
            value = "m5.16xlarge";
            return true;
          case EC2InstanceType::m5_24xlarge:
            value = "m5.24xlarge";
            return true;
          case EC2InstanceType::m5a_large:
            value = "m5a.large";
            return true;
          case EC2InstanceType::m5a_xlarge:
            value = "m5a.xlarge";
            return true;
          case EC2InstanceType::m5a_2xlarge:
            value = "m5a.2xlarge";
            return true;
          case EC2InstanceType::m5a_4xlarge:
            value = "m5a.4xlarge";
            return true;
          case EC2InstanceType::m5a_8xlarge:
            value = "m5a.8xlarge";
            return true;
          case EC2InstanceType::m5a_12xlarge:
            value = "m5a.12xlarge";
            return true;
          case EC2InstanceType::m5a_16xlarge:
            value = "m5a.16xlarge";
            return true;
          case EC2InstanceType::m5a_24xlarge:
            value = "m5a.24xlarge";
            return true;
          case EC2InstanceType::c5d_large:
            value = "c5d.large";
            return true;
          case EC2InstanceType::c5d_xlarge:
            value = "c5d.xlarge";
            return true;
          case EC2InstanceType::c5d_2xlarge:
            value = "c5d.2xlarge";
            return true;
          case EC2InstanceType::c5d_4xlarge:
            value = "c5d.4xlarge";
            return true;
          case EC2InstanceType::c5d_9xlarge:
            value = "c5d.9xlarge";
            return true;
          case EC2InstanceType::c5d_12xlarge:
            value = "c5d.12xlarge";
            return true;
          case EC2InstanceType::c5d_18xlarge:
            value = "c5d.18xlarge";
            return true;
          case EC2InstanceType::c5d_24xlarge:
            value = "c5d.24xlarge";
            return true;
          case EC2InstanceType::c6a_large:
            value = "c6a.large";
            return true;
          case EC2InstanceType::c6a_xlarge:
            value = "c6a.xlarge";
            return true;
          case EC2InstanceType::c6a_2xlarge:
            value = "c6a.2xlarge";
            return true;
          case EC2InstanceType::c6a_4xlarge:
            value = "c6a.4xlarge";
            return true;
          case EC2InstanceType::c6a_8xlarge:
            value = "c6a.8xlarge";
            return true;
          case EC2InstanceType::c6a_12xlarge:
            value = "c6a.12xlarge";
            return true;
          case EC2InstanceType::c6a_16xlarge:
            value = "c6a.16xlarge";
            return true;
          case EC2InstanceType::c6a_24xlarge:
            value = "c6a.24xlarge";
            return true;
          case EC2InstanceType::c6i_large:
            value = "c6i.large";
            return true;
          case EC2InstanceType::c6i_xlarge:
            value = "c6i.xlarge";
            return true;
          case EC2InstanceType::c6i_2xlarge:
            value = "c6i.2xlarge";
            return true;
          case EC2InstanceType::c6i_4xlarge:
            value = "c6i.4xlarge";
            return true;
          case EC2InstanceType::c6i_8xlarge:
            value = "c6i.8xlarge";
            return true;
          case EC2InstanceType::c6i_12xlarge:
            value = "c6i.12xlarge";
            return true;
          case EC2InstanceType::c6i_16xlarge:
            value = "c6i.16xlarge";
            return true;
          case EC2InstanceType::c6i_24xlarge:
            value = "c6i.24xlarge";
            return true;
          case EC2InstanceType::r5d_large:
            value = "r5d.large";
            return true;
          case EC2InstanceType::r5d_xlarge:
            value = "r5d.xlarge";
            return true;
          case EC2InstanceType::r5d_2xlarge:
            value = "r5d.2xlarge";
            return true;
          case EC2InstanceType::r5d_4xlarge:
            value = "r5d.4xlarge";
            return true;
          case EC2InstanceType::r5d_8xlarge:
            value = "r5d.8xlarge";
            return true;
          case EC2InstanceType::r5d_12xlarge:
            value = "r5d.12xlarge";
            return true;
          case EC2InstanceType::r5d_16xlarge:
            value = "r5d.16xlarge";
            return true;
          case EC2InstanceType::r5d_24xlarge:
            value = "r5d.24xlarge";
            return true;
          case EC2InstanceType::m6g_medium:
            value = "m6g.medium";
            return true;
          case EC2InstanceType::m6g_large:
            value = "m6g.large";
            return true;
          case EC2InstanceType::m6g_xlarge:
            value = "m6g.xlarge";
            return true;
          case EC2InstanceType::m6g_2xlarge:
            value = "m6g.2xlarge";
            return true;
          case EC2InstanceType::m6g_4xlarge:
            value = "m6g.4xlarge";
            return true;
          case EC2InstanceType::m6g_8xlarge:
            value = "m6g.8xlarge";
            return true;
          case EC2InstanceType::m6g_12xlarge:
            value = "m6g.12xlarge";
            return true;
          case EC2InstanceType::m6g_16xlarge:
            value = "m6g.16xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(EC2InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case EC2InstanceType::c6g_medium:
            value = "c6g.medium";
            return true;
          case EC2InstanceType::c6g_large:
            value = "c6g.large";
            return true;
          case EC2InstanceType::c6g_xlarge:
            value = "c6g.xlarge";
            return true;
          case EC2InstanceType::c6g_2xlarge:
            value = "c6g.2xlarge";
            return true;
          case EC2InstanceType::c6g_4xlarge:
            value = "c6g.4xlarge";
            return true;
          case EC2InstanceType::c6g_8xlarge:
            value = "c6g.8xlarge";
            return true;
          case EC2InstanceType::c6g_12xlarge:
            value = "c6g.12xlarge";
            return true;
          case EC2InstanceType::c6g_16xlarge:
            value = "c6g.16xlarge";
            return true;
          case EC2InstanceType::r6g_medium:
            value = "r6g.medium";
            return true;
          case EC2InstanceType::r6g_large:
            value = "r6g.large";
            return true;
          case EC2InstanceType::r6g_xlarge:
            value = "r6g.xlarge";
            return true;
          case EC2InstanceType::r6g_2xlarge:
            value = "r6g.2xlarge";
            return true;
          case EC2InstanceType::r6g_4xlarge:
            value = "r6g.4xlarge";
            return true;
          case EC2InstanceType::r6g_8xlarge:
            value = "r6g.8xlarge";
            return true;
          case EC2InstanceType::r6g_12xlarge:
            value = "r6g.12xlarge";
            return true;
          case EC2InstanceType::r6g_16xlarge:
            value = "r6g.16xlarge";
            return true;
          case EC2InstanceType::c6gn_medium:
            value = "c6gn.medium";
            return true;
          case EC2InstanceType::c6gn_large:
            value = "c6gn.large";
            return true;
          case EC2InstanceType::c6gn_xlarge:
            value = "c6gn.xlarge";
            return true;
          case EC2InstanceType::c6gn_2xlarge:
            value = "c6gn.2xlarge";
            return true;
          case EC2InstanceType::c6gn_4xlarge:
            value = "c6gn.4xlarge";
            return true;
          case EC2InstanceType::c6gn_8xlarge:
            value = "c6gn.8xlarge";
            return true;
          case EC2InstanceType::c6gn_12xlarge:
            value = "c6gn.12xlarge";
            return true;
          case EC2InstanceType::c6gn_16xlarge:
            value = "c6gn.16xlarge";
            return true;
          case EC2InstanceType::c7g_medium:
            value = "c7g.medium";
            return true;
          case EC2InstanceType::c7g_large:
            value = "c7g.large";
            return true;
          case EC2InstanceType::c7g_xlarge:
            value = "c7g.xlarge";
            return true;
          case EC2InstanceType::c7g_2xlarge:
            value = "c7g.2xlarge";
            return true;
          case EC2InstanceType::c7g_4xlarge:
            value = "c7g.4xlarge";
            return true;
          case EC2InstanceType::c7g_8xlarge:
            value = "c7g.8xlarge";
            return true;
          case EC2InstanceType::c7g_12xlarge:
            value = "c7g.12xlarge";
            return true;
          case EC2InstanceType::c7g_16xlarge:
            value = "c7g.16xlarge";
            return true;
          case EC2InstanceType::r7g_medium:
            value = "r7g.medium";
            return true;
          case EC2InstanceType::r7g_large:
            value = "r7g.large";
            return true;
          case EC2InstanceType::r7g_xlarge:
            value = "r7g.xlarge";
            return true;
          case EC2InstanceType::r7g_2xlarge:
            value = "r7g.2xlarge";
            return true;
          case EC2InstanceType::r7g_4xlarge:
            value = "r7g.4xlarge";
            return true;
          case EC2InstanceType::r7g_8xlarge:
            value = "r7g.8xlarge";
            return true;
          case EC2InstanceType::r7g_12xlarge:
            value = "r7g.12xlarge";
            return true;
          case EC2InstanceType::r7g_16xlarge:
            value = "r7g.16xlarge";
            return true;
          case EC2InstanceType::m7g_medium:
            value = "m7g.medium";
            return true;
          case EC2InstanceType::m7g_large:
            value = "m7g.large";
            return true;
          case EC2InstanceType::m7g_xlarge:
            value = "m7g.xlarge";
            return true;
          case EC2InstanceType::m7g_2xlarge:
            value = "m7g.2xlarge";
            return true;
          case EC2InstanceType::m7g_4xlarge:
            value = "m7g.4xlarge";
            return true;
          case EC2InstanceType::m7g_8xlarge:
            value = "m7g.8xlarge";
            return true;
          case EC2InstanceType::m7g_12xlarge:
            value = "m7g.12xlarge";
            return true;
          case EC2InstanceType::m7g_16xlarge:
            value = "m7g.16xlarge";
            return true;
          case EC2InstanceType::g5g_xlarge:
            value = "g5g.xlarge";
            return true;
          case EC2InstanceType::g5g_2xlarge:
            value = "g5g.2xlarge";
            return true;
          case EC2InstanceType::g5g_4xlarge:
            value = "g5g.4xlarge";
            return true;
          case EC2InstanceType::g5g_8xlarge:
            value = "g5g.8xlarge";
            return true;
          case EC2InstanceType::g5g_16xlarge:
            value = "g5g.16xlarge";
            return true;
          case EC2InstanceType::r6i_large:
            value = "r6i.large";
            return true;
          case EC2InstanceType::r6i_xlarge:
            value = "r6i.xlarge";
            return true;
          case EC2InstanceType::r6i_2xlarge:
            value = "r6i.2xlarge";
            return true;
          case EC2InstanceType::r6i_4xlarge:
            value = "r6i.4xlarge";
            return true;
          case EC2InstanceType::r6i_8xlarge:
            value = "r6i.8xlarge";
            return true;
          case EC2InstanceType::r6i_12xlarge:
            value = "r6i.12xlarge";
            return true;
          case EC2InstanceType::r6i_16xlarge:
            value = "r6i.16xlarge";
            return true;
          case EC2InstanceType::c6gd_medium:
            value = "c6gd.medium";
            return true;
          case EC2InstanceType::c6gd_large:
            value = "c6gd.large";
            return true;
          case EC2InstanceType::c6gd_xlarge:
            value = "c6gd.xlarge";
            return true;
          case EC2InstanceType::c6gd_2xlarge:
            value = "c6gd.2xlarge";
            return true;
          case EC2InstanceType::c6gd_4xlarge:
            value = "c6gd.4xlarge";
            return true;
          case EC2InstanceType::c6gd_8xlarge:
            value = "c6gd.8xlarge";
            return true;
          case EC2InstanceType::c6gd_12xlarge:
            value = "c6gd.12xlarge";
            return true;
          case EC2InstanceType::c6gd_16xlarge:
            value = "c6gd.16xlarge";
            return true;
          case EC2InstanceType::c6in_large:
            value = "c6in.large";
            return true;
          case EC2InstanceType::c6in_xlarge:
            value = "c6in.xlarge";
            return true;
          case EC2InstanceType::c6in_2xlarge:
            value = "c6in.2xlarge";
            return true;
          case EC2InstanceType::c6in_4xlarge:
            value = "c6in.4xlarge";
            return true;
          case EC2InstanceType::c6in_8xlarge:
            value = "c6in.8xlarge";
            return true;
          case EC2InstanceType::c6in_12xlarge:
            value = "c6in.12xlarge";
            return true;
          case EC2InstanceType::c6in_16xlarge:
            value = "c6in.16xlarge";
            return true;
          case EC2InstanceType::c7a_medium:
            value = "c7a.medium";
            return true;
          case EC2InstanceType::c7a_large:
            value = "c7a.large";
            return true;
          case EC2InstanceType::c7a_xlarge:
            value = "c7a.xlarge";
            return true;
          case EC2InstanceType::c7a_2xlarge:
            value = "c7a.2xlarge";
            return true;
          case EC2InstanceType::c7a_4xlarge:
            value = "c7a.4xlarge";
            return true;
          case EC2InstanceType::c7a_8xlarge:
            value = "c7a.8xlarge";
            return true;
          case EC2InstanceType::c7a_12xlarge:
            value = "c7a.12xlarge";
            return true;
          case EC2InstanceType::c7a_16xlarge:
            value = "c7a.16xlarge";
            return true;
          case EC2InstanceType::c7gd_medium:
            value = "c7gd.medium";
            return true;
          case EC2InstanceType::c7gd_large:
            value = "c7gd.large";
            return true;
          case EC2InstanceType::c7gd_xlarge:
            value = "c7gd.xlarge";
            return true;
          case EC2InstanceType::c7gd_2xlarge:
            value = "c7gd.2xlarge";
            return true;
          case EC2InstanceType::c7gd_4xlarge:
            value = "c7gd.4xlarge";
            return true;
          case EC2InstanceType::c7gd_8xlarge:
            value = "c7gd.8xlarge";
            return true;
          case EC2InstanceType::c7gd_12xlarge:
            value = "c7gd.12xlarge";
            return true;
          case EC2InstanceType::c7gd_16xlarge:
            value = "c7gd.16xlarge";
            return true;
          case EC2InstanceType::c7gn_medium:
            value = "c7gn.medium";
            return true;
          case EC2InstanceType::c7gn_large:
            value = "c7gn.large";
            return true;
          case EC2InstanceType::c7gn_xlarge:
            value = "c7gn.xlarge";
            return true;
          case EC2InstanceType::c7gn_2xlarge:
            value = "c7gn.2xlarge";
            return true;
          case EC2InstanceType::c7gn_4xlarge:
            value = "c7gn.4xlarge";
            return true;
          case EC2InstanceType::c7gn_8xlarge:
            value = "c7gn.8xlarge";
            return true;
          case EC2InstanceType::c7gn_12xlarge:
            value = "c7gn.12xlarge";
            return true;
          case EC2InstanceType::c7gn_16xlarge:
            value = "c7gn.16xlarge";
            return true;
          case EC2InstanceType::c7i_large:
            value = "c7i.large";
            return true;
          case EC2InstanceType::c7i_xlarge:
            value = "c7i.xlarge";
            return true;
          case EC2InstanceType::c7i_2xlarge:
            value = "c7i.2xlarge";
            return true;
          case EC2InstanceType::c7i_4xlarge:
            value = "c7i.4xlarge";
            return true;
          case EC2InstanceType::c7i_8xlarge:
            value = "c7i.8xlarge";
            return true;
          case EC2InstanceType::c7i_12xlarge:
            value = "c7i.12xlarge";
            return true;
          case EC2InstanceType::c7i_16xlarge:
            value = "c7i.16xlarge";
            return true;
          case EC2InstanceType::m6a_large:
            value = "m6a.large";
            return true;
          case EC2InstanceType::m6a_xlarge:
            value = "m6a.xlarge";
            return true;
          case EC2InstanceType::m6a_2xlarge:
            value = "m6a.2xlarge";
            return true;
          case EC2InstanceType::m6a_4xlarge:
            value = "m6a.4xlarge";
            return true;
          case EC2InstanceType::m6a_8xlarge:
            value = "m6a.8xlarge";
            return true;
          case EC2InstanceType::m6a_12xlarge:
            value = "m6a.12xlarge";
            return true;
          case EC2InstanceType::m6a_16xlarge:
            value = "m6a.16xlarge";
            return true;
          case EC2InstanceType::m6gd_medium:
            value = "m6gd.medium";
            return true;
          case EC2InstanceType::m6gd_large:
            value = "m6gd.large";
            return true;
          case EC2InstanceType::m6gd_xlarge:
            value = "m6gd.xlarge";
            return true;
          case EC2InstanceType::m6gd_2xlarge:
            value = "m6gd.2xlarge";
            return true;
          case EC2InstanceType::m6gd_4xlarge:
            value = "m6gd.4xlarge";
            return true;
          case EC2InstanceType::m6gd_8xlarge:
            value = "m6gd.8xlarge";
            return true;
          case EC2InstanceType::m6gd_12xlarge:
            value = "m6gd.12xlarge";
            return true;
          case EC2InstanceType::m6gd_16xlarge:
            value = "m6gd.16xlarge";
            return true;
          case EC2InstanceType::m6i_large:
            value = "m6i.large";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper2(EC2InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case EC2InstanceType::m6i_xlarge:
            value = "m6i.xlarge";
            return true;
          case EC2InstanceType::m6i_2xlarge:
            value = "m6i.2xlarge";
            return true;
          case EC2InstanceType::m6i_4xlarge:
            value = "m6i.4xlarge";
            return true;
          case EC2InstanceType::m6i_8xlarge:
            value = "m6i.8xlarge";
            return true;
          case EC2InstanceType::m6i_12xlarge:
            value = "m6i.12xlarge";
            return true;
          case EC2InstanceType::m6i_16xlarge:
            value = "m6i.16xlarge";
            return true;
          case EC2InstanceType::m7a_medium:
            value = "m7a.medium";
            return true;
          case EC2InstanceType::m7a_large:
            value = "m7a.large";
            return true;
          case EC2InstanceType::m7a_xlarge:
            value = "m7a.xlarge";
            return true;
          case EC2InstanceType::m7a_2xlarge:
            value = "m7a.2xlarge";
            return true;
          case EC2InstanceType::m7a_4xlarge:
            value = "m7a.4xlarge";
            return true;
          case EC2InstanceType::m7a_8xlarge:
            value = "m7a.8xlarge";
            return true;
          case EC2InstanceType::m7a_12xlarge:
            value = "m7a.12xlarge";
            return true;
          case EC2InstanceType::m7a_16xlarge:
            value = "m7a.16xlarge";
            return true;
          case EC2InstanceType::m7gd_medium:
            value = "m7gd.medium";
            return true;
          case EC2InstanceType::m7gd_large:
            value = "m7gd.large";
            return true;
          case EC2InstanceType::m7gd_xlarge:
            value = "m7gd.xlarge";
            return true;
          case EC2InstanceType::m7gd_2xlarge:
            value = "m7gd.2xlarge";
            return true;
          case EC2InstanceType::m7gd_4xlarge:
            value = "m7gd.4xlarge";
            return true;
          case EC2InstanceType::m7gd_8xlarge:
            value = "m7gd.8xlarge";
            return true;
          case EC2InstanceType::m7gd_12xlarge:
            value = "m7gd.12xlarge";
            return true;
          case EC2InstanceType::m7gd_16xlarge:
            value = "m7gd.16xlarge";
            return true;
          case EC2InstanceType::m7i_large:
            value = "m7i.large";
            return true;
          case EC2InstanceType::m7i_xlarge:
            value = "m7i.xlarge";
            return true;
          case EC2InstanceType::m7i_2xlarge:
            value = "m7i.2xlarge";
            return true;
          case EC2InstanceType::m7i_4xlarge:
            value = "m7i.4xlarge";
            return true;
          case EC2InstanceType::m7i_8xlarge:
            value = "m7i.8xlarge";
            return true;
          case EC2InstanceType::m7i_12xlarge:
            value = "m7i.12xlarge";
            return true;
          case EC2InstanceType::m7i_16xlarge:
            value = "m7i.16xlarge";
            return true;
          case EC2InstanceType::r6gd_medium:
            value = "r6gd.medium";
            return true;
          case EC2InstanceType::r6gd_large:
            value = "r6gd.large";
            return true;
          case EC2InstanceType::r6gd_xlarge:
            value = "r6gd.xlarge";
            return true;
          case EC2InstanceType::r6gd_2xlarge:
            value = "r6gd.2xlarge";
            return true;
          case EC2InstanceType::r6gd_4xlarge:
            value = "r6gd.4xlarge";
            return true;
          case EC2InstanceType::r6gd_8xlarge:
            value = "r6gd.8xlarge";
            return true;
          case EC2InstanceType::r6gd_12xlarge:
            value = "r6gd.12xlarge";
            return true;
          case EC2InstanceType::r6gd_16xlarge:
            value = "r6gd.16xlarge";
            return true;
          case EC2InstanceType::r7a_medium:
            value = "r7a.medium";
            return true;
          case EC2InstanceType::r7a_large:
            value = "r7a.large";
            return true;
          case EC2InstanceType::r7a_xlarge:
            value = "r7a.xlarge";
            return true;
          case EC2InstanceType::r7a_2xlarge:
            value = "r7a.2xlarge";
            return true;
          case EC2InstanceType::r7a_4xlarge:
            value = "r7a.4xlarge";
            return true;
          case EC2InstanceType::r7a_8xlarge:
            value = "r7a.8xlarge";
            return true;
          case EC2InstanceType::r7a_12xlarge:
            value = "r7a.12xlarge";
            return true;
          case EC2InstanceType::r7a_16xlarge:
            value = "r7a.16xlarge";
            return true;
          case EC2InstanceType::r7gd_medium:
            value = "r7gd.medium";
            return true;
          case EC2InstanceType::r7gd_large:
            value = "r7gd.large";
            return true;
          case EC2InstanceType::r7gd_xlarge:
            value = "r7gd.xlarge";
            return true;
          case EC2InstanceType::r7gd_2xlarge:
            value = "r7gd.2xlarge";
            return true;
          case EC2InstanceType::r7gd_4xlarge:
            value = "r7gd.4xlarge";
            return true;
          case EC2InstanceType::r7gd_8xlarge:
            value = "r7gd.8xlarge";
            return true;
          case EC2InstanceType::r7gd_12xlarge:
            value = "r7gd.12xlarge";
            return true;
          case EC2InstanceType::r7gd_16xlarge:
            value = "r7gd.16xlarge";
            return true;
          case EC2InstanceType::r7i_large:
            value = "r7i.large";
            return true;
          case EC2InstanceType::r7i_xlarge:
            value = "r7i.xlarge";
            return true;
          case EC2InstanceType::r7i_2xlarge:
            value = "r7i.2xlarge";
            return true;
          case EC2InstanceType::r7i_4xlarge:
            value = "r7i.4xlarge";
            return true;
          case EC2InstanceType::r7i_8xlarge:
            value = "r7i.8xlarge";
            return true;
          case EC2InstanceType::r7i_12xlarge:
            value = "r7i.12xlarge";
            return true;
          case EC2InstanceType::r7i_16xlarge:
            value = "r7i.16xlarge";
            return true;
          case EC2InstanceType::r7i_24xlarge:
            value = "r7i.24xlarge";
            return true;
          case EC2InstanceType::r7i_48xlarge:
            value = "r7i.48xlarge";
            return true;
          case EC2InstanceType::c5ad_large:
            value = "c5ad.large";
            return true;
          case EC2InstanceType::c5ad_xlarge:
            value = "c5ad.xlarge";
            return true;
          case EC2InstanceType::c5ad_2xlarge:
            value = "c5ad.2xlarge";
            return true;
          case EC2InstanceType::c5ad_4xlarge:
            value = "c5ad.4xlarge";
            return true;
          case EC2InstanceType::c5ad_8xlarge:
            value = "c5ad.8xlarge";
            return true;
          case EC2InstanceType::c5ad_12xlarge:
            value = "c5ad.12xlarge";
            return true;
          case EC2InstanceType::c5ad_16xlarge:
            value = "c5ad.16xlarge";
            return true;
          case EC2InstanceType::c5ad_24xlarge:
            value = "c5ad.24xlarge";
            return true;
          case EC2InstanceType::c5n_large:
            value = "c5n.large";
            return true;
          case EC2InstanceType::c5n_xlarge:
            value = "c5n.xlarge";
            return true;
          case EC2InstanceType::c5n_2xlarge:
            value = "c5n.2xlarge";
            return true;
          case EC2InstanceType::c5n_4xlarge:
            value = "c5n.4xlarge";
            return true;
          case EC2InstanceType::c5n_9xlarge:
            value = "c5n.9xlarge";
            return true;
          case EC2InstanceType::c5n_18xlarge:
            value = "c5n.18xlarge";
            return true;
          case EC2InstanceType::r5ad_large:
            value = "r5ad.large";
            return true;
          case EC2InstanceType::r5ad_xlarge:
            value = "r5ad.xlarge";
            return true;
          case EC2InstanceType::r5ad_2xlarge:
            value = "r5ad.2xlarge";
            return true;
          case EC2InstanceType::r5ad_4xlarge:
            value = "r5ad.4xlarge";
            return true;
          case EC2InstanceType::r5ad_8xlarge:
            value = "r5ad.8xlarge";
            return true;
          case EC2InstanceType::r5ad_12xlarge:
            value = "r5ad.12xlarge";
            return true;
          case EC2InstanceType::r5ad_16xlarge:
            value = "r5ad.16xlarge";
            return true;
          case EC2InstanceType::r5ad_24xlarge:
            value = "r5ad.24xlarge";
            return true;
          case EC2InstanceType::c6id_large:
            value = "c6id.large";
            return true;
          case EC2InstanceType::c6id_xlarge:
            value = "c6id.xlarge";
            return true;
          case EC2InstanceType::c6id_2xlarge:
            value = "c6id.2xlarge";
            return true;
          case EC2InstanceType::c6id_4xlarge:
            value = "c6id.4xlarge";
            return true;
          case EC2InstanceType::c6id_8xlarge:
            value = "c6id.8xlarge";
            return true;
          case EC2InstanceType::c6id_12xlarge:
            value = "c6id.12xlarge";
            return true;
          case EC2InstanceType::c6id_16xlarge:
            value = "c6id.16xlarge";
            return true;
          case EC2InstanceType::c6id_24xlarge:
            value = "c6id.24xlarge";
            return true;
          case EC2InstanceType::c6id_32xlarge:
            value = "c6id.32xlarge";
            return true;
          case EC2InstanceType::c8g_medium:
            value = "c8g.medium";
            return true;
          case EC2InstanceType::c8g_large:
            value = "c8g.large";
            return true;
          case EC2InstanceType::c8g_xlarge:
            value = "c8g.xlarge";
            return true;
          case EC2InstanceType::c8g_2xlarge:
            value = "c8g.2xlarge";
            return true;
          case EC2InstanceType::c8g_4xlarge:
            value = "c8g.4xlarge";
            return true;
          case EC2InstanceType::c8g_8xlarge:
            value = "c8g.8xlarge";
            return true;
          case EC2InstanceType::c8g_12xlarge:
            value = "c8g.12xlarge";
            return true;
          case EC2InstanceType::c8g_16xlarge:
            value = "c8g.16xlarge";
            return true;
          case EC2InstanceType::c8g_24xlarge:
            value = "c8g.24xlarge";
            return true;
          case EC2InstanceType::c8g_48xlarge:
            value = "c8g.48xlarge";
            return true;
          case EC2InstanceType::m5ad_large:
            value = "m5ad.large";
            return true;
          case EC2InstanceType::m5ad_xlarge:
            value = "m5ad.xlarge";
            return true;
          case EC2InstanceType::m5ad_2xlarge:
            value = "m5ad.2xlarge";
            return true;
          case EC2InstanceType::m5ad_4xlarge:
            value = "m5ad.4xlarge";
            return true;
          case EC2InstanceType::m5ad_8xlarge:
            value = "m5ad.8xlarge";
            return true;
          case EC2InstanceType::m5ad_12xlarge:
            value = "m5ad.12xlarge";
            return true;
          case EC2InstanceType::m5ad_16xlarge:
            value = "m5ad.16xlarge";
            return true;
          case EC2InstanceType::m5ad_24xlarge:
            value = "m5ad.24xlarge";
            return true;
          case EC2InstanceType::m5d_large:
            value = "m5d.large";
            return true;
          case EC2InstanceType::m5d_xlarge:
            value = "m5d.xlarge";
            return true;
          case EC2InstanceType::m5d_2xlarge:
            value = "m5d.2xlarge";
            return true;
          case EC2InstanceType::m5d_4xlarge:
            value = "m5d.4xlarge";
            return true;
          case EC2InstanceType::m5d_8xlarge:
            value = "m5d.8xlarge";
            return true;
          case EC2InstanceType::m5d_12xlarge:
            value = "m5d.12xlarge";
            return true;
          case EC2InstanceType::m5d_16xlarge:
            value = "m5d.16xlarge";
            return true;
          case EC2InstanceType::m5d_24xlarge:
            value = "m5d.24xlarge";
            return true;
          case EC2InstanceType::m5dn_large:
            value = "m5dn.large";
            return true;
          case EC2InstanceType::m5dn_xlarge:
            value = "m5dn.xlarge";
            return true;
          case EC2InstanceType::m5dn_2xlarge:
            value = "m5dn.2xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper3(EC2InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case EC2InstanceType::m5dn_4xlarge:
            value = "m5dn.4xlarge";
            return true;
          case EC2InstanceType::m5dn_8xlarge:
            value = "m5dn.8xlarge";
            return true;
          case EC2InstanceType::m5dn_12xlarge:
            value = "m5dn.12xlarge";
            return true;
          case EC2InstanceType::m5dn_16xlarge:
            value = "m5dn.16xlarge";
            return true;
          case EC2InstanceType::m5dn_24xlarge:
            value = "m5dn.24xlarge";
            return true;
          case EC2InstanceType::m5n_large:
            value = "m5n.large";
            return true;
          case EC2InstanceType::m5n_xlarge:
            value = "m5n.xlarge";
            return true;
          case EC2InstanceType::m5n_2xlarge:
            value = "m5n.2xlarge";
            return true;
          case EC2InstanceType::m5n_4xlarge:
            value = "m5n.4xlarge";
            return true;
          case EC2InstanceType::m5n_8xlarge:
            value = "m5n.8xlarge";
            return true;
          case EC2InstanceType::m5n_12xlarge:
            value = "m5n.12xlarge";
            return true;
          case EC2InstanceType::m5n_16xlarge:
            value = "m5n.16xlarge";
            return true;
          case EC2InstanceType::m5n_24xlarge:
            value = "m5n.24xlarge";
            return true;
          case EC2InstanceType::m6id_large:
            value = "m6id.large";
            return true;
          case EC2InstanceType::m6id_xlarge:
            value = "m6id.xlarge";
            return true;
          case EC2InstanceType::m6id_2xlarge:
            value = "m6id.2xlarge";
            return true;
          case EC2InstanceType::m6id_4xlarge:
            value = "m6id.4xlarge";
            return true;
          case EC2InstanceType::m6id_8xlarge:
            value = "m6id.8xlarge";
            return true;
          case EC2InstanceType::m6id_12xlarge:
            value = "m6id.12xlarge";
            return true;
          case EC2InstanceType::m6id_16xlarge:
            value = "m6id.16xlarge";
            return true;
          case EC2InstanceType::m6id_24xlarge:
            value = "m6id.24xlarge";
            return true;
          case EC2InstanceType::m6id_32xlarge:
            value = "m6id.32xlarge";
            return true;
          case EC2InstanceType::m6idn_large:
            value = "m6idn.large";
            return true;
          case EC2InstanceType::m6idn_xlarge:
            value = "m6idn.xlarge";
            return true;
          case EC2InstanceType::m6idn_2xlarge:
            value = "m6idn.2xlarge";
            return true;
          case EC2InstanceType::m6idn_4xlarge:
            value = "m6idn.4xlarge";
            return true;
          case EC2InstanceType::m6idn_8xlarge:
            value = "m6idn.8xlarge";
            return true;
          case EC2InstanceType::m6idn_12xlarge:
            value = "m6idn.12xlarge";
            return true;
          case EC2InstanceType::m6idn_16xlarge:
            value = "m6idn.16xlarge";
            return true;
          case EC2InstanceType::m6idn_24xlarge:
            value = "m6idn.24xlarge";
            return true;
          case EC2InstanceType::m6idn_32xlarge:
            value = "m6idn.32xlarge";
            return true;
          case EC2InstanceType::m6in_large:
            value = "m6in.large";
            return true;
          case EC2InstanceType::m6in_xlarge:
            value = "m6in.xlarge";
            return true;
          case EC2InstanceType::m6in_2xlarge:
            value = "m6in.2xlarge";
            return true;
          case EC2InstanceType::m6in_4xlarge:
            value = "m6in.4xlarge";
            return true;
          case EC2InstanceType::m6in_8xlarge:
            value = "m6in.8xlarge";
            return true;
          case EC2InstanceType::m6in_12xlarge:
            value = "m6in.12xlarge";
            return true;
          case EC2InstanceType::m6in_16xlarge:
            value = "m6in.16xlarge";
            return true;
          case EC2InstanceType::m6in_24xlarge:
            value = "m6in.24xlarge";
            return true;
          case EC2InstanceType::m6in_32xlarge:
            value = "m6in.32xlarge";
            return true;
          case EC2InstanceType::m8g_medium:
            value = "m8g.medium";
            return true;
          case EC2InstanceType::m8g_large:
            value = "m8g.large";
            return true;
          case EC2InstanceType::m8g_xlarge:
            value = "m8g.xlarge";
            return true;
          case EC2InstanceType::m8g_2xlarge:
            value = "m8g.2xlarge";
            return true;
          case EC2InstanceType::m8g_4xlarge:
            value = "m8g.4xlarge";
            return true;
          case EC2InstanceType::m8g_8xlarge:
            value = "m8g.8xlarge";
            return true;
          case EC2InstanceType::m8g_12xlarge:
            value = "m8g.12xlarge";
            return true;
          case EC2InstanceType::m8g_16xlarge:
            value = "m8g.16xlarge";
            return true;
          case EC2InstanceType::m8g_24xlarge:
            value = "m8g.24xlarge";
            return true;
          case EC2InstanceType::m8g_48xlarge:
            value = "m8g.48xlarge";
            return true;
          case EC2InstanceType::r5dn_large:
            value = "r5dn.large";
            return true;
          case EC2InstanceType::r5dn_xlarge:
            value = "r5dn.xlarge";
            return true;
          case EC2InstanceType::r5dn_2xlarge:
            value = "r5dn.2xlarge";
            return true;
          case EC2InstanceType::r5dn_4xlarge:
            value = "r5dn.4xlarge";
            return true;
          case EC2InstanceType::r5dn_8xlarge:
            value = "r5dn.8xlarge";
            return true;
          case EC2InstanceType::r5dn_12xlarge:
            value = "r5dn.12xlarge";
            return true;
          case EC2InstanceType::r5dn_16xlarge:
            value = "r5dn.16xlarge";
            return true;
          case EC2InstanceType::r5dn_24xlarge:
            value = "r5dn.24xlarge";
            return true;
          case EC2InstanceType::r5n_large:
            value = "r5n.large";
            return true;
          case EC2InstanceType::r5n_xlarge:
            value = "r5n.xlarge";
            return true;
          case EC2InstanceType::r5n_2xlarge:
            value = "r5n.2xlarge";
            return true;
          case EC2InstanceType::r5n_4xlarge:
            value = "r5n.4xlarge";
            return true;
          case EC2InstanceType::r5n_8xlarge:
            value = "r5n.8xlarge";
            return true;
          case EC2InstanceType::r5n_12xlarge:
            value = "r5n.12xlarge";
            return true;
          case EC2InstanceType::r5n_16xlarge:
            value = "r5n.16xlarge";
            return true;
          case EC2InstanceType::r5n_24xlarge:
            value = "r5n.24xlarge";
            return true;
          case EC2InstanceType::r6a_large:
            value = "r6a.large";
            return true;
          case EC2InstanceType::r6a_xlarge:
            value = "r6a.xlarge";
            return true;
          case EC2InstanceType::r6a_2xlarge:
            value = "r6a.2xlarge";
            return true;
          case EC2InstanceType::r6a_4xlarge:
            value = "r6a.4xlarge";
            return true;
          case EC2InstanceType::r6a_8xlarge:
            value = "r6a.8xlarge";
            return true;
          case EC2InstanceType::r6a_12xlarge:
            value = "r6a.12xlarge";
            return true;
          case EC2InstanceType::r6a_16xlarge:
            value = "r6a.16xlarge";
            return true;
          case EC2InstanceType::r6a_24xlarge:
            value = "r6a.24xlarge";
            return true;
          case EC2InstanceType::r6a_32xlarge:
            value = "r6a.32xlarge";
            return true;
          case EC2InstanceType::r6a_48xlarge:
            value = "r6a.48xlarge";
            return true;
          case EC2InstanceType::r6id_large:
            value = "r6id.large";
            return true;
          case EC2InstanceType::r6id_xlarge:
            value = "r6id.xlarge";
            return true;
          case EC2InstanceType::r6id_2xlarge:
            value = "r6id.2xlarge";
            return true;
          case EC2InstanceType::r6id_4xlarge:
            value = "r6id.4xlarge";
            return true;
          case EC2InstanceType::r6id_8xlarge:
            value = "r6id.8xlarge";
            return true;
          case EC2InstanceType::r6id_12xlarge:
            value = "r6id.12xlarge";
            return true;
          case EC2InstanceType::r6id_16xlarge:
            value = "r6id.16xlarge";
            return true;
          case EC2InstanceType::r6id_24xlarge:
            value = "r6id.24xlarge";
            return true;
          case EC2InstanceType::r6id_32xlarge:
            value = "r6id.32xlarge";
            return true;
          case EC2InstanceType::r6idn_large:
            value = "r6idn.large";
            return true;
          case EC2InstanceType::r6idn_xlarge:
            value = "r6idn.xlarge";
            return true;
          case EC2InstanceType::r6idn_2xlarge:
            value = "r6idn.2xlarge";
            return true;
          case EC2InstanceType::r6idn_4xlarge:
            value = "r6idn.4xlarge";
            return true;
          case EC2InstanceType::r6idn_8xlarge:
            value = "r6idn.8xlarge";
            return true;
          case EC2InstanceType::r6idn_12xlarge:
            value = "r6idn.12xlarge";
            return true;
          case EC2InstanceType::r6idn_16xlarge:
            value = "r6idn.16xlarge";
            return true;
          case EC2InstanceType::r6idn_24xlarge:
            value = "r6idn.24xlarge";
            return true;
          case EC2InstanceType::r6idn_32xlarge:
            value = "r6idn.32xlarge";
            return true;
          case EC2InstanceType::r6in_large:
            value = "r6in.large";
            return true;
          case EC2InstanceType::r6in_xlarge:
            value = "r6in.xlarge";
            return true;
          case EC2InstanceType::r6in_2xlarge:
            value = "r6in.2xlarge";
            return true;
          case EC2InstanceType::r6in_4xlarge:
            value = "r6in.4xlarge";
            return true;
          case EC2InstanceType::r6in_8xlarge:
            value = "r6in.8xlarge";
            return true;
          case EC2InstanceType::r6in_12xlarge:
            value = "r6in.12xlarge";
            return true;
          case EC2InstanceType::r6in_16xlarge:
            value = "r6in.16xlarge";
            return true;
          case EC2InstanceType::r6in_24xlarge:
            value = "r6in.24xlarge";
            return true;
          case EC2InstanceType::r6in_32xlarge:
            value = "r6in.32xlarge";
            return true;
          case EC2InstanceType::r8g_medium:
            value = "r8g.medium";
            return true;
          case EC2InstanceType::r8g_large:
            value = "r8g.large";
            return true;
          case EC2InstanceType::r8g_xlarge:
            value = "r8g.xlarge";
            return true;
          case EC2InstanceType::r8g_2xlarge:
            value = "r8g.2xlarge";
            return true;
          case EC2InstanceType::r8g_4xlarge:
            value = "r8g.4xlarge";
            return true;
          case EC2InstanceType::r8g_8xlarge:
            value = "r8g.8xlarge";
            return true;
          case EC2InstanceType::r8g_12xlarge:
            value = "r8g.12xlarge";
            return true;
          case EC2InstanceType::r8g_16xlarge:
            value = "r8g.16xlarge";
            return true;
          case EC2InstanceType::r8g_24xlarge:
            value = "r8g.24xlarge";
            return true;
          case EC2InstanceType::r8g_48xlarge:
            value = "r8g.48xlarge";
            return true;
          case EC2InstanceType::m4_16xlarge:
            value = "m4.16xlarge";
            return true;
          case EC2InstanceType::c6a_32xlarge:
            value = "c6a.32xlarge";
            return true;
          case EC2InstanceType::c6a_48xlarge:
            value = "c6a.48xlarge";
            return true;
          case EC2InstanceType::c6i_32xlarge:
            value = "c6i.32xlarge";
            return true;
          case EC2InstanceType::r6i_24xlarge:
            value = "r6i.24xlarge";
            return true;
          case EC2InstanceType::r6i_32xlarge:
            value = "r6i.32xlarge";
            return true;
          case EC2InstanceType::c6in_24xlarge:
            value = "c6in.24xlarge";
            return true;
          case EC2InstanceType::c6in_32xlarge:
            value = "c6in.32xlarge";
            return true;
          case EC2InstanceType::c7a_24xlarge:
            value = "c7a.24xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper4(EC2InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case EC2InstanceType::c7a_32xlarge:
            value = "c7a.32xlarge";
            return true;
          case EC2InstanceType::c7a_48xlarge:
            value = "c7a.48xlarge";
            return true;
          case EC2InstanceType::c7i_24xlarge:
            value = "c7i.24xlarge";
            return true;
          case EC2InstanceType::c7i_48xlarge:
            value = "c7i.48xlarge";
            return true;
          case EC2InstanceType::m6a_24xlarge:
            value = "m6a.24xlarge";
            return true;
          case EC2InstanceType::m6a_32xlarge:
            value = "m6a.32xlarge";
            return true;
          case EC2InstanceType::m6a_48xlarge:
            value = "m6a.48xlarge";
            return true;
          case EC2InstanceType::m6i_24xlarge:
            value = "m6i.24xlarge";
            return true;
          case EC2InstanceType::m6i_32xlarge:
            value = "m6i.32xlarge";
            return true;
          case EC2InstanceType::m7a_24xlarge:
            value = "m7a.24xlarge";
            return true;
          case EC2InstanceType::m7a_32xlarge:
            value = "m7a.32xlarge";
            return true;
          case EC2InstanceType::m7a_48xlarge:
            value = "m7a.48xlarge";
            return true;
          case EC2InstanceType::m7i_24xlarge:
            value = "m7i.24xlarge";
            return true;
          case EC2InstanceType::m7i_48xlarge:
            value = "m7i.48xlarge";
            return true;
          case EC2InstanceType::r7a_24xlarge:
            value = "r7a.24xlarge";
            return true;
          case EC2InstanceType::r7a_32xlarge:
            value = "r7a.32xlarge";
            return true;
          case EC2InstanceType::r7a_48xlarge:
            value = "r7a.48xlarge";
            return true;
          default:
            return false;
          }
        }

        EC2InstanceType GetEC2InstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          EC2InstanceType enumValue;
          if (GetEnumForNameHelper0(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper1(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper2(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper3(hashCode, enumValue))
          {
             return enumValue;
          }
          else if (GetEnumForNameHelper4(hashCode, enumValue))
          {
             return enumValue;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EC2InstanceType>(hashCode);
          }

          return EC2InstanceType::NOT_SET;
        }

        Aws::String GetNameForEC2InstanceType(EC2InstanceType enumValue)
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
          else if (GetNameForEnumHelper2(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper3(enumValue, value))
          {
            return value;
          }
          else if (GetNameForEnumHelper4(enumValue, value))
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

      } // namespace EC2InstanceTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
