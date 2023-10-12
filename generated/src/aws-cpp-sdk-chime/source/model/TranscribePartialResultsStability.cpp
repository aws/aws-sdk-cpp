/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/TranscribePartialResultsStability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace TranscribePartialResultsStabilityMapper
      {

        static constexpr uint32_t low_HASH = ConstExprHashingUtils::HashString("low");
        static constexpr uint32_t medium_HASH = ConstExprHashingUtils::HashString("medium");
        static constexpr uint32_t high_HASH = ConstExprHashingUtils::HashString("high");


        TranscribePartialResultsStability GetTranscribePartialResultsStabilityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == low_HASH)
          {
            return TranscribePartialResultsStability::low;
          }
          else if (hashCode == medium_HASH)
          {
            return TranscribePartialResultsStability::medium;
          }
          else if (hashCode == high_HASH)
          {
            return TranscribePartialResultsStability::high;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TranscribePartialResultsStability>(hashCode);
          }

          return TranscribePartialResultsStability::NOT_SET;
        }

        Aws::String GetNameForTranscribePartialResultsStability(TranscribePartialResultsStability enumValue)
        {
          switch(enumValue)
          {
          case TranscribePartialResultsStability::NOT_SET:
            return {};
          case TranscribePartialResultsStability::low:
            return "low";
          case TranscribePartialResultsStability::medium:
            return "medium";
          case TranscribePartialResultsStability::high:
            return "high";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TranscribePartialResultsStabilityMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
