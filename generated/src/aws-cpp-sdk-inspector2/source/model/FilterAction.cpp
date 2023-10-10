/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/FilterAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace FilterActionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SUPPRESS_HASH = HashingUtils::HashString("SUPPRESS");


        FilterAction GetFilterActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return FilterAction::NONE;
          }
          else if (hashCode == SUPPRESS_HASH)
          {
            return FilterAction::SUPPRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterAction>(hashCode);
          }

          return FilterAction::NOT_SET;
        }

        Aws::String GetNameForFilterAction(FilterAction enumValue)
        {
          switch(enumValue)
          {
          case FilterAction::NOT_SET:
            return {};
          case FilterAction::NONE:
            return "NONE";
          case FilterAction::SUPPRESS:
            return "SUPPRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterActionMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
