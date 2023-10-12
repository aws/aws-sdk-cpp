/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ChangeAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ChangeActionMapper
      {

        static constexpr uint32_t PUBLISH_HASH = ConstExprHashingUtils::HashString("PUBLISH");
        static constexpr uint32_t UNPUBLISH_HASH = ConstExprHashingUtils::HashString("UNPUBLISH");


        ChangeAction GetChangeActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLISH_HASH)
          {
            return ChangeAction::PUBLISH;
          }
          else if (hashCode == UNPUBLISH_HASH)
          {
            return ChangeAction::UNPUBLISH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeAction>(hashCode);
          }

          return ChangeAction::NOT_SET;
        }

        Aws::String GetNameForChangeAction(ChangeAction enumValue)
        {
          switch(enumValue)
          {
          case ChangeAction::NOT_SET:
            return {};
          case ChangeAction::PUBLISH:
            return "PUBLISH";
          case ChangeAction::UNPUBLISH:
            return "UNPUBLISH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChangeActionMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
