/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/PolicyLanguageValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DLM
  {
    namespace Model
    {
      namespace PolicyLanguageValuesMapper
      {

        static const int SIMPLIFIED_HASH = HashingUtils::HashString("SIMPLIFIED");
        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");


        PolicyLanguageValues GetPolicyLanguageValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIMPLIFIED_HASH)
          {
            return PolicyLanguageValues::SIMPLIFIED;
          }
          else if (hashCode == STANDARD_HASH)
          {
            return PolicyLanguageValues::STANDARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyLanguageValues>(hashCode);
          }

          return PolicyLanguageValues::NOT_SET;
        }

        Aws::String GetNameForPolicyLanguageValues(PolicyLanguageValues enumValue)
        {
          switch(enumValue)
          {
          case PolicyLanguageValues::NOT_SET:
            return {};
          case PolicyLanguageValues::SIMPLIFIED:
            return "SIMPLIFIED";
          case PolicyLanguageValues::STANDARD:
            return "STANDARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyLanguageValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
