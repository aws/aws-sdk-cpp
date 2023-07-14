/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/StorageType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace StorageTypeMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int KINESIS_VIDEO_STREAM_HASH = HashingUtils::HashString("KINESIS_VIDEO_STREAM");
        static const int KINESIS_STREAM_HASH = HashingUtils::HashString("KINESIS_STREAM");
        static const int KINESIS_FIREHOSE_HASH = HashingUtils::HashString("KINESIS_FIREHOSE");


        StorageType GetStorageTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return StorageType::S3;
          }
          else if (hashCode == KINESIS_VIDEO_STREAM_HASH)
          {
            return StorageType::KINESIS_VIDEO_STREAM;
          }
          else if (hashCode == KINESIS_STREAM_HASH)
          {
            return StorageType::KINESIS_STREAM;
          }
          else if (hashCode == KINESIS_FIREHOSE_HASH)
          {
            return StorageType::KINESIS_FIREHOSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageType>(hashCode);
          }

          return StorageType::NOT_SET;
        }

        Aws::String GetNameForStorageType(StorageType enumValue)
        {
          switch(enumValue)
          {
          case StorageType::S3:
            return "S3";
          case StorageType::KINESIS_VIDEO_STREAM:
            return "KINESIS_VIDEO_STREAM";
          case StorageType::KINESIS_STREAM:
            return "KINESIS_STREAM";
          case StorageType::KINESIS_FIREHOSE:
            return "KINESIS_FIREHOSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StorageTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
