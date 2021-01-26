/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Partition.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace PartitionMapper
      {

        static const int aws_HASH = HashingUtils::HashString("aws");
        static const int aws_cn_HASH = HashingUtils::HashString("aws-cn");
        static const int aws_us_gov_HASH = HashingUtils::HashString("aws-us-gov");


        Partition GetPartitionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == aws_HASH)
          {
            return Partition::aws;
          }
          else if (hashCode == aws_cn_HASH)
          {
            return Partition::aws_cn;
          }
          else if (hashCode == aws_us_gov_HASH)
          {
            return Partition::aws_us_gov;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Partition>(hashCode);
          }

          return Partition::NOT_SET;
        }

        Aws::String GetNameForPartition(Partition enumValue)
        {
          switch(enumValue)
          {
          case Partition::aws:
            return "aws";
          case Partition::aws_cn:
            return "aws-cn";
          case Partition::aws_us_gov:
            return "aws-us-gov";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PartitionMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
