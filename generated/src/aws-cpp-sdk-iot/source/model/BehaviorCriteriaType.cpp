/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/BehaviorCriteriaType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace BehaviorCriteriaTypeMapper
      {

        static const int STATIC__HASH = HashingUtils::HashString("STATIC");
        static const int STATISTICAL_HASH = HashingUtils::HashString("STATISTICAL");
        static const int MACHINE_LEARNING_HASH = HashingUtils::HashString("MACHINE_LEARNING");


        BehaviorCriteriaType GetBehaviorCriteriaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return BehaviorCriteriaType::STATIC_;
          }
          else if (hashCode == STATISTICAL_HASH)
          {
            return BehaviorCriteriaType::STATISTICAL;
          }
          else if (hashCode == MACHINE_LEARNING_HASH)
          {
            return BehaviorCriteriaType::MACHINE_LEARNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BehaviorCriteriaType>(hashCode);
          }

          return BehaviorCriteriaType::NOT_SET;
        }

        Aws::String GetNameForBehaviorCriteriaType(BehaviorCriteriaType enumValue)
        {
          switch(enumValue)
          {
          case BehaviorCriteriaType::NOT_SET:
            return {};
          case BehaviorCriteriaType::STATIC_:
            return "STATIC";
          case BehaviorCriteriaType::STATISTICAL:
            return "STATISTICAL";
          case BehaviorCriteriaType::MACHINE_LEARNING:
            return "MACHINE_LEARNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BehaviorCriteriaTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
