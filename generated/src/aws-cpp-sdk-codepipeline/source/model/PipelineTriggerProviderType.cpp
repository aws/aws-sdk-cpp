/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineTriggerProviderType.h>
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
      namespace PipelineTriggerProviderTypeMapper
      {

        static const int CodeStarSourceConnection_HASH = HashingUtils::HashString("CodeStarSourceConnection");


        PipelineTriggerProviderType GetPipelineTriggerProviderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CodeStarSourceConnection_HASH)
          {
            return PipelineTriggerProviderType::CodeStarSourceConnection;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineTriggerProviderType>(hashCode);
          }

          return PipelineTriggerProviderType::NOT_SET;
        }

        Aws::String GetNameForPipelineTriggerProviderType(PipelineTriggerProviderType enumValue)
        {
          switch(enumValue)
          {
          case PipelineTriggerProviderType::NOT_SET:
            return {};
          case PipelineTriggerProviderType::CodeStarSourceConnection:
            return "CodeStarSourceConnection";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineTriggerProviderTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
