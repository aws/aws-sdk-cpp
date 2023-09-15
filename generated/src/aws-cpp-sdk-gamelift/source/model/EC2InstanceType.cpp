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
