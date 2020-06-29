/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/FindingsFilterAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace FindingsFilterActionMapper
      {

        static const int ARCHIVE_HASH = HashingUtils::HashString("ARCHIVE");
        static const int NOOP_HASH = HashingUtils::HashString("NOOP");


        FindingsFilterAction GetFindingsFilterActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARCHIVE_HASH)
          {
            return FindingsFilterAction::ARCHIVE;
          }
          else if (hashCode == NOOP_HASH)
          {
            return FindingsFilterAction::NOOP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingsFilterAction>(hashCode);
          }

          return FindingsFilterAction::NOT_SET;
        }

        Aws::String GetNameForFindingsFilterAction(FindingsFilterAction enumValue)
        {
          switch(enumValue)
          {
          case FindingsFilterAction::ARCHIVE:
            return "ARCHIVE";
          case FindingsFilterAction::NOOP:
            return "NOOP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingsFilterActionMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
