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

#include <aws/medialive/model/PipelineId.h>
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
      namespace PipelineIdMapper
      {

        static const int PIPELINE_0_HASH = HashingUtils::HashString("PIPELINE_0");
        static const int PIPELINE_1_HASH = HashingUtils::HashString("PIPELINE_1");


        PipelineId GetPipelineIdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PIPELINE_0_HASH)
          {
            return PipelineId::PIPELINE_0;
          }
          else if (hashCode == PIPELINE_1_HASH)
          {
            return PipelineId::PIPELINE_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineId>(hashCode);
          }

          return PipelineId::NOT_SET;
        }

        Aws::String GetNameForPipelineId(PipelineId enumValue)
        {
          switch(enumValue)
          {
          case PipelineId::PIPELINE_0:
            return "PIPELINE_0";
          case PipelineId::PIPELINE_1:
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

      } // namespace PipelineIdMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
