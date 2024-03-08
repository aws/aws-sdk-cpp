/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ListUpdateMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace ListUpdateModeMapper
      {

        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
        static const int APPEND_HASH = HashingUtils::HashString("APPEND");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        ListUpdateMode GetListUpdateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLACE_HASH)
          {
            return ListUpdateMode::REPLACE;
          }
          else if (hashCode == APPEND_HASH)
          {
            return ListUpdateMode::APPEND;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return ListUpdateMode::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListUpdateMode>(hashCode);
          }

          return ListUpdateMode::NOT_SET;
        }

        Aws::String GetNameForListUpdateMode(ListUpdateMode enumValue)
        {
          switch(enumValue)
          {
          case ListUpdateMode::NOT_SET:
            return {};
          case ListUpdateMode::REPLACE:
            return "REPLACE";
          case ListUpdateMode::APPEND:
            return "APPEND";
          case ListUpdateMode::REMOVE:
            return "REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListUpdateModeMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
