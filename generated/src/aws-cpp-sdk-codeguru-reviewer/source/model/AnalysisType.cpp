/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/AnalysisType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace AnalysisTypeMapper
      {

        static const int Security_HASH = HashingUtils::HashString("Security");
        static const int CodeQuality_HASH = HashingUtils::HashString("CodeQuality");


        AnalysisType GetAnalysisTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Security_HASH)
          {
            return AnalysisType::Security;
          }
          else if (hashCode == CodeQuality_HASH)
          {
            return AnalysisType::CodeQuality;
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
          case AnalysisType::Security:
            return "Security";
          case AnalysisType::CodeQuality:
            return "CodeQuality";
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
  } // namespace CodeGuruReviewer
} // namespace Aws
