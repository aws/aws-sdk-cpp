/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnalysisErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace AnalysisErrorTypeMapper
      {

        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int SOURCE_NOT_FOUND_HASH = HashingUtils::HashString("SOURCE_NOT_FOUND");
        static const int DATA_SET_NOT_FOUND_HASH = HashingUtils::HashString("DATA_SET_NOT_FOUND");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int PARAMETER_VALUE_INCOMPATIBLE_HASH = HashingUtils::HashString("PARAMETER_VALUE_INCOMPATIBLE");
        static const int PARAMETER_TYPE_INVALID_HASH = HashingUtils::HashString("PARAMETER_TYPE_INVALID");
        static const int PARAMETER_NOT_FOUND_HASH = HashingUtils::HashString("PARAMETER_NOT_FOUND");
        static const int COLUMN_TYPE_MISMATCH_HASH = HashingUtils::HashString("COLUMN_TYPE_MISMATCH");
        static const int COLUMN_GEOGRAPHIC_ROLE_MISMATCH_HASH = HashingUtils::HashString("COLUMN_GEOGRAPHIC_ROLE_MISMATCH");
        static const int COLUMN_REPLACEMENT_MISSING_HASH = HashingUtils::HashString("COLUMN_REPLACEMENT_MISSING");


        AnalysisErrorType GetAnalysisErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCESS_DENIED_HASH)
          {
            return AnalysisErrorType::ACCESS_DENIED;
          }
          else if (hashCode == SOURCE_NOT_FOUND_HASH)
          {
            return AnalysisErrorType::SOURCE_NOT_FOUND;
          }
          else if (hashCode == DATA_SET_NOT_FOUND_HASH)
          {
            return AnalysisErrorType::DATA_SET_NOT_FOUND;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return AnalysisErrorType::INTERNAL_FAILURE;
          }
          else if (hashCode == PARAMETER_VALUE_INCOMPATIBLE_HASH)
          {
            return AnalysisErrorType::PARAMETER_VALUE_INCOMPATIBLE;
          }
          else if (hashCode == PARAMETER_TYPE_INVALID_HASH)
          {
            return AnalysisErrorType::PARAMETER_TYPE_INVALID;
          }
          else if (hashCode == PARAMETER_NOT_FOUND_HASH)
          {
            return AnalysisErrorType::PARAMETER_NOT_FOUND;
          }
          else if (hashCode == COLUMN_TYPE_MISMATCH_HASH)
          {
            return AnalysisErrorType::COLUMN_TYPE_MISMATCH;
          }
          else if (hashCode == COLUMN_GEOGRAPHIC_ROLE_MISMATCH_HASH)
          {
            return AnalysisErrorType::COLUMN_GEOGRAPHIC_ROLE_MISMATCH;
          }
          else if (hashCode == COLUMN_REPLACEMENT_MISSING_HASH)
          {
            return AnalysisErrorType::COLUMN_REPLACEMENT_MISSING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalysisErrorType>(hashCode);
          }

          return AnalysisErrorType::NOT_SET;
        }

        Aws::String GetNameForAnalysisErrorType(AnalysisErrorType enumValue)
        {
          switch(enumValue)
          {
          case AnalysisErrorType::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case AnalysisErrorType::SOURCE_NOT_FOUND:
            return "SOURCE_NOT_FOUND";
          case AnalysisErrorType::DATA_SET_NOT_FOUND:
            return "DATA_SET_NOT_FOUND";
          case AnalysisErrorType::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case AnalysisErrorType::PARAMETER_VALUE_INCOMPATIBLE:
            return "PARAMETER_VALUE_INCOMPATIBLE";
          case AnalysisErrorType::PARAMETER_TYPE_INVALID:
            return "PARAMETER_TYPE_INVALID";
          case AnalysisErrorType::PARAMETER_NOT_FOUND:
            return "PARAMETER_NOT_FOUND";
          case AnalysisErrorType::COLUMN_TYPE_MISMATCH:
            return "COLUMN_TYPE_MISMATCH";
          case AnalysisErrorType::COLUMN_GEOGRAPHIC_ROLE_MISMATCH:
            return "COLUMN_GEOGRAPHIC_ROLE_MISMATCH";
          case AnalysisErrorType::COLUMN_REPLACEMENT_MISSING:
            return "COLUMN_REPLACEMENT_MISSING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalysisErrorTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
