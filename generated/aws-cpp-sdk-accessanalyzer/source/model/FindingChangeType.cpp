/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/FindingChangeType.h>
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
      namespace FindingChangeTypeMapper
      {

        static const int CHANGED_HASH = HashingUtils::HashString("CHANGED");
        static const int NEW__HASH = HashingUtils::HashString("NEW");
        static const int UNCHANGED_HASH = HashingUtils::HashString("UNCHANGED");


        FindingChangeType GetFindingChangeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHANGED_HASH)
          {
            return FindingChangeType::CHANGED;
          }
          else if (hashCode == NEW__HASH)
          {
            return FindingChangeType::NEW_;
          }
          else if (hashCode == UNCHANGED_HASH)
          {
            return FindingChangeType::UNCHANGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FindingChangeType>(hashCode);
          }

          return FindingChangeType::NOT_SET;
        }

        Aws::String GetNameForFindingChangeType(FindingChangeType enumValue)
        {
          switch(enumValue)
          {
          case FindingChangeType::CHANGED:
            return "CHANGED";
          case FindingChangeType::NEW_:
            return "NEW";
          case FindingChangeType::UNCHANGED:
            return "UNCHANGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FindingChangeTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
