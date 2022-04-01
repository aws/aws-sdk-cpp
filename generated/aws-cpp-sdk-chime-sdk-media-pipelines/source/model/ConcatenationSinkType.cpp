/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ConcatenationSinkType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMediaPipelines
  {
    namespace Model
    {
      namespace ConcatenationSinkTypeMapper
      {

        static const int S3Bucket_HASH = HashingUtils::HashString("S3Bucket");


        ConcatenationSinkType GetConcatenationSinkTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3Bucket_HASH)
          {
            return ConcatenationSinkType::S3Bucket;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConcatenationSinkType>(hashCode);
          }

          return ConcatenationSinkType::NOT_SET;
        }

        Aws::String GetNameForConcatenationSinkType(ConcatenationSinkType enumValue)
        {
          switch(enumValue)
          {
          case ConcatenationSinkType::S3Bucket:
            return "S3Bucket";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConcatenationSinkTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
