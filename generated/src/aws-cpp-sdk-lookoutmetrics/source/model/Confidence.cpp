/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/Confidence.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace ConfidenceMapper
      {

        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        Confidence GetConfidenceForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return Confidence::HIGH;
          }
          else if (hashCode == LOW_HASH)
          {
            return Confidence::LOW;
          }
          else if (hashCode == NONE_HASH)
          {
            return Confidence::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Confidence>(hashCode);
          }

          return Confidence::NOT_SET;
        }

        Aws::String GetNameForConfidence(Confidence enumValue)
        {
          switch(enumValue)
          {
          case Confidence::NOT_SET:
            return {};
          case Confidence::HIGH:
            return "HIGH";
          case Confidence::LOW:
            return "LOW";
          case Confidence::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfidenceMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
