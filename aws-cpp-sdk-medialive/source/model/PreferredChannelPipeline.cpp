/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/PreferredChannelPipeline.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace PreferredChannelPipelineMapper
      {

        static const int CURRENTLY_ACTIVE_HASH = HashingUtils::HashString("CURRENTLY_ACTIVE");
        static const int PIPELINE_0_HASH = HashingUtils::HashString("PIPELINE_0");
        static const int PIPELINE_1_HASH = HashingUtils::HashString("PIPELINE_1");


        PreferredChannelPipeline GetPreferredChannelPipelineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENTLY_ACTIVE_HASH)
          {
            return PreferredChannelPipeline::CURRENTLY_ACTIVE;
          }
          else if (hashCode == PIPELINE_0_HASH)
          {
            return PreferredChannelPipeline::PIPELINE_0;
          }
          else if (hashCode == PIPELINE_1_HASH)
          {
            return PreferredChannelPipeline::PIPELINE_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreferredChannelPipeline>(hashCode);
          }

          return PreferredChannelPipeline::NOT_SET;
        }

        Aws::String GetNameForPreferredChannelPipeline(PreferredChannelPipeline enumValue)
        {
          switch(enumValue)
          {
          case PreferredChannelPipeline::CURRENTLY_ACTIVE:
            return "CURRENTLY_ACTIVE";
          case PreferredChannelPipeline::PIPELINE_0:
            return "PIPELINE_0";
          case PreferredChannelPipeline::PIPELINE_1:
            return "PIPELINE_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreferredChannelPipelineMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
