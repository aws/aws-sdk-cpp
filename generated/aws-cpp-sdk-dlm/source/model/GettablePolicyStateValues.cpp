/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/GettablePolicyStateValues.h>
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
      namespace GettablePolicyStateValuesMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        GettablePolicyStateValues GetGettablePolicyStateValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return GettablePolicyStateValues::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return GettablePolicyStateValues::DISABLED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return GettablePolicyStateValues::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GettablePolicyStateValues>(hashCode);
          }

          return GettablePolicyStateValues::NOT_SET;
        }

        Aws::String GetNameForGettablePolicyStateValues(GettablePolicyStateValues enumValue)
        {
          switch(enumValue)
          {
          case GettablePolicyStateValues::ENABLED:
            return "ENABLED";
          case GettablePolicyStateValues::DISABLED:
            return "DISABLED";
          case GettablePolicyStateValues::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GettablePolicyStateValuesMapper
    } // namespace Model
  } // namespace DLM
} // namespace Aws
