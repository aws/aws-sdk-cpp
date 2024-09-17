/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ViewUpdateAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace ViewUpdateActionMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
        static const int ADD_OR_REPLACE_HASH = HashingUtils::HashString("ADD_OR_REPLACE");
        static const int DROP_HASH = HashingUtils::HashString("DROP");


        ViewUpdateAction GetViewUpdateActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return ViewUpdateAction::ADD;
          }
          else if (hashCode == REPLACE_HASH)
          {
            return ViewUpdateAction::REPLACE;
          }
          else if (hashCode == ADD_OR_REPLACE_HASH)
          {
            return ViewUpdateAction::ADD_OR_REPLACE;
          }
          else if (hashCode == DROP_HASH)
          {
            return ViewUpdateAction::DROP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViewUpdateAction>(hashCode);
          }

          return ViewUpdateAction::NOT_SET;
        }

        Aws::String GetNameForViewUpdateAction(ViewUpdateAction enumValue)
        {
          switch(enumValue)
          {
          case ViewUpdateAction::NOT_SET:
            return {};
          case ViewUpdateAction::ADD:
            return "ADD";
          case ViewUpdateAction::REPLACE:
            return "REPLACE";
          case ViewUpdateAction::ADD_OR_REPLACE:
            return "ADD_OR_REPLACE";
          case ViewUpdateAction::DROP:
            return "DROP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViewUpdateActionMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
