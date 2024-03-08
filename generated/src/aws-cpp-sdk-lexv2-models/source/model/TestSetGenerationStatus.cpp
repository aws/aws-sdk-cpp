/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetGenerationStatus.h>
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
      namespace TestSetGenerationStatusMapper
      {

        static const int Generating_HASH = HashingUtils::HashString("Generating");
        static const int Ready_HASH = HashingUtils::HashString("Ready");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Pending_HASH = HashingUtils::HashString("Pending");


        TestSetGenerationStatus GetTestSetGenerationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Generating_HASH)
          {
            return TestSetGenerationStatus::Generating;
          }
          else if (hashCode == Ready_HASH)
          {
            return TestSetGenerationStatus::Ready;
          }
          else if (hashCode == Failed_HASH)
          {
            return TestSetGenerationStatus::Failed;
          }
          else if (hashCode == Pending_HASH)
          {
            return TestSetGenerationStatus::Pending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestSetGenerationStatus>(hashCode);
          }

          return TestSetGenerationStatus::NOT_SET;
        }

        Aws::String GetNameForTestSetGenerationStatus(TestSetGenerationStatus enumValue)
        {
          switch(enumValue)
          {
          case TestSetGenerationStatus::NOT_SET:
            return {};
          case TestSetGenerationStatus::Generating:
            return "Generating";
          case TestSetGenerationStatus::Ready:
            return "Ready";
          case TestSetGenerationStatus::Failed:
            return "Failed";
          case TestSetGenerationStatus::Pending:
            return "Pending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestSetGenerationStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
