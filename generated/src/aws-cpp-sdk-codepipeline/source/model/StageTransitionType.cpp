/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageTransitionType.h>
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
      namespace StageTransitionTypeMapper
      {

        static constexpr uint32_t Inbound_HASH = ConstExprHashingUtils::HashString("Inbound");
        static constexpr uint32_t Outbound_HASH = ConstExprHashingUtils::HashString("Outbound");


        StageTransitionType GetStageTransitionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Inbound_HASH)
          {
            return StageTransitionType::Inbound;
          }
          else if (hashCode == Outbound_HASH)
          {
            return StageTransitionType::Outbound;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StageTransitionType>(hashCode);
          }

          return StageTransitionType::NOT_SET;
        }

        Aws::String GetNameForStageTransitionType(StageTransitionType enumValue)
        {
          switch(enumValue)
          {
          case StageTransitionType::NOT_SET:
            return {};
          case StageTransitionType::Inbound:
            return "Inbound";
          case StageTransitionType::Outbound:
            return "Outbound";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageTransitionTypeMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
