/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetStatus.h>
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
      namespace TestSetStatusMapper
      {

        static constexpr uint32_t Importing_HASH = ConstExprHashingUtils::HashString("Importing");
        static constexpr uint32_t PendingAnnotation_HASH = ConstExprHashingUtils::HashString("PendingAnnotation");
        static constexpr uint32_t Deleting_HASH = ConstExprHashingUtils::HashString("Deleting");
        static constexpr uint32_t ValidationError_HASH = ConstExprHashingUtils::HashString("ValidationError");
        static constexpr uint32_t Ready_HASH = ConstExprHashingUtils::HashString("Ready");


        TestSetStatus GetTestSetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Importing_HASH)
          {
            return TestSetStatus::Importing;
          }
          else if (hashCode == PendingAnnotation_HASH)
          {
            return TestSetStatus::PendingAnnotation;
          }
          else if (hashCode == Deleting_HASH)
          {
            return TestSetStatus::Deleting;
          }
          else if (hashCode == ValidationError_HASH)
          {
            return TestSetStatus::ValidationError;
          }
          else if (hashCode == Ready_HASH)
          {
            return TestSetStatus::Ready;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TestSetStatus>(hashCode);
          }

          return TestSetStatus::NOT_SET;
        }

        Aws::String GetNameForTestSetStatus(TestSetStatus enumValue)
        {
          switch(enumValue)
          {
          case TestSetStatus::NOT_SET:
            return {};
          case TestSetStatus::Importing:
            return "Importing";
          case TestSetStatus::PendingAnnotation:
            return "PendingAnnotation";
          case TestSetStatus::Deleting:
            return "Deleting";
          case TestSetStatus::ValidationError:
            return "ValidationError";
          case TestSetStatus::Ready:
            return "Ready";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TestSetStatusMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
