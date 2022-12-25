/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-media-pipelines/model/ConcatenationSourceType.h>
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
      namespace ConcatenationSourceTypeMapper
      {

        static const int MediaCapturePipeline_HASH = HashingUtils::HashString("MediaCapturePipeline");


        ConcatenationSourceType GetConcatenationSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MediaCapturePipeline_HASH)
          {
            return ConcatenationSourceType::MediaCapturePipeline;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConcatenationSourceType>(hashCode);
          }

          return ConcatenationSourceType::NOT_SET;
        }

        Aws::String GetNameForConcatenationSourceType(ConcatenationSourceType enumValue)
        {
          switch(enumValue)
          {
          case ConcatenationSourceType::MediaCapturePipeline:
            return "MediaCapturePipeline";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConcatenationSourceTypeMapper
    } // namespace Model
  } // namespace ChimeSDKMediaPipelines
} // namespace Aws
