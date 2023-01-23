/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/PromptAttempt.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace PromptAttemptMapper
      {

        static const int Initial_HASH = HashingUtils::HashString("Initial");
        static const int Retry1_HASH = HashingUtils::HashString("Retry1");
        static const int Retry2_HASH = HashingUtils::HashString("Retry2");
        static const int Retry3_HASH = HashingUtils::HashString("Retry3");
        static const int Retry4_HASH = HashingUtils::HashString("Retry4");
        static const int Retry5_HASH = HashingUtils::HashString("Retry5");


        PromptAttempt GetPromptAttemptForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Initial_HASH)
          {
            return PromptAttempt::Initial;
          }
          else if (hashCode == Retry1_HASH)
          {
            return PromptAttempt::Retry1;
          }
          else if (hashCode == Retry2_HASH)
          {
            return PromptAttempt::Retry2;
          }
          else if (hashCode == Retry3_HASH)
          {
            return PromptAttempt::Retry3;
          }
          else if (hashCode == Retry4_HASH)
          {
            return PromptAttempt::Retry4;
          }
          else if (hashCode == Retry5_HASH)
          {
            return PromptAttempt::Retry5;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PromptAttempt>(hashCode);
          }

          return PromptAttempt::NOT_SET;
        }

        Aws::String GetNameForPromptAttempt(PromptAttempt enumValue)
        {
          switch(enumValue)
          {
          case PromptAttempt::Initial:
            return "Initial";
          case PromptAttempt::Retry1:
            return "Retry1";
          case PromptAttempt::Retry2:
            return "Retry2";
          case PromptAttempt::Retry3:
            return "Retry3";
          case PromptAttempt::Retry4:
            return "Retry4";
          case PromptAttempt::Retry5:
            return "Retry5";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PromptAttemptMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
