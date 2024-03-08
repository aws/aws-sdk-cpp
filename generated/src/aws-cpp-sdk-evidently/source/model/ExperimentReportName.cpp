/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/ExperimentReportName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchEvidently
  {
    namespace Model
    {
      namespace ExperimentReportNameMapper
      {

        static const int BayesianInference_HASH = HashingUtils::HashString("BayesianInference");


        ExperimentReportName GetExperimentReportNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BayesianInference_HASH)
          {
            return ExperimentReportName::BayesianInference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentReportName>(hashCode);
          }

          return ExperimentReportName::NOT_SET;
        }

        Aws::String GetNameForExperimentReportName(ExperimentReportName enumValue)
        {
          switch(enumValue)
          {
          case ExperimentReportName::NOT_SET:
            return {};
          case ExperimentReportName::BayesianInference:
            return "BayesianInference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExperimentReportNameMapper
    } // namespace Model
  } // namespace CloudWatchEvidently
} // namespace Aws
