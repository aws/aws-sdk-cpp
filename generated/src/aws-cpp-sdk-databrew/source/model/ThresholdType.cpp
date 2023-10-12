/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ThresholdType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace ThresholdTypeMapper
      {

        static constexpr uint32_t GREATER_THAN_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("GREATER_THAN_OR_EQUAL");
        static constexpr uint32_t LESS_THAN_OR_EQUAL_HASH = ConstExprHashingUtils::HashString("LESS_THAN_OR_EQUAL");
        static constexpr uint32_t GREATER_THAN_HASH = ConstExprHashingUtils::HashString("GREATER_THAN");
        static constexpr uint32_t LESS_THAN_HASH = ConstExprHashingUtils::HashString("LESS_THAN");


        ThresholdType GetThresholdTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GREATER_THAN_OR_EQUAL_HASH)
          {
            return ThresholdType::GREATER_THAN_OR_EQUAL;
          }
          else if (hashCode == LESS_THAN_OR_EQUAL_HASH)
          {
            return ThresholdType::LESS_THAN_OR_EQUAL;
          }
          else if (hashCode == GREATER_THAN_HASH)
          {
            return ThresholdType::GREATER_THAN;
          }
          else if (hashCode == LESS_THAN_HASH)
          {
            return ThresholdType::LESS_THAN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThresholdType>(hashCode);
          }

          return ThresholdType::NOT_SET;
        }

        Aws::String GetNameForThresholdType(ThresholdType enumValue)
        {
          switch(enumValue)
          {
          case ThresholdType::NOT_SET:
            return {};
          case ThresholdType::GREATER_THAN_OR_EQUAL:
            return "GREATER_THAN_OR_EQUAL";
          case ThresholdType::LESS_THAN_OR_EQUAL:
            return "LESS_THAN_OR_EQUAL";
          case ThresholdType::GREATER_THAN:
            return "GREATER_THAN";
          case ThresholdType::LESS_THAN:
            return "LESS_THAN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThresholdTypeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
