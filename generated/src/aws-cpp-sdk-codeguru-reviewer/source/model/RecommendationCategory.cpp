/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguru-reviewer/model/RecommendationCategory.h>
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
      namespace RecommendationCategoryMapper
      {

        static const int AWSBestPractices_HASH = HashingUtils::HashString("AWSBestPractices");
        static const int AWSCloudFormationIssues_HASH = HashingUtils::HashString("AWSCloudFormationIssues");
        static const int DuplicateCode_HASH = HashingUtils::HashString("DuplicateCode");
        static const int CodeMaintenanceIssues_HASH = HashingUtils::HashString("CodeMaintenanceIssues");
        static const int ConcurrencyIssues_HASH = HashingUtils::HashString("ConcurrencyIssues");
        static const int InputValidations_HASH = HashingUtils::HashString("InputValidations");
        static const int PythonBestPractices_HASH = HashingUtils::HashString("PythonBestPractices");
        static const int JavaBestPractices_HASH = HashingUtils::HashString("JavaBestPractices");
        static const int ResourceLeaks_HASH = HashingUtils::HashString("ResourceLeaks");
        static const int SecurityIssues_HASH = HashingUtils::HashString("SecurityIssues");
        static const int CodeInconsistencies_HASH = HashingUtils::HashString("CodeInconsistencies");


        RecommendationCategory GetRecommendationCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWSBestPractices_HASH)
          {
            return RecommendationCategory::AWSBestPractices;
          }
          else if (hashCode == AWSCloudFormationIssues_HASH)
          {
            return RecommendationCategory::AWSCloudFormationIssues;
          }
          else if (hashCode == DuplicateCode_HASH)
          {
            return RecommendationCategory::DuplicateCode;
          }
          else if (hashCode == CodeMaintenanceIssues_HASH)
          {
            return RecommendationCategory::CodeMaintenanceIssues;
          }
          else if (hashCode == ConcurrencyIssues_HASH)
          {
            return RecommendationCategory::ConcurrencyIssues;
          }
          else if (hashCode == InputValidations_HASH)
          {
            return RecommendationCategory::InputValidations;
          }
          else if (hashCode == PythonBestPractices_HASH)
          {
            return RecommendationCategory::PythonBestPractices;
          }
          else if (hashCode == JavaBestPractices_HASH)
          {
            return RecommendationCategory::JavaBestPractices;
          }
          else if (hashCode == ResourceLeaks_HASH)
          {
            return RecommendationCategory::ResourceLeaks;
          }
          else if (hashCode == SecurityIssues_HASH)
          {
            return RecommendationCategory::SecurityIssues;
          }
          else if (hashCode == CodeInconsistencies_HASH)
          {
            return RecommendationCategory::CodeInconsistencies;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecommendationCategory>(hashCode);
          }

          return RecommendationCategory::NOT_SET;
        }

        Aws::String GetNameForRecommendationCategory(RecommendationCategory enumValue)
        {
          switch(enumValue)
          {
          case RecommendationCategory::NOT_SET:
            return {};
          case RecommendationCategory::AWSBestPractices:
            return "AWSBestPractices";
          case RecommendationCategory::AWSCloudFormationIssues:
            return "AWSCloudFormationIssues";
          case RecommendationCategory::DuplicateCode:
            return "DuplicateCode";
          case RecommendationCategory::CodeMaintenanceIssues:
            return "CodeMaintenanceIssues";
          case RecommendationCategory::ConcurrencyIssues:
            return "ConcurrencyIssues";
          case RecommendationCategory::InputValidations:
            return "InputValidations";
          case RecommendationCategory::PythonBestPractices:
            return "PythonBestPractices";
          case RecommendationCategory::JavaBestPractices:
            return "JavaBestPractices";
          case RecommendationCategory::ResourceLeaks:
            return "ResourceLeaks";
          case RecommendationCategory::SecurityIssues:
            return "SecurityIssues";
          case RecommendationCategory::CodeInconsistencies:
            return "CodeInconsistencies";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecommendationCategoryMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
