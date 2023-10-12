/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/Stage.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace StageMapper
      {

        static constexpr uint32_t PRODUCTION_HASH = ConstExprHashingUtils::HashString("PRODUCTION");
        static constexpr uint32_t BETA_HASH = ConstExprHashingUtils::HashString("BETA");
        static constexpr uint32_t DEVELOPMENT_HASH = ConstExprHashingUtils::HashString("DEVELOPMENT");
        static constexpr uint32_t EXPERIMENTAL_HASH = ConstExprHashingUtils::HashString("EXPERIMENTAL");
        static constexpr uint32_t PULL_REQUEST_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST");


        Stage GetStageForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRODUCTION_HASH)
          {
            return Stage::PRODUCTION;
          }
          else if (hashCode == BETA_HASH)
          {
            return Stage::BETA;
          }
          else if (hashCode == DEVELOPMENT_HASH)
          {
            return Stage::DEVELOPMENT;
          }
          else if (hashCode == EXPERIMENTAL_HASH)
          {
            return Stage::EXPERIMENTAL;
          }
          else if (hashCode == PULL_REQUEST_HASH)
          {
            return Stage::PULL_REQUEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Stage>(hashCode);
          }

          return Stage::NOT_SET;
        }

        Aws::String GetNameForStage(Stage enumValue)
        {
          switch(enumValue)
          {
          case Stage::NOT_SET:
            return {};
          case Stage::PRODUCTION:
            return "PRODUCTION";
          case Stage::BETA:
            return "BETA";
          case Stage::DEVELOPMENT:
            return "DEVELOPMENT";
          case Stage::EXPERIMENTAL:
            return "EXPERIMENTAL";
          case Stage::PULL_REQUEST:
            return "PULL_REQUEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
