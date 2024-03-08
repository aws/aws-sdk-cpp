/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace PipelineTypeMapper
      {

        static const int V1_HASH = HashingUtils::HashString("V1");
        static const int V2_HASH = HashingUtils::HashString("V2");


        PipelineType GetPipelineTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V1_HASH)
          {
            return PipelineType::V1;
          }
          else if (hashCode == V2_HASH)
          {
            return PipelineType::V2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineType>(hashCode);
          }

          return PipelineType::NOT_SET;
        }

        Aws::String GetNameForPipelineType(PipelineType enumValue)
        {
          switch(enumValue)
          {
          case PipelineType::NOT_SET:
            return {};
          case PipelineType::V1:
            return "V1";
          case PipelineType::V2:
            return "V2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
