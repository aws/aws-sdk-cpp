/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/S3DataDistributionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace S3DataDistributionTypeMapper
      {

        static const int FullyReplicated_HASH = HashingUtils::HashString("FullyReplicated");
        static const int ShardedByS3Key_HASH = HashingUtils::HashString("ShardedByS3Key");


        S3DataDistributionType GetS3DataDistributionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FullyReplicated_HASH)
          {
            return S3DataDistributionType::FullyReplicated;
          }
          else if (hashCode == ShardedByS3Key_HASH)
          {
            return S3DataDistributionType::ShardedByS3Key;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3DataDistributionType>(hashCode);
          }

          return S3DataDistributionType::NOT_SET;
        }

        Aws::String GetNameForS3DataDistributionType(S3DataDistributionType enumValue)
        {
          switch(enumValue)
          {
          case S3DataDistributionType::NOT_SET:
            return {};
          case S3DataDistributionType::FullyReplicated:
            return "FullyReplicated";
          case S3DataDistributionType::ShardedByS3Key:
            return "ShardedByS3Key";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3DataDistributionTypeMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
