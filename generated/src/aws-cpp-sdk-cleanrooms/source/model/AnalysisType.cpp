/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace AnalysisTypeMapper
      {

        static const int DIRECT_ANALYSIS_HASH = HashingUtils::HashString("DIRECT_ANALYSIS");
        static const int ADDITIONAL_ANALYSIS_HASH = HashingUtils::HashString("ADDITIONAL_ANALYSIS");


        AnalysisType GetAnalysisTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIRECT_ANALYSIS_HASH)
          {
            return AnalysisType::DIRECT_ANALYSIS;
          }
          else if (hashCode == ADDITIONAL_ANALYSIS_HASH)
          {
            return AnalysisType::ADDITIONAL_ANALYSIS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisType>(hashCode);
          }

          return AnalysisType::NOT_SET;
        }

        Aws::String GetNameForAnalysisType(AnalysisType enumValue)
        {
          switch(enumValue)
          {
          case AnalysisType::NOT_SET:
            return {};
          case AnalysisType::DIRECT_ANALYSIS:
            return "DIRECT_ANALYSIS";
          case AnalysisType::ADDITIONAL_ANALYSIS:
            return "ADDITIONAL_ANALYSIS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
