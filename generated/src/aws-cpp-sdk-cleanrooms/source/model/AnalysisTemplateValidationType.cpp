/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisTemplateValidationType.h>
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
      namespace AnalysisTemplateValidationTypeMapper
      {

        static const int DIFFERENTIAL_PRIVACY_HASH = HashingUtils::HashString("DIFFERENTIAL_PRIVACY");


        AnalysisTemplateValidationType GetAnalysisTemplateValidationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DIFFERENTIAL_PRIVACY_HASH)
          {
            return AnalysisTemplateValidationType::DIFFERENTIAL_PRIVACY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisTemplateValidationType>(hashCode);
          }

          return AnalysisTemplateValidationType::NOT_SET;
        }

        Aws::String GetNameForAnalysisTemplateValidationType(AnalysisTemplateValidationType enumValue)
        {
          switch(enumValue)
          {
          case AnalysisTemplateValidationType::NOT_SET:
            return {};
          case AnalysisTemplateValidationType::DIFFERENTIAL_PRIVACY:
            return "DIFFERENTIAL_PRIVACY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisTemplateValidationTypeMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
