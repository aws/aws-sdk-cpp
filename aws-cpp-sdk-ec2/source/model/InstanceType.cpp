/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/InstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace InstanceTypeMapper
      {

        static const int t1_micro_HASH = HashingUtils::HashString("t1.micro");
        static const int t2_nano_HASH = HashingUtils::HashString("t2.nano");
        static const int t2_micro_HASH = HashingUtils::HashString("t2.micro");
        static const int t2_small_HASH = HashingUtils::HashString("t2.small");
        static const int t2_medium_HASH = HashingUtils::HashString("t2.medium");
        static const int t2_large_HASH = HashingUtils::HashString("t2.large");
        static const int t2_xlarge_HASH = HashingUtils::HashString("t2.xlarge");
        static const int t2_2xlarge_HASH = HashingUtils::HashString("t2.2xlarge");
        static const int t3_nano_HASH = HashingUtils::HashString("t3.nano");
        static const int t3_micro_HASH = HashingUtils::HashString("t3.micro");
        static const int t3_small_HASH = HashingUtils::HashString("t3.small");
        static const int t3_medium_HASH = HashingUtils::HashString("t3.medium");
        static const int t3_large_HASH = HashingUtils::HashString("t3.large");
        static const int t3_xlarge_HASH = HashingUtils::HashString("t3.xlarge");
        static const int t3_2xlarge_HASH = HashingUtils::HashString("t3.2xlarge");
        static const int t3a_nano_HASH = HashingUtils::HashString("t3a.nano");
        static const int t3a_micro_HASH = HashingUtils::HashString("t3a.micro");
        static const int t3a_small_HASH = HashingUtils::HashString("t3a.small");
        static const int t3a_medium_HASH = HashingUtils::HashString("t3a.medium");
        static const int t3a_large_HASH = HashingUtils::HashString("t3a.large");
        static const int t3a_xlarge_HASH = HashingUtils::HashString("t3a.xlarge");
        static const int t3a_2xlarge_HASH = HashingUtils::HashString("t3a.2xlarge");
        static const int m1_small_HASH = HashingUtils::HashString("m1.small");
        static const int m1_medium_HASH = HashingUtils::HashString("m1.medium");
        static const int m1_large_HASH = HashingUtils::HashString("m1.large");
        static const int m1_xlarge_HASH = HashingUtils::HashString("m1.xlarge");
        static const int m3_medium_HASH = HashingUtils::HashString("m3.medium");
        static const int m3_large_HASH = HashingUtils::HashString("m3.large");
        static const int m3_xlarge_HASH = HashingUtils::HashString("m3.xlarge");
        static const int m3_2xlarge_HASH = HashingUtils::HashString("m3.2xlarge");
        static const int m4_large_HASH = HashingUtils::HashString("m4.large");
        static const int m4_xlarge_HASH = HashingUtils::HashString("m4.xlarge");
        static const int m4_2xlarge_HASH = HashingUtils::HashString("m4.2xlarge");
        static const int m4_4xlarge_HASH = HashingUtils::HashString("m4.4xlarge");
        static const int m4_10xlarge_HASH = HashingUtils::HashString("m4.10xlarge");
        static const int m4_16xlarge_HASH = HashingUtils::HashString("m4.16xlarge");
        static const int m2_xlarge_HASH = HashingUtils::HashString("m2.xlarge");
        static const int m2_2xlarge_HASH = HashingUtils::HashString("m2.2xlarge");
        static const int m2_4xlarge_HASH = HashingUtils::HashString("m2.4xlarge");
        static const int cr1_8xlarge_HASH = HashingUtils::HashString("cr1.8xlarge");
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
        static const int r5_metal_HASH = HashingUtils::HashString("r5.metal");
        static const int r5a_large_HASH = HashingUtils::HashString("r5a.large");
        static const int r5a_xlarge_HASH = HashingUtils::HashString("r5a.xlarge");
        static const int r5a_2xlarge_HASH = HashingUtils::HashString("r5a.2xlarge");
        static const int r5a_4xlarge_HASH = HashingUtils::HashString("r5a.4xlarge");
        static const int r5a_8xlarge_HASH = HashingUtils::HashString("r5a.8xlarge");
        static const int r5a_12xlarge_HASH = HashingUtils::HashString("r5a.12xlarge");
        static const int r5a_16xlarge_HASH = HashingUtils::HashString("r5a.16xlarge");
        static const int r5a_24xlarge_HASH = HashingUtils::HashString("r5a.24xlarge");
        static const int r5d_large_HASH = HashingUtils::HashString("r5d.large");
        static const int r5d_xlarge_HASH = HashingUtils::HashString("r5d.xlarge");
        static const int r5d_2xlarge_HASH = HashingUtils::HashString("r5d.2xlarge");
        static const int r5d_4xlarge_HASH = HashingUtils::HashString("r5d.4xlarge");
        static const int r5d_8xlarge_HASH = HashingUtils::HashString("r5d.8xlarge");
        static const int r5d_12xlarge_HASH = HashingUtils::HashString("r5d.12xlarge");
        static const int r5d_16xlarge_HASH = HashingUtils::HashString("r5d.16xlarge");
        static const int r5d_24xlarge_HASH = HashingUtils::HashString("r5d.24xlarge");
        static const int r5d_metal_HASH = HashingUtils::HashString("r5d.metal");
        static const int r5ad_large_HASH = HashingUtils::HashString("r5ad.large");
        static const int r5ad_xlarge_HASH = HashingUtils::HashString("r5ad.xlarge");
        static const int r5ad_2xlarge_HASH = HashingUtils::HashString("r5ad.2xlarge");
        static const int r5ad_4xlarge_HASH = HashingUtils::HashString("r5ad.4xlarge");
        static const int r5ad_8xlarge_HASH = HashingUtils::HashString("r5ad.8xlarge");
        static const int r5ad_12xlarge_HASH = HashingUtils::HashString("r5ad.12xlarge");
        static const int r5ad_16xlarge_HASH = HashingUtils::HashString("r5ad.16xlarge");
        static const int r5ad_24xlarge_HASH = HashingUtils::HashString("r5ad.24xlarge");
        static const int x1_16xlarge_HASH = HashingUtils::HashString("x1.16xlarge");
        static const int x1_32xlarge_HASH = HashingUtils::HashString("x1.32xlarge");
        static const int x1e_xlarge_HASH = HashingUtils::HashString("x1e.xlarge");
        static const int x1e_2xlarge_HASH = HashingUtils::HashString("x1e.2xlarge");
        static const int x1e_4xlarge_HASH = HashingUtils::HashString("x1e.4xlarge");
        static const int x1e_8xlarge_HASH = HashingUtils::HashString("x1e.8xlarge");
        static const int x1e_16xlarge_HASH = HashingUtils::HashString("x1e.16xlarge");
        static const int x1e_32xlarge_HASH = HashingUtils::HashString("x1e.32xlarge");
        static const int i2_xlarge_HASH = HashingUtils::HashString("i2.xlarge");
        static const int i2_2xlarge_HASH = HashingUtils::HashString("i2.2xlarge");
        static const int i2_4xlarge_HASH = HashingUtils::HashString("i2.4xlarge");
        static const int i2_8xlarge_HASH = HashingUtils::HashString("i2.8xlarge");
        static const int i3_large_HASH = HashingUtils::HashString("i3.large");
        static const int i3_xlarge_HASH = HashingUtils::HashString("i3.xlarge");
        static const int i3_2xlarge_HASH = HashingUtils::HashString("i3.2xlarge");
        static const int i3_4xlarge_HASH = HashingUtils::HashString("i3.4xlarge");
        static const int i3_8xlarge_HASH = HashingUtils::HashString("i3.8xlarge");
        static const int i3_16xlarge_HASH = HashingUtils::HashString("i3.16xlarge");
        static const int i3_metal_HASH = HashingUtils::HashString("i3.metal");
        static const int i3en_large_HASH = HashingUtils::HashString("i3en.large");
        static const int i3en_xlarge_HASH = HashingUtils::HashString("i3en.xlarge");
        static const int i3en_2xlarge_HASH = HashingUtils::HashString("i3en.2xlarge");
        static const int i3en_3xlarge_HASH = HashingUtils::HashString("i3en.3xlarge");
        static const int i3en_6xlarge_HASH = HashingUtils::HashString("i3en.6xlarge");
        static const int i3en_12xlarge_HASH = HashingUtils::HashString("i3en.12xlarge");
        static const int i3en_24xlarge_HASH = HashingUtils::HashString("i3en.24xlarge");
        static const int hi1_4xlarge_HASH = HashingUtils::HashString("hi1.4xlarge");
        static const int hs1_8xlarge_HASH = HashingUtils::HashString("hs1.8xlarge");
        static const int c1_medium_HASH = HashingUtils::HashString("c1.medium");
        static const int c1_xlarge_HASH = HashingUtils::HashString("c1.xlarge");
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
        static const int c5_metal_HASH = HashingUtils::HashString("c5.metal");
        static const int c5d_large_HASH = HashingUtils::HashString("c5d.large");
        static const int c5d_xlarge_HASH = HashingUtils::HashString("c5d.xlarge");
        static const int c5d_2xlarge_HASH = HashingUtils::HashString("c5d.2xlarge");
        static const int c5d_4xlarge_HASH = HashingUtils::HashString("c5d.4xlarge");
        static const int c5d_9xlarge_HASH = HashingUtils::HashString("c5d.9xlarge");
        static const int c5d_18xlarge_HASH = HashingUtils::HashString("c5d.18xlarge");
        static const int c5n_large_HASH = HashingUtils::HashString("c5n.large");
        static const int c5n_xlarge_HASH = HashingUtils::HashString("c5n.xlarge");
        static const int c5n_2xlarge_HASH = HashingUtils::HashString("c5n.2xlarge");
        static const int c5n_4xlarge_HASH = HashingUtils::HashString("c5n.4xlarge");
        static const int c5n_9xlarge_HASH = HashingUtils::HashString("c5n.9xlarge");
        static const int c5n_18xlarge_HASH = HashingUtils::HashString("c5n.18xlarge");
        static const int cc1_4xlarge_HASH = HashingUtils::HashString("cc1.4xlarge");
        static const int cc2_8xlarge_HASH = HashingUtils::HashString("cc2.8xlarge");
        static const int g2_2xlarge_HASH = HashingUtils::HashString("g2.2xlarge");
        static const int g2_8xlarge_HASH = HashingUtils::HashString("g2.8xlarge");
        static const int g3_4xlarge_HASH = HashingUtils::HashString("g3.4xlarge");
        static const int g3_8xlarge_HASH = HashingUtils::HashString("g3.8xlarge");
        static const int g3_16xlarge_HASH = HashingUtils::HashString("g3.16xlarge");
        static const int g3s_xlarge_HASH = HashingUtils::HashString("g3s.xlarge");
        static const int cg1_4xlarge_HASH = HashingUtils::HashString("cg1.4xlarge");
        static const int p2_xlarge_HASH = HashingUtils::HashString("p2.xlarge");
        static const int p2_8xlarge_HASH = HashingUtils::HashString("p2.8xlarge");
        static const int p2_16xlarge_HASH = HashingUtils::HashString("p2.16xlarge");
        static const int p3_2xlarge_HASH = HashingUtils::HashString("p3.2xlarge");
        static const int p3_8xlarge_HASH = HashingUtils::HashString("p3.8xlarge");
        static const int p3_16xlarge_HASH = HashingUtils::HashString("p3.16xlarge");
        static const int p3dn_24xlarge_HASH = HashingUtils::HashString("p3dn.24xlarge");
        static const int d2_xlarge_HASH = HashingUtils::HashString("d2.xlarge");
        static const int d2_2xlarge_HASH = HashingUtils::HashString("d2.2xlarge");
        static const int d2_4xlarge_HASH = HashingUtils::HashString("d2.4xlarge");
        static const int d2_8xlarge_HASH = HashingUtils::HashString("d2.8xlarge");
        static const int f1_2xlarge_HASH = HashingUtils::HashString("f1.2xlarge");
        static const int f1_4xlarge_HASH = HashingUtils::HashString("f1.4xlarge");
        static const int f1_16xlarge_HASH = HashingUtils::HashString("f1.16xlarge");
        static const int m5_large_HASH = HashingUtils::HashString("m5.large");
        static const int m5_xlarge_HASH = HashingUtils::HashString("m5.xlarge");
        static const int m5_2xlarge_HASH = HashingUtils::HashString("m5.2xlarge");
        static const int m5_4xlarge_HASH = HashingUtils::HashString("m5.4xlarge");
        static const int m5_8xlarge_HASH = HashingUtils::HashString("m5.8xlarge");
        static const int m5_12xlarge_HASH = HashingUtils::HashString("m5.12xlarge");
        static const int m5_16xlarge_HASH = HashingUtils::HashString("m5.16xlarge");
        static const int m5_24xlarge_HASH = HashingUtils::HashString("m5.24xlarge");
        static const int m5_metal_HASH = HashingUtils::HashString("m5.metal");
        static const int m5a_large_HASH = HashingUtils::HashString("m5a.large");
        static const int m5a_xlarge_HASH = HashingUtils::HashString("m5a.xlarge");
        static const int m5a_2xlarge_HASH = HashingUtils::HashString("m5a.2xlarge");
        static const int m5a_4xlarge_HASH = HashingUtils::HashString("m5a.4xlarge");
        static const int m5a_8xlarge_HASH = HashingUtils::HashString("m5a.8xlarge");
        static const int m5a_12xlarge_HASH = HashingUtils::HashString("m5a.12xlarge");
        static const int m5a_16xlarge_HASH = HashingUtils::HashString("m5a.16xlarge");
        static const int m5a_24xlarge_HASH = HashingUtils::HashString("m5a.24xlarge");
        static const int m5d_large_HASH = HashingUtils::HashString("m5d.large");
        static const int m5d_xlarge_HASH = HashingUtils::HashString("m5d.xlarge");
        static const int m5d_2xlarge_HASH = HashingUtils::HashString("m5d.2xlarge");
        static const int m5d_4xlarge_HASH = HashingUtils::HashString("m5d.4xlarge");
        static const int m5d_8xlarge_HASH = HashingUtils::HashString("m5d.8xlarge");
        static const int m5d_12xlarge_HASH = HashingUtils::HashString("m5d.12xlarge");
        static const int m5d_16xlarge_HASH = HashingUtils::HashString("m5d.16xlarge");
        static const int m5d_24xlarge_HASH = HashingUtils::HashString("m5d.24xlarge");
        static const int m5d_metal_HASH = HashingUtils::HashString("m5d.metal");
        static const int m5ad_large_HASH = HashingUtils::HashString("m5ad.large");
        static const int m5ad_xlarge_HASH = HashingUtils::HashString("m5ad.xlarge");
        static const int m5ad_2xlarge_HASH = HashingUtils::HashString("m5ad.2xlarge");
        static const int m5ad_4xlarge_HASH = HashingUtils::HashString("m5ad.4xlarge");
        static const int m5ad_8xlarge_HASH = HashingUtils::HashString("m5ad.8xlarge");
        static const int m5ad_12xlarge_HASH = HashingUtils::HashString("m5ad.12xlarge");
        static const int m5ad_16xlarge_HASH = HashingUtils::HashString("m5ad.16xlarge");
        static const int m5ad_24xlarge_HASH = HashingUtils::HashString("m5ad.24xlarge");
        static const int h1_2xlarge_HASH = HashingUtils::HashString("h1.2xlarge");
        static const int h1_4xlarge_HASH = HashingUtils::HashString("h1.4xlarge");
        static const int h1_8xlarge_HASH = HashingUtils::HashString("h1.8xlarge");
        static const int h1_16xlarge_HASH = HashingUtils::HashString("h1.16xlarge");
        static const int z1d_large_HASH = HashingUtils::HashString("z1d.large");
        static const int z1d_xlarge_HASH = HashingUtils::HashString("z1d.xlarge");
        static const int z1d_2xlarge_HASH = HashingUtils::HashString("z1d.2xlarge");
        static const int z1d_3xlarge_HASH = HashingUtils::HashString("z1d.3xlarge");
        static const int z1d_6xlarge_HASH = HashingUtils::HashString("z1d.6xlarge");
        static const int z1d_12xlarge_HASH = HashingUtils::HashString("z1d.12xlarge");
        static const int z1d_metal_HASH = HashingUtils::HashString("z1d.metal");
        static const int u_6tb1_metal_HASH = HashingUtils::HashString("u-6tb1.metal");
        static const int u_9tb1_metal_HASH = HashingUtils::HashString("u-9tb1.metal");
        static const int u_12tb1_metal_HASH = HashingUtils::HashString("u-12tb1.metal");
        static const int a1_medium_HASH = HashingUtils::HashString("a1.medium");
        static const int a1_large_HASH = HashingUtils::HashString("a1.large");
        static const int a1_xlarge_HASH = HashingUtils::HashString("a1.xlarge");
        static const int a1_2xlarge_HASH = HashingUtils::HashString("a1.2xlarge");
        static const int a1_4xlarge_HASH = HashingUtils::HashString("a1.4xlarge");

        /*
        The if-else chains in this file are converted into a jump table by the compiler,
        which allows constant time lookup. The chain has been broken into helper functions
        because MSVC has a maximum of 122 chained if-else blocks.
        */
        static bool GetEnumForNameHelper0(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == t1_micro_HASH)
          {
            enumValue = InstanceType::t1_micro;
            return true;
          }
          else if (hashCode == t2_nano_HASH)
          {
            enumValue = InstanceType::t2_nano;
            return true;
          }
          else if (hashCode == t2_micro_HASH)
          {
            enumValue = InstanceType::t2_micro;
            return true;
          }
          else if (hashCode == t2_small_HASH)
          {
            enumValue = InstanceType::t2_small;
            return true;
          }
          else if (hashCode == t2_medium_HASH)
          {
            enumValue = InstanceType::t2_medium;
            return true;
          }
          else if (hashCode == t2_large_HASH)
          {
            enumValue = InstanceType::t2_large;
            return true;
          }
          else if (hashCode == t2_xlarge_HASH)
          {
            enumValue = InstanceType::t2_xlarge;
            return true;
          }
          else if (hashCode == t2_2xlarge_HASH)
          {
            enumValue = InstanceType::t2_2xlarge;
            return true;
          }
          else if (hashCode == t3_nano_HASH)
          {
            enumValue = InstanceType::t3_nano;
            return true;
          }
          else if (hashCode == t3_micro_HASH)
          {
            enumValue = InstanceType::t3_micro;
            return true;
          }
          else if (hashCode == t3_small_HASH)
          {
            enumValue = InstanceType::t3_small;
            return true;
          }
          else if (hashCode == t3_medium_HASH)
          {
            enumValue = InstanceType::t3_medium;
            return true;
          }
          else if (hashCode == t3_large_HASH)
          {
            enumValue = InstanceType::t3_large;
            return true;
          }
          else if (hashCode == t3_xlarge_HASH)
          {
            enumValue = InstanceType::t3_xlarge;
            return true;
          }
          else if (hashCode == t3_2xlarge_HASH)
          {
            enumValue = InstanceType::t3_2xlarge;
            return true;
          }
          else if (hashCode == t3a_nano_HASH)
          {
            enumValue = InstanceType::t3a_nano;
            return true;
          }
          else if (hashCode == t3a_micro_HASH)
          {
            enumValue = InstanceType::t3a_micro;
            return true;
          }
          else if (hashCode == t3a_small_HASH)
          {
            enumValue = InstanceType::t3a_small;
            return true;
          }
          else if (hashCode == t3a_medium_HASH)
          {
            enumValue = InstanceType::t3a_medium;
            return true;
          }
          else if (hashCode == t3a_large_HASH)
          {
            enumValue = InstanceType::t3a_large;
            return true;
          }
          else if (hashCode == t3a_xlarge_HASH)
          {
            enumValue = InstanceType::t3a_xlarge;
            return true;
          }
          else if (hashCode == t3a_2xlarge_HASH)
          {
            enumValue = InstanceType::t3a_2xlarge;
            return true;
          }
          else if (hashCode == m1_small_HASH)
          {
            enumValue = InstanceType::m1_small;
            return true;
          }
          else if (hashCode == m1_medium_HASH)
          {
            enumValue = InstanceType::m1_medium;
            return true;
          }
          else if (hashCode == m1_large_HASH)
          {
            enumValue = InstanceType::m1_large;
            return true;
          }
          else if (hashCode == m1_xlarge_HASH)
          {
            enumValue = InstanceType::m1_xlarge;
            return true;
          }
          else if (hashCode == m3_medium_HASH)
          {
            enumValue = InstanceType::m3_medium;
            return true;
          }
          else if (hashCode == m3_large_HASH)
          {
            enumValue = InstanceType::m3_large;
            return true;
          }
          else if (hashCode == m3_xlarge_HASH)
          {
            enumValue = InstanceType::m3_xlarge;
            return true;
          }
          else if (hashCode == m3_2xlarge_HASH)
          {
            enumValue = InstanceType::m3_2xlarge;
            return true;
          }
          else if (hashCode == m4_large_HASH)
          {
            enumValue = InstanceType::m4_large;
            return true;
          }
          else if (hashCode == m4_xlarge_HASH)
          {
            enumValue = InstanceType::m4_xlarge;
            return true;
          }
          else if (hashCode == m4_2xlarge_HASH)
          {
            enumValue = InstanceType::m4_2xlarge;
            return true;
          }
          else if (hashCode == m4_4xlarge_HASH)
          {
            enumValue = InstanceType::m4_4xlarge;
            return true;
          }
          else if (hashCode == m4_10xlarge_HASH)
          {
            enumValue = InstanceType::m4_10xlarge;
            return true;
          }
          else if (hashCode == m4_16xlarge_HASH)
          {
            enumValue = InstanceType::m4_16xlarge;
            return true;
          }
          else if (hashCode == m2_xlarge_HASH)
          {
            enumValue = InstanceType::m2_xlarge;
            return true;
          }
          else if (hashCode == m2_2xlarge_HASH)
          {
            enumValue = InstanceType::m2_2xlarge;
            return true;
          }
          else if (hashCode == m2_4xlarge_HASH)
          {
            enumValue = InstanceType::m2_4xlarge;
            return true;
          }
          else if (hashCode == cr1_8xlarge_HASH)
          {
            enumValue = InstanceType::cr1_8xlarge;
            return true;
          }
          else if (hashCode == r3_large_HASH)
          {
            enumValue = InstanceType::r3_large;
            return true;
          }
          else if (hashCode == r3_xlarge_HASH)
          {
            enumValue = InstanceType::r3_xlarge;
            return true;
          }
          else if (hashCode == r3_2xlarge_HASH)
          {
            enumValue = InstanceType::r3_2xlarge;
            return true;
          }
          else if (hashCode == r3_4xlarge_HASH)
          {
            enumValue = InstanceType::r3_4xlarge;
            return true;
          }
          else if (hashCode == r3_8xlarge_HASH)
          {
            enumValue = InstanceType::r3_8xlarge;
            return true;
          }
          else if (hashCode == r4_large_HASH)
          {
            enumValue = InstanceType::r4_large;
            return true;
          }
          else if (hashCode == r4_xlarge_HASH)
          {
            enumValue = InstanceType::r4_xlarge;
            return true;
          }
          else if (hashCode == r4_2xlarge_HASH)
          {
            enumValue = InstanceType::r4_2xlarge;
            return true;
          }
          else if (hashCode == r4_4xlarge_HASH)
          {
            enumValue = InstanceType::r4_4xlarge;
            return true;
          }
          else if (hashCode == r4_8xlarge_HASH)
          {
            enumValue = InstanceType::r4_8xlarge;
            return true;
          }
          else if (hashCode == r4_16xlarge_HASH)
          {
            enumValue = InstanceType::r4_16xlarge;
            return true;
          }
          else if (hashCode == r5_large_HASH)
          {
            enumValue = InstanceType::r5_large;
            return true;
          }
          else if (hashCode == r5_xlarge_HASH)
          {
            enumValue = InstanceType::r5_xlarge;
            return true;
          }
          else if (hashCode == r5_2xlarge_HASH)
          {
            enumValue = InstanceType::r5_2xlarge;
            return true;
          }
          else if (hashCode == r5_4xlarge_HASH)
          {
            enumValue = InstanceType::r5_4xlarge;
            return true;
          }
          else if (hashCode == r5_8xlarge_HASH)
          {
            enumValue = InstanceType::r5_8xlarge;
            return true;
          }
          else if (hashCode == r5_12xlarge_HASH)
          {
            enumValue = InstanceType::r5_12xlarge;
            return true;
          }
          else if (hashCode == r5_16xlarge_HASH)
          {
            enumValue = InstanceType::r5_16xlarge;
            return true;
          }
          else if (hashCode == r5_24xlarge_HASH)
          {
            enumValue = InstanceType::r5_24xlarge;
            return true;
          }
          else if (hashCode == r5_metal_HASH)
          {
            enumValue = InstanceType::r5_metal;
            return true;
          }
          else if (hashCode == r5a_large_HASH)
          {
            enumValue = InstanceType::r5a_large;
            return true;
          }
          else if (hashCode == r5a_xlarge_HASH)
          {
            enumValue = InstanceType::r5a_xlarge;
            return true;
          }
          else if (hashCode == r5a_2xlarge_HASH)
          {
            enumValue = InstanceType::r5a_2xlarge;
            return true;
          }
          else if (hashCode == r5a_4xlarge_HASH)
          {
            enumValue = InstanceType::r5a_4xlarge;
            return true;
          }
          else if (hashCode == r5a_8xlarge_HASH)
          {
            enumValue = InstanceType::r5a_8xlarge;
            return true;
          }
          else if (hashCode == r5a_12xlarge_HASH)
          {
            enumValue = InstanceType::r5a_12xlarge;
            return true;
          }
          else if (hashCode == r5a_16xlarge_HASH)
          {
            enumValue = InstanceType::r5a_16xlarge;
            return true;
          }
          else if (hashCode == r5a_24xlarge_HASH)
          {
            enumValue = InstanceType::r5a_24xlarge;
            return true;
          }
          else if (hashCode == r5d_large_HASH)
          {
            enumValue = InstanceType::r5d_large;
            return true;
          }
          else if (hashCode == r5d_xlarge_HASH)
          {
            enumValue = InstanceType::r5d_xlarge;
            return true;
          }
          else if (hashCode == r5d_2xlarge_HASH)
          {
            enumValue = InstanceType::r5d_2xlarge;
            return true;
          }
          else if (hashCode == r5d_4xlarge_HASH)
          {
            enumValue = InstanceType::r5d_4xlarge;
            return true;
          }
          else if (hashCode == r5d_8xlarge_HASH)
          {
            enumValue = InstanceType::r5d_8xlarge;
            return true;
          }
          else if (hashCode == r5d_12xlarge_HASH)
          {
            enumValue = InstanceType::r5d_12xlarge;
            return true;
          }
          else if (hashCode == r5d_16xlarge_HASH)
          {
            enumValue = InstanceType::r5d_16xlarge;
            return true;
          }
          else if (hashCode == r5d_24xlarge_HASH)
          {
            enumValue = InstanceType::r5d_24xlarge;
            return true;
          }
          else if (hashCode == r5d_metal_HASH)
          {
            enumValue = InstanceType::r5d_metal;
            return true;
          }
          else if (hashCode == r5ad_large_HASH)
          {
            enumValue = InstanceType::r5ad_large;
            return true;
          }
          else if (hashCode == r5ad_xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_xlarge;
            return true;
          }
          else if (hashCode == r5ad_2xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_2xlarge;
            return true;
          }
          else if (hashCode == r5ad_4xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_4xlarge;
            return true;
          }
          else if (hashCode == r5ad_8xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_8xlarge;
            return true;
          }
          else if (hashCode == r5ad_12xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_12xlarge;
            return true;
          }
          else if (hashCode == r5ad_16xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_16xlarge;
            return true;
          }
          else if (hashCode == r5ad_24xlarge_HASH)
          {
            enumValue = InstanceType::r5ad_24xlarge;
            return true;
          }
          else if (hashCode == x1_16xlarge_HASH)
          {
            enumValue = InstanceType::x1_16xlarge;
            return true;
          }
          else if (hashCode == x1_32xlarge_HASH)
          {
            enumValue = InstanceType::x1_32xlarge;
            return true;
          }
          else if (hashCode == x1e_xlarge_HASH)
          {
            enumValue = InstanceType::x1e_xlarge;
            return true;
          }
          else if (hashCode == x1e_2xlarge_HASH)
          {
            enumValue = InstanceType::x1e_2xlarge;
            return true;
          }
          else if (hashCode == x1e_4xlarge_HASH)
          {
            enumValue = InstanceType::x1e_4xlarge;
            return true;
          }
          else if (hashCode == x1e_8xlarge_HASH)
          {
            enumValue = InstanceType::x1e_8xlarge;
            return true;
          }
          else if (hashCode == x1e_16xlarge_HASH)
          {
            enumValue = InstanceType::x1e_16xlarge;
            return true;
          }
          else if (hashCode == x1e_32xlarge_HASH)
          {
            enumValue = InstanceType::x1e_32xlarge;
            return true;
          }
          else if (hashCode == i2_xlarge_HASH)
          {
            enumValue = InstanceType::i2_xlarge;
            return true;
          }
          else if (hashCode == i2_2xlarge_HASH)
          {
            enumValue = InstanceType::i2_2xlarge;
            return true;
          }
          else if (hashCode == i2_4xlarge_HASH)
          {
            enumValue = InstanceType::i2_4xlarge;
            return true;
          }
          else if (hashCode == i2_8xlarge_HASH)
          {
            enumValue = InstanceType::i2_8xlarge;
            return true;
          }
          else if (hashCode == i3_large_HASH)
          {
            enumValue = InstanceType::i3_large;
            return true;
          }
          else if (hashCode == i3_xlarge_HASH)
          {
            enumValue = InstanceType::i3_xlarge;
            return true;
          }
          else if (hashCode == i3_2xlarge_HASH)
          {
            enumValue = InstanceType::i3_2xlarge;
            return true;
          }
          else if (hashCode == i3_4xlarge_HASH)
          {
            enumValue = InstanceType::i3_4xlarge;
            return true;
          }
          else if (hashCode == i3_8xlarge_HASH)
          {
            enumValue = InstanceType::i3_8xlarge;
            return true;
          }
          else if (hashCode == i3_16xlarge_HASH)
          {
            enumValue = InstanceType::i3_16xlarge;
            return true;
          }
          else if (hashCode == i3_metal_HASH)
          {
            enumValue = InstanceType::i3_metal;
            return true;
          }
          else if (hashCode == i3en_large_HASH)
          {
            enumValue = InstanceType::i3en_large;
            return true;
          }
          else if (hashCode == i3en_xlarge_HASH)
          {
            enumValue = InstanceType::i3en_xlarge;
            return true;
          }
          else if (hashCode == i3en_2xlarge_HASH)
          {
            enumValue = InstanceType::i3en_2xlarge;
            return true;
          }
          else if (hashCode == i3en_3xlarge_HASH)
          {
            enumValue = InstanceType::i3en_3xlarge;
            return true;
          }
          else if (hashCode == i3en_6xlarge_HASH)
          {
            enumValue = InstanceType::i3en_6xlarge;
            return true;
          }
          else if (hashCode == i3en_12xlarge_HASH)
          {
            enumValue = InstanceType::i3en_12xlarge;
            return true;
          }
          else if (hashCode == i3en_24xlarge_HASH)
          {
            enumValue = InstanceType::i3en_24xlarge;
            return true;
          }
          else if (hashCode == hi1_4xlarge_HASH)
          {
            enumValue = InstanceType::hi1_4xlarge;
            return true;
          }
          else if (hashCode == hs1_8xlarge_HASH)
          {
            enumValue = InstanceType::hs1_8xlarge;
            return true;
          }
          else if (hashCode == c1_medium_HASH)
          {
            enumValue = InstanceType::c1_medium;
            return true;
          }
          else if (hashCode == c1_xlarge_HASH)
          {
            enumValue = InstanceType::c1_xlarge;
            return true;
          }
          else if (hashCode == c3_large_HASH)
          {
            enumValue = InstanceType::c3_large;
            return true;
          }
          else if (hashCode == c3_xlarge_HASH)
          {
            enumValue = InstanceType::c3_xlarge;
            return true;
          }
          else if (hashCode == c3_2xlarge_HASH)
          {
            enumValue = InstanceType::c3_2xlarge;
            return true;
          }
          else if (hashCode == c3_4xlarge_HASH)
          {
            enumValue = InstanceType::c3_4xlarge;
            return true;
          }
          else if (hashCode == c3_8xlarge_HASH)
          {
            enumValue = InstanceType::c3_8xlarge;
            return true;
          }
          else if (hashCode == c4_large_HASH)
          {
            enumValue = InstanceType::c4_large;
            return true;
          }
          else if (hashCode == c4_xlarge_HASH)
          {
            enumValue = InstanceType::c4_xlarge;
            return true;
          }
          return false;
        }
        static bool GetEnumForNameHelper1(int hashCode, InstanceType& enumValue)
        {
          if (hashCode == c4_2xlarge_HASH)
          {
            enumValue = InstanceType::c4_2xlarge;
            return true;
          }
          else if (hashCode == c4_4xlarge_HASH)
          {
            enumValue = InstanceType::c4_4xlarge;
            return true;
          }
          else if (hashCode == c4_8xlarge_HASH)
          {
            enumValue = InstanceType::c4_8xlarge;
            return true;
          }
          else if (hashCode == c5_large_HASH)
          {
            enumValue = InstanceType::c5_large;
            return true;
          }
          else if (hashCode == c5_xlarge_HASH)
          {
            enumValue = InstanceType::c5_xlarge;
            return true;
          }
          else if (hashCode == c5_2xlarge_HASH)
          {
            enumValue = InstanceType::c5_2xlarge;
            return true;
          }
          else if (hashCode == c5_4xlarge_HASH)
          {
            enumValue = InstanceType::c5_4xlarge;
            return true;
          }
          else if (hashCode == c5_9xlarge_HASH)
          {
            enumValue = InstanceType::c5_9xlarge;
            return true;
          }
          else if (hashCode == c5_12xlarge_HASH)
          {
            enumValue = InstanceType::c5_12xlarge;
            return true;
          }
          else if (hashCode == c5_18xlarge_HASH)
          {
            enumValue = InstanceType::c5_18xlarge;
            return true;
          }
          else if (hashCode == c5_24xlarge_HASH)
          {
            enumValue = InstanceType::c5_24xlarge;
            return true;
          }
          else if (hashCode == c5_metal_HASH)
          {
            enumValue = InstanceType::c5_metal;
            return true;
          }
          else if (hashCode == c5d_large_HASH)
          {
            enumValue = InstanceType::c5d_large;
            return true;
          }
          else if (hashCode == c5d_xlarge_HASH)
          {
            enumValue = InstanceType::c5d_xlarge;
            return true;
          }
          else if (hashCode == c5d_2xlarge_HASH)
          {
            enumValue = InstanceType::c5d_2xlarge;
            return true;
          }
          else if (hashCode == c5d_4xlarge_HASH)
          {
            enumValue = InstanceType::c5d_4xlarge;
            return true;
          }
          else if (hashCode == c5d_9xlarge_HASH)
          {
            enumValue = InstanceType::c5d_9xlarge;
            return true;
          }
          else if (hashCode == c5d_18xlarge_HASH)
          {
            enumValue = InstanceType::c5d_18xlarge;
            return true;
          }
          else if (hashCode == c5n_large_HASH)
          {
            enumValue = InstanceType::c5n_large;
            return true;
          }
          else if (hashCode == c5n_xlarge_HASH)
          {
            enumValue = InstanceType::c5n_xlarge;
            return true;
          }
          else if (hashCode == c5n_2xlarge_HASH)
          {
            enumValue = InstanceType::c5n_2xlarge;
            return true;
          }
          else if (hashCode == c5n_4xlarge_HASH)
          {
            enumValue = InstanceType::c5n_4xlarge;
            return true;
          }
          else if (hashCode == c5n_9xlarge_HASH)
          {
            enumValue = InstanceType::c5n_9xlarge;
            return true;
          }
          else if (hashCode == c5n_18xlarge_HASH)
          {
            enumValue = InstanceType::c5n_18xlarge;
            return true;
          }
          else if (hashCode == cc1_4xlarge_HASH)
          {
            enumValue = InstanceType::cc1_4xlarge;
            return true;
          }
          else if (hashCode == cc2_8xlarge_HASH)
          {
            enumValue = InstanceType::cc2_8xlarge;
            return true;
          }
          else if (hashCode == g2_2xlarge_HASH)
          {
            enumValue = InstanceType::g2_2xlarge;
            return true;
          }
          else if (hashCode == g2_8xlarge_HASH)
          {
            enumValue = InstanceType::g2_8xlarge;
            return true;
          }
          else if (hashCode == g3_4xlarge_HASH)
          {
            enumValue = InstanceType::g3_4xlarge;
            return true;
          }
          else if (hashCode == g3_8xlarge_HASH)
          {
            enumValue = InstanceType::g3_8xlarge;
            return true;
          }
          else if (hashCode == g3_16xlarge_HASH)
          {
            enumValue = InstanceType::g3_16xlarge;
            return true;
          }
          else if (hashCode == g3s_xlarge_HASH)
          {
            enumValue = InstanceType::g3s_xlarge;
            return true;
          }
          else if (hashCode == cg1_4xlarge_HASH)
          {
            enumValue = InstanceType::cg1_4xlarge;
            return true;
          }
          else if (hashCode == p2_xlarge_HASH)
          {
            enumValue = InstanceType::p2_xlarge;
            return true;
          }
          else if (hashCode == p2_8xlarge_HASH)
          {
            enumValue = InstanceType::p2_8xlarge;
            return true;
          }
          else if (hashCode == p2_16xlarge_HASH)
          {
            enumValue = InstanceType::p2_16xlarge;
            return true;
          }
          else if (hashCode == p3_2xlarge_HASH)
          {
            enumValue = InstanceType::p3_2xlarge;
            return true;
          }
          else if (hashCode == p3_8xlarge_HASH)
          {
            enumValue = InstanceType::p3_8xlarge;
            return true;
          }
          else if (hashCode == p3_16xlarge_HASH)
          {
            enumValue = InstanceType::p3_16xlarge;
            return true;
          }
          else if (hashCode == p3dn_24xlarge_HASH)
          {
            enumValue = InstanceType::p3dn_24xlarge;
            return true;
          }
          else if (hashCode == d2_xlarge_HASH)
          {
            enumValue = InstanceType::d2_xlarge;
            return true;
          }
          else if (hashCode == d2_2xlarge_HASH)
          {
            enumValue = InstanceType::d2_2xlarge;
            return true;
          }
          else if (hashCode == d2_4xlarge_HASH)
          {
            enumValue = InstanceType::d2_4xlarge;
            return true;
          }
          else if (hashCode == d2_8xlarge_HASH)
          {
            enumValue = InstanceType::d2_8xlarge;
            return true;
          }
          else if (hashCode == f1_2xlarge_HASH)
          {
            enumValue = InstanceType::f1_2xlarge;
            return true;
          }
          else if (hashCode == f1_4xlarge_HASH)
          {
            enumValue = InstanceType::f1_4xlarge;
            return true;
          }
          else if (hashCode == f1_16xlarge_HASH)
          {
            enumValue = InstanceType::f1_16xlarge;
            return true;
          }
          else if (hashCode == m5_large_HASH)
          {
            enumValue = InstanceType::m5_large;
            return true;
          }
          else if (hashCode == m5_xlarge_HASH)
          {
            enumValue = InstanceType::m5_xlarge;
            return true;
          }
          else if (hashCode == m5_2xlarge_HASH)
          {
            enumValue = InstanceType::m5_2xlarge;
            return true;
          }
          else if (hashCode == m5_4xlarge_HASH)
          {
            enumValue = InstanceType::m5_4xlarge;
            return true;
          }
          else if (hashCode == m5_8xlarge_HASH)
          {
            enumValue = InstanceType::m5_8xlarge;
            return true;
          }
          else if (hashCode == m5_12xlarge_HASH)
          {
            enumValue = InstanceType::m5_12xlarge;
            return true;
          }
          else if (hashCode == m5_16xlarge_HASH)
          {
            enumValue = InstanceType::m5_16xlarge;
            return true;
          }
          else if (hashCode == m5_24xlarge_HASH)
          {
            enumValue = InstanceType::m5_24xlarge;
            return true;
          }
          else if (hashCode == m5_metal_HASH)
          {
            enumValue = InstanceType::m5_metal;
            return true;
          }
          else if (hashCode == m5a_large_HASH)
          {
            enumValue = InstanceType::m5a_large;
            return true;
          }
          else if (hashCode == m5a_xlarge_HASH)
          {
            enumValue = InstanceType::m5a_xlarge;
            return true;
          }
          else if (hashCode == m5a_2xlarge_HASH)
          {
            enumValue = InstanceType::m5a_2xlarge;
            return true;
          }
          else if (hashCode == m5a_4xlarge_HASH)
          {
            enumValue = InstanceType::m5a_4xlarge;
            return true;
          }
          else if (hashCode == m5a_8xlarge_HASH)
          {
            enumValue = InstanceType::m5a_8xlarge;
            return true;
          }
          else if (hashCode == m5a_12xlarge_HASH)
          {
            enumValue = InstanceType::m5a_12xlarge;
            return true;
          }
          else if (hashCode == m5a_16xlarge_HASH)
          {
            enumValue = InstanceType::m5a_16xlarge;
            return true;
          }
          else if (hashCode == m5a_24xlarge_HASH)
          {
            enumValue = InstanceType::m5a_24xlarge;
            return true;
          }
          else if (hashCode == m5d_large_HASH)
          {
            enumValue = InstanceType::m5d_large;
            return true;
          }
          else if (hashCode == m5d_xlarge_HASH)
          {
            enumValue = InstanceType::m5d_xlarge;
            return true;
          }
          else if (hashCode == m5d_2xlarge_HASH)
          {
            enumValue = InstanceType::m5d_2xlarge;
            return true;
          }
          else if (hashCode == m5d_4xlarge_HASH)
          {
            enumValue = InstanceType::m5d_4xlarge;
            return true;
          }
          else if (hashCode == m5d_8xlarge_HASH)
          {
            enumValue = InstanceType::m5d_8xlarge;
            return true;
          }
          else if (hashCode == m5d_12xlarge_HASH)
          {
            enumValue = InstanceType::m5d_12xlarge;
            return true;
          }
          else if (hashCode == m5d_16xlarge_HASH)
          {
            enumValue = InstanceType::m5d_16xlarge;
            return true;
          }
          else if (hashCode == m5d_24xlarge_HASH)
          {
            enumValue = InstanceType::m5d_24xlarge;
            return true;
          }
          else if (hashCode == m5d_metal_HASH)
          {
            enumValue = InstanceType::m5d_metal;
            return true;
          }
          else if (hashCode == m5ad_large_HASH)
          {
            enumValue = InstanceType::m5ad_large;
            return true;
          }
          else if (hashCode == m5ad_xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_xlarge;
            return true;
          }
          else if (hashCode == m5ad_2xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_2xlarge;
            return true;
          }
          else if (hashCode == m5ad_4xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_4xlarge;
            return true;
          }
          else if (hashCode == m5ad_8xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_8xlarge;
            return true;
          }
          else if (hashCode == m5ad_12xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_12xlarge;
            return true;
          }
          else if (hashCode == m5ad_16xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_16xlarge;
            return true;
          }
          else if (hashCode == m5ad_24xlarge_HASH)
          {
            enumValue = InstanceType::m5ad_24xlarge;
            return true;
          }
          else if (hashCode == h1_2xlarge_HASH)
          {
            enumValue = InstanceType::h1_2xlarge;
            return true;
          }
          else if (hashCode == h1_4xlarge_HASH)
          {
            enumValue = InstanceType::h1_4xlarge;
            return true;
          }
          else if (hashCode == h1_8xlarge_HASH)
          {
            enumValue = InstanceType::h1_8xlarge;
            return true;
          }
          else if (hashCode == h1_16xlarge_HASH)
          {
            enumValue = InstanceType::h1_16xlarge;
            return true;
          }
          else if (hashCode == z1d_large_HASH)
          {
            enumValue = InstanceType::z1d_large;
            return true;
          }
          else if (hashCode == z1d_xlarge_HASH)
          {
            enumValue = InstanceType::z1d_xlarge;
            return true;
          }
          else if (hashCode == z1d_2xlarge_HASH)
          {
            enumValue = InstanceType::z1d_2xlarge;
            return true;
          }
          else if (hashCode == z1d_3xlarge_HASH)
          {
            enumValue = InstanceType::z1d_3xlarge;
            return true;
          }
          else if (hashCode == z1d_6xlarge_HASH)
          {
            enumValue = InstanceType::z1d_6xlarge;
            return true;
          }
          else if (hashCode == z1d_12xlarge_HASH)
          {
            enumValue = InstanceType::z1d_12xlarge;
            return true;
          }
          else if (hashCode == z1d_metal_HASH)
          {
            enumValue = InstanceType::z1d_metal;
            return true;
          }
          else if (hashCode == u_6tb1_metal_HASH)
          {
            enumValue = InstanceType::u_6tb1_metal;
            return true;
          }
          else if (hashCode == u_9tb1_metal_HASH)
          {
            enumValue = InstanceType::u_9tb1_metal;
            return true;
          }
          else if (hashCode == u_12tb1_metal_HASH)
          {
            enumValue = InstanceType::u_12tb1_metal;
            return true;
          }
          else if (hashCode == a1_medium_HASH)
          {
            enumValue = InstanceType::a1_medium;
            return true;
          }
          else if (hashCode == a1_large_HASH)
          {
            enumValue = InstanceType::a1_large;
            return true;
          }
          else if (hashCode == a1_xlarge_HASH)
          {
            enumValue = InstanceType::a1_xlarge;
            return true;
          }
          else if (hashCode == a1_2xlarge_HASH)
          {
            enumValue = InstanceType::a1_2xlarge;
            return true;
          }
          else if (hashCode == a1_4xlarge_HASH)
          {
            enumValue = InstanceType::a1_4xlarge;
            return true;
          }
          return false;
        }

        static bool GetNameForEnumHelper0(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::t1_micro:
            value = "t1.micro";
            return true;
          case InstanceType::t2_nano:
            value = "t2.nano";
            return true;
          case InstanceType::t2_micro:
            value = "t2.micro";
            return true;
          case InstanceType::t2_small:
            value = "t2.small";
            return true;
          case InstanceType::t2_medium:
            value = "t2.medium";
            return true;
          case InstanceType::t2_large:
            value = "t2.large";
            return true;
          case InstanceType::t2_xlarge:
            value = "t2.xlarge";
            return true;
          case InstanceType::t2_2xlarge:
            value = "t2.2xlarge";
            return true;
          case InstanceType::t3_nano:
            value = "t3.nano";
            return true;
          case InstanceType::t3_micro:
            value = "t3.micro";
            return true;
          case InstanceType::t3_small:
            value = "t3.small";
            return true;
          case InstanceType::t3_medium:
            value = "t3.medium";
            return true;
          case InstanceType::t3_large:
            value = "t3.large";
            return true;
          case InstanceType::t3_xlarge:
            value = "t3.xlarge";
            return true;
          case InstanceType::t3_2xlarge:
            value = "t3.2xlarge";
            return true;
          case InstanceType::t3a_nano:
            value = "t3a.nano";
            return true;
          case InstanceType::t3a_micro:
            value = "t3a.micro";
            return true;
          case InstanceType::t3a_small:
            value = "t3a.small";
            return true;
          case InstanceType::t3a_medium:
            value = "t3a.medium";
            return true;
          case InstanceType::t3a_large:
            value = "t3a.large";
            return true;
          case InstanceType::t3a_xlarge:
            value = "t3a.xlarge";
            return true;
          case InstanceType::t3a_2xlarge:
            value = "t3a.2xlarge";
            return true;
          case InstanceType::m1_small:
            value = "m1.small";
            return true;
          case InstanceType::m1_medium:
            value = "m1.medium";
            return true;
          case InstanceType::m1_large:
            value = "m1.large";
            return true;
          case InstanceType::m1_xlarge:
            value = "m1.xlarge";
            return true;
          case InstanceType::m3_medium:
            value = "m3.medium";
            return true;
          case InstanceType::m3_large:
            value = "m3.large";
            return true;
          case InstanceType::m3_xlarge:
            value = "m3.xlarge";
            return true;
          case InstanceType::m3_2xlarge:
            value = "m3.2xlarge";
            return true;
          case InstanceType::m4_large:
            value = "m4.large";
            return true;
          case InstanceType::m4_xlarge:
            value = "m4.xlarge";
            return true;
          case InstanceType::m4_2xlarge:
            value = "m4.2xlarge";
            return true;
          case InstanceType::m4_4xlarge:
            value = "m4.4xlarge";
            return true;
          case InstanceType::m4_10xlarge:
            value = "m4.10xlarge";
            return true;
          case InstanceType::m4_16xlarge:
            value = "m4.16xlarge";
            return true;
          case InstanceType::m2_xlarge:
            value = "m2.xlarge";
            return true;
          case InstanceType::m2_2xlarge:
            value = "m2.2xlarge";
            return true;
          case InstanceType::m2_4xlarge:
            value = "m2.4xlarge";
            return true;
          case InstanceType::cr1_8xlarge:
            value = "cr1.8xlarge";
            return true;
          case InstanceType::r3_large:
            value = "r3.large";
            return true;
          case InstanceType::r3_xlarge:
            value = "r3.xlarge";
            return true;
          case InstanceType::r3_2xlarge:
            value = "r3.2xlarge";
            return true;
          case InstanceType::r3_4xlarge:
            value = "r3.4xlarge";
            return true;
          case InstanceType::r3_8xlarge:
            value = "r3.8xlarge";
            return true;
          case InstanceType::r4_large:
            value = "r4.large";
            return true;
          case InstanceType::r4_xlarge:
            value = "r4.xlarge";
            return true;
          case InstanceType::r4_2xlarge:
            value = "r4.2xlarge";
            return true;
          case InstanceType::r4_4xlarge:
            value = "r4.4xlarge";
            return true;
          case InstanceType::r4_8xlarge:
            value = "r4.8xlarge";
            return true;
          case InstanceType::r4_16xlarge:
            value = "r4.16xlarge";
            return true;
          case InstanceType::r5_large:
            value = "r5.large";
            return true;
          case InstanceType::r5_xlarge:
            value = "r5.xlarge";
            return true;
          case InstanceType::r5_2xlarge:
            value = "r5.2xlarge";
            return true;
          case InstanceType::r5_4xlarge:
            value = "r5.4xlarge";
            return true;
          case InstanceType::r5_8xlarge:
            value = "r5.8xlarge";
            return true;
          case InstanceType::r5_12xlarge:
            value = "r5.12xlarge";
            return true;
          case InstanceType::r5_16xlarge:
            value = "r5.16xlarge";
            return true;
          case InstanceType::r5_24xlarge:
            value = "r5.24xlarge";
            return true;
          case InstanceType::r5_metal:
            value = "r5.metal";
            return true;
          case InstanceType::r5a_large:
            value = "r5a.large";
            return true;
          case InstanceType::r5a_xlarge:
            value = "r5a.xlarge";
            return true;
          case InstanceType::r5a_2xlarge:
            value = "r5a.2xlarge";
            return true;
          case InstanceType::r5a_4xlarge:
            value = "r5a.4xlarge";
            return true;
          case InstanceType::r5a_8xlarge:
            value = "r5a.8xlarge";
            return true;
          case InstanceType::r5a_12xlarge:
            value = "r5a.12xlarge";
            return true;
          case InstanceType::r5a_16xlarge:
            value = "r5a.16xlarge";
            return true;
          case InstanceType::r5a_24xlarge:
            value = "r5a.24xlarge";
            return true;
          case InstanceType::r5d_large:
            value = "r5d.large";
            return true;
          case InstanceType::r5d_xlarge:
            value = "r5d.xlarge";
            return true;
          case InstanceType::r5d_2xlarge:
            value = "r5d.2xlarge";
            return true;
          case InstanceType::r5d_4xlarge:
            value = "r5d.4xlarge";
            return true;
          case InstanceType::r5d_8xlarge:
            value = "r5d.8xlarge";
            return true;
          case InstanceType::r5d_12xlarge:
            value = "r5d.12xlarge";
            return true;
          case InstanceType::r5d_16xlarge:
            value = "r5d.16xlarge";
            return true;
          case InstanceType::r5d_24xlarge:
            value = "r5d.24xlarge";
            return true;
          case InstanceType::r5d_metal:
            value = "r5d.metal";
            return true;
          case InstanceType::r5ad_large:
            value = "r5ad.large";
            return true;
          case InstanceType::r5ad_xlarge:
            value = "r5ad.xlarge";
            return true;
          case InstanceType::r5ad_2xlarge:
            value = "r5ad.2xlarge";
            return true;
          case InstanceType::r5ad_4xlarge:
            value = "r5ad.4xlarge";
            return true;
          case InstanceType::r5ad_8xlarge:
            value = "r5ad.8xlarge";
            return true;
          case InstanceType::r5ad_12xlarge:
            value = "r5ad.12xlarge";
            return true;
          case InstanceType::r5ad_16xlarge:
            value = "r5ad.16xlarge";
            return true;
          case InstanceType::r5ad_24xlarge:
            value = "r5ad.24xlarge";
            return true;
          case InstanceType::x1_16xlarge:
            value = "x1.16xlarge";
            return true;
          case InstanceType::x1_32xlarge:
            value = "x1.32xlarge";
            return true;
          case InstanceType::x1e_xlarge:
            value = "x1e.xlarge";
            return true;
          case InstanceType::x1e_2xlarge:
            value = "x1e.2xlarge";
            return true;
          case InstanceType::x1e_4xlarge:
            value = "x1e.4xlarge";
            return true;
          case InstanceType::x1e_8xlarge:
            value = "x1e.8xlarge";
            return true;
          case InstanceType::x1e_16xlarge:
            value = "x1e.16xlarge";
            return true;
          case InstanceType::x1e_32xlarge:
            value = "x1e.32xlarge";
            return true;
          case InstanceType::i2_xlarge:
            value = "i2.xlarge";
            return true;
          case InstanceType::i2_2xlarge:
            value = "i2.2xlarge";
            return true;
          case InstanceType::i2_4xlarge:
            value = "i2.4xlarge";
            return true;
          case InstanceType::i2_8xlarge:
            value = "i2.8xlarge";
            return true;
          case InstanceType::i3_large:
            value = "i3.large";
            return true;
          case InstanceType::i3_xlarge:
            value = "i3.xlarge";
            return true;
          case InstanceType::i3_2xlarge:
            value = "i3.2xlarge";
            return true;
          case InstanceType::i3_4xlarge:
            value = "i3.4xlarge";
            return true;
          case InstanceType::i3_8xlarge:
            value = "i3.8xlarge";
            return true;
          case InstanceType::i3_16xlarge:
            value = "i3.16xlarge";
            return true;
          case InstanceType::i3_metal:
            value = "i3.metal";
            return true;
          case InstanceType::i3en_large:
            value = "i3en.large";
            return true;
          case InstanceType::i3en_xlarge:
            value = "i3en.xlarge";
            return true;
          case InstanceType::i3en_2xlarge:
            value = "i3en.2xlarge";
            return true;
          case InstanceType::i3en_3xlarge:
            value = "i3en.3xlarge";
            return true;
          case InstanceType::i3en_6xlarge:
            value = "i3en.6xlarge";
            return true;
          case InstanceType::i3en_12xlarge:
            value = "i3en.12xlarge";
            return true;
          case InstanceType::i3en_24xlarge:
            value = "i3en.24xlarge";
            return true;
          case InstanceType::hi1_4xlarge:
            value = "hi1.4xlarge";
            return true;
          case InstanceType::hs1_8xlarge:
            value = "hs1.8xlarge";
            return true;
          case InstanceType::c1_medium:
            value = "c1.medium";
            return true;
          case InstanceType::c1_xlarge:
            value = "c1.xlarge";
            return true;
          case InstanceType::c3_large:
            value = "c3.large";
            return true;
          case InstanceType::c3_xlarge:
            value = "c3.xlarge";
            return true;
          case InstanceType::c3_2xlarge:
            value = "c3.2xlarge";
            return true;
          case InstanceType::c3_4xlarge:
            value = "c3.4xlarge";
            return true;
          case InstanceType::c3_8xlarge:
            value = "c3.8xlarge";
            return true;
          case InstanceType::c4_large:
            value = "c4.large";
            return true;
          case InstanceType::c4_xlarge:
            value = "c4.xlarge";
            return true;
          default:
            return false;
          }
        }
        static bool GetNameForEnumHelper1(InstanceType enumValue, Aws::String& value)
        {
          switch(enumValue)
          {
          case InstanceType::c4_2xlarge:
            value = "c4.2xlarge";
            return true;
          case InstanceType::c4_4xlarge:
            value = "c4.4xlarge";
            return true;
          case InstanceType::c4_8xlarge:
            value = "c4.8xlarge";
            return true;
          case InstanceType::c5_large:
            value = "c5.large";
            return true;
          case InstanceType::c5_xlarge:
            value = "c5.xlarge";
            return true;
          case InstanceType::c5_2xlarge:
            value = "c5.2xlarge";
            return true;
          case InstanceType::c5_4xlarge:
            value = "c5.4xlarge";
            return true;
          case InstanceType::c5_9xlarge:
            value = "c5.9xlarge";
            return true;
          case InstanceType::c5_12xlarge:
            value = "c5.12xlarge";
            return true;
          case InstanceType::c5_18xlarge:
            value = "c5.18xlarge";
            return true;
          case InstanceType::c5_24xlarge:
            value = "c5.24xlarge";
            return true;
          case InstanceType::c5_metal:
            value = "c5.metal";
            return true;
          case InstanceType::c5d_large:
            value = "c5d.large";
            return true;
          case InstanceType::c5d_xlarge:
            value = "c5d.xlarge";
            return true;
          case InstanceType::c5d_2xlarge:
            value = "c5d.2xlarge";
            return true;
          case InstanceType::c5d_4xlarge:
            value = "c5d.4xlarge";
            return true;
          case InstanceType::c5d_9xlarge:
            value = "c5d.9xlarge";
            return true;
          case InstanceType::c5d_18xlarge:
            value = "c5d.18xlarge";
            return true;
          case InstanceType::c5n_large:
            value = "c5n.large";
            return true;
          case InstanceType::c5n_xlarge:
            value = "c5n.xlarge";
            return true;
          case InstanceType::c5n_2xlarge:
            value = "c5n.2xlarge";
            return true;
          case InstanceType::c5n_4xlarge:
            value = "c5n.4xlarge";
            return true;
          case InstanceType::c5n_9xlarge:
            value = "c5n.9xlarge";
            return true;
          case InstanceType::c5n_18xlarge:
            value = "c5n.18xlarge";
            return true;
          case InstanceType::cc1_4xlarge:
            value = "cc1.4xlarge";
            return true;
          case InstanceType::cc2_8xlarge:
            value = "cc2.8xlarge";
            return true;
          case InstanceType::g2_2xlarge:
            value = "g2.2xlarge";
            return true;
          case InstanceType::g2_8xlarge:
            value = "g2.8xlarge";
            return true;
          case InstanceType::g3_4xlarge:
            value = "g3.4xlarge";
            return true;
          case InstanceType::g3_8xlarge:
            value = "g3.8xlarge";
            return true;
          case InstanceType::g3_16xlarge:
            value = "g3.16xlarge";
            return true;
          case InstanceType::g3s_xlarge:
            value = "g3s.xlarge";
            return true;
          case InstanceType::cg1_4xlarge:
            value = "cg1.4xlarge";
            return true;
          case InstanceType::p2_xlarge:
            value = "p2.xlarge";
            return true;
          case InstanceType::p2_8xlarge:
            value = "p2.8xlarge";
            return true;
          case InstanceType::p2_16xlarge:
            value = "p2.16xlarge";
            return true;
          case InstanceType::p3_2xlarge:
            value = "p3.2xlarge";
            return true;
          case InstanceType::p3_8xlarge:
            value = "p3.8xlarge";
            return true;
          case InstanceType::p3_16xlarge:
            value = "p3.16xlarge";
            return true;
          case InstanceType::p3dn_24xlarge:
            value = "p3dn.24xlarge";
            return true;
          case InstanceType::d2_xlarge:
            value = "d2.xlarge";
            return true;
          case InstanceType::d2_2xlarge:
            value = "d2.2xlarge";
            return true;
          case InstanceType::d2_4xlarge:
            value = "d2.4xlarge";
            return true;
          case InstanceType::d2_8xlarge:
            value = "d2.8xlarge";
            return true;
          case InstanceType::f1_2xlarge:
            value = "f1.2xlarge";
            return true;
          case InstanceType::f1_4xlarge:
            value = "f1.4xlarge";
            return true;
          case InstanceType::f1_16xlarge:
            value = "f1.16xlarge";
            return true;
          case InstanceType::m5_large:
            value = "m5.large";
            return true;
          case InstanceType::m5_xlarge:
            value = "m5.xlarge";
            return true;
          case InstanceType::m5_2xlarge:
            value = "m5.2xlarge";
            return true;
          case InstanceType::m5_4xlarge:
            value = "m5.4xlarge";
            return true;
          case InstanceType::m5_8xlarge:
            value = "m5.8xlarge";
            return true;
          case InstanceType::m5_12xlarge:
            value = "m5.12xlarge";
            return true;
          case InstanceType::m5_16xlarge:
            value = "m5.16xlarge";
            return true;
          case InstanceType::m5_24xlarge:
            value = "m5.24xlarge";
            return true;
          case InstanceType::m5_metal:
            value = "m5.metal";
            return true;
          case InstanceType::m5a_large:
            value = "m5a.large";
            return true;
          case InstanceType::m5a_xlarge:
            value = "m5a.xlarge";
            return true;
          case InstanceType::m5a_2xlarge:
            value = "m5a.2xlarge";
            return true;
          case InstanceType::m5a_4xlarge:
            value = "m5a.4xlarge";
            return true;
          case InstanceType::m5a_8xlarge:
            value = "m5a.8xlarge";
            return true;
          case InstanceType::m5a_12xlarge:
            value = "m5a.12xlarge";
            return true;
          case InstanceType::m5a_16xlarge:
            value = "m5a.16xlarge";
            return true;
          case InstanceType::m5a_24xlarge:
            value = "m5a.24xlarge";
            return true;
          case InstanceType::m5d_large:
            value = "m5d.large";
            return true;
          case InstanceType::m5d_xlarge:
            value = "m5d.xlarge";
            return true;
          case InstanceType::m5d_2xlarge:
            value = "m5d.2xlarge";
            return true;
          case InstanceType::m5d_4xlarge:
            value = "m5d.4xlarge";
            return true;
          case InstanceType::m5d_8xlarge:
            value = "m5d.8xlarge";
            return true;
          case InstanceType::m5d_12xlarge:
            value = "m5d.12xlarge";
            return true;
          case InstanceType::m5d_16xlarge:
            value = "m5d.16xlarge";
            return true;
          case InstanceType::m5d_24xlarge:
            value = "m5d.24xlarge";
            return true;
          case InstanceType::m5d_metal:
            value = "m5d.metal";
            return true;
          case InstanceType::m5ad_large:
            value = "m5ad.large";
            return true;
          case InstanceType::m5ad_xlarge:
            value = "m5ad.xlarge";
            return true;
          case InstanceType::m5ad_2xlarge:
            value = "m5ad.2xlarge";
            return true;
          case InstanceType::m5ad_4xlarge:
            value = "m5ad.4xlarge";
            return true;
          case InstanceType::m5ad_8xlarge:
            value = "m5ad.8xlarge";
            return true;
          case InstanceType::m5ad_12xlarge:
            value = "m5ad.12xlarge";
            return true;
          case InstanceType::m5ad_16xlarge:
            value = "m5ad.16xlarge";
            return true;
          case InstanceType::m5ad_24xlarge:
            value = "m5ad.24xlarge";
            return true;
          case InstanceType::h1_2xlarge:
            value = "h1.2xlarge";
            return true;
          case InstanceType::h1_4xlarge:
            value = "h1.4xlarge";
            return true;
          case InstanceType::h1_8xlarge:
            value = "h1.8xlarge";
            return true;
          case InstanceType::h1_16xlarge:
            value = "h1.16xlarge";
            return true;
          case InstanceType::z1d_large:
            value = "z1d.large";
            return true;
          case InstanceType::z1d_xlarge:
            value = "z1d.xlarge";
            return true;
          case InstanceType::z1d_2xlarge:
            value = "z1d.2xlarge";
            return true;
          case InstanceType::z1d_3xlarge:
            value = "z1d.3xlarge";
            return true;
          case InstanceType::z1d_6xlarge:
            value = "z1d.6xlarge";
            return true;
          case InstanceType::z1d_12xlarge:
            value = "z1d.12xlarge";
            return true;
          case InstanceType::z1d_metal:
            value = "z1d.metal";
            return true;
          case InstanceType::u_6tb1_metal:
            value = "u-6tb1.metal";
            return true;
          case InstanceType::u_9tb1_metal:
            value = "u-9tb1.metal";
            return true;
          case InstanceType::u_12tb1_metal:
            value = "u-12tb1.metal";
            return true;
          case InstanceType::a1_medium:
            value = "a1.medium";
            return true;
          case InstanceType::a1_large:
            value = "a1.large";
            return true;
          case InstanceType::a1_xlarge:
            value = "a1.xlarge";
            return true;
          case InstanceType::a1_2xlarge:
            value = "a1.2xlarge";
            return true;
          case InstanceType::a1_4xlarge:
            value = "a1.4xlarge";
            return true;
          default:
            return false;
          }
        }

        InstanceType GetInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          InstanceType enumValue;
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
            return static_cast<InstanceType>(hashCode);
          }

          return InstanceType::NOT_SET;
        }

        Aws::String GetNameForInstanceType(InstanceType enumValue)
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

      } // namespace InstanceTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
