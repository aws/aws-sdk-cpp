/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/ValidatePolicyFindingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace ValidatePolicyFindingTypeMapper
      {

        static const int ERROR__HASH = HashingUtils::HashString("ERROR");
        static const int SECURITY_WARNING_HASH = HashingUtils::HashString("SECURITY_WARNING");
        static const int SUGGESTION_HASH = HashingUtils::HashString("SUGGESTION");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");


        ValidatePolicyFindingType GetValidatePolicyFindingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ERROR__HASH)
          {
            return ValidatePolicyFindingType::ERROR_;
          }
          else if (hashCode == SECURITY_WARNING_HASH)
          {
            return ValidatePolicyFindingType::SECURITY_WARNING;
          }
          else if (hashCode == SUGGESTION_HASH)
          {
            return ValidatePolicyFindingType::SUGGESTION;
          }
          else if (hashCode == WARNING_HASH)
          {
            return ValidatePolicyFindingType::WARNING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidatePolicyFindingType>(hashCode);
          }

          return ValidatePolicyFindingType::NOT_SET;
        }

        Aws::String GetNameForValidatePolicyFindingType(ValidatePolicyFindingType enumValue)
        {
          switch(enumValue)
          {
          case ValidatePolicyFindingType::NOT_SET:
            return {};
          case ValidatePolicyFindingType::ERROR_:
            return "ERROR";
          case ValidatePolicyFindingType::SECURITY_WARNING:
            return "SECURITY_WARNING";
          case ValidatePolicyFindingType::SUGGESTION:
            return "SUGGESTION";
          case ValidatePolicyFindingType::WARNING:
            return "WARNING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidatePolicyFindingTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
