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

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        GettablePolicyStateValues GetGettablePolicyStateValuesForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case GettablePolicyStateValues::NOT_SET:
            return {};
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
