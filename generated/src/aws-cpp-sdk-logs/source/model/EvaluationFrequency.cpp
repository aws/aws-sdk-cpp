/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/EvaluationFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace EvaluationFrequencyMapper
      {

        static const int ONE_MIN_HASH = HashingUtils::HashString("ONE_MIN");
        static const int FIVE_MIN_HASH = HashingUtils::HashString("FIVE_MIN");
        static const int TEN_MIN_HASH = HashingUtils::HashString("TEN_MIN");
        static const int FIFTEEN_MIN_HASH = HashingUtils::HashString("FIFTEEN_MIN");
        static const int THIRTY_MIN_HASH = HashingUtils::HashString("THIRTY_MIN");
        static const int ONE_HOUR_HASH = HashingUtils::HashString("ONE_HOUR");


        EvaluationFrequency GetEvaluationFrequencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_MIN_HASH)
          {
            return EvaluationFrequency::ONE_MIN;
          }
          else if (hashCode == FIVE_MIN_HASH)
          {
            return EvaluationFrequency::FIVE_MIN;
          }
          else if (hashCode == TEN_MIN_HASH)
          {
            return EvaluationFrequency::TEN_MIN;
          }
          else if (hashCode == FIFTEEN_MIN_HASH)
          {
            return EvaluationFrequency::FIFTEEN_MIN;
          }
          else if (hashCode == THIRTY_MIN_HASH)
          {
            return EvaluationFrequency::THIRTY_MIN;
          }
          else if (hashCode == ONE_HOUR_HASH)
          {
            return EvaluationFrequency::ONE_HOUR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EvaluationFrequency>(hashCode);
          }

          return EvaluationFrequency::NOT_SET;
        }

        Aws::String GetNameForEvaluationFrequency(EvaluationFrequency enumValue)
        {
          switch(enumValue)
          {
          case EvaluationFrequency::NOT_SET:
            return {};
          case EvaluationFrequency::ONE_MIN:
            return "ONE_MIN";
          case EvaluationFrequency::FIVE_MIN:
            return "FIVE_MIN";
          case EvaluationFrequency::TEN_MIN:
            return "TEN_MIN";
          case EvaluationFrequency::FIFTEEN_MIN:
            return "FIFTEEN_MIN";
          case EvaluationFrequency::THIRTY_MIN:
            return "THIRTY_MIN";
          case EvaluationFrequency::ONE_HOUR:
            return "ONE_HOUR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EvaluationFrequencyMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
