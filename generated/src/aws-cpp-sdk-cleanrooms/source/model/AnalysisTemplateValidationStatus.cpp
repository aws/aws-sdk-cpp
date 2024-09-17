/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisTemplateValidationStatus.h>
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
      namespace AnalysisTemplateValidationStatusMapper
      {

        static const int VALID_HASH = HashingUtils::HashString("VALID");
        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int UNABLE_TO_VALIDATE_HASH = HashingUtils::HashString("UNABLE_TO_VALIDATE");


        AnalysisTemplateValidationStatus GetAnalysisTemplateValidationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALID_HASH)
          {
            return AnalysisTemplateValidationStatus::VALID;
          }
          else if (hashCode == INVALID_HASH)
          {
            return AnalysisTemplateValidationStatus::INVALID;
          }
          else if (hashCode == UNABLE_TO_VALIDATE_HASH)
          {
            return AnalysisTemplateValidationStatus::UNABLE_TO_VALIDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisTemplateValidationStatus>(hashCode);
          }

          return AnalysisTemplateValidationStatus::NOT_SET;
        }

        Aws::String GetNameForAnalysisTemplateValidationStatus(AnalysisTemplateValidationStatus enumValue)
        {
          switch(enumValue)
          {
          case AnalysisTemplateValidationStatus::NOT_SET:
            return {};
          case AnalysisTemplateValidationStatus::VALID:
            return "VALID";
          case AnalysisTemplateValidationStatus::INVALID:
            return "INVALID";
          case AnalysisTemplateValidationStatus::UNABLE_TO_VALIDATE:
            return "UNABLE_TO_VALIDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisTemplateValidationStatusMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
