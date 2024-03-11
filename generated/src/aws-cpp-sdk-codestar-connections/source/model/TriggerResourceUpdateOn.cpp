/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/TriggerResourceUpdateOn.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarconnections
  {
    namespace Model
    {
      namespace TriggerResourceUpdateOnMapper
      {

        static const int ANY_CHANGE_HASH = HashingUtils::HashString("ANY_CHANGE");
        static const int FILE_CHANGE_HASH = HashingUtils::HashString("FILE_CHANGE");


        TriggerResourceUpdateOn GetTriggerResourceUpdateOnForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANY_CHANGE_HASH)
          {
            return TriggerResourceUpdateOn::ANY_CHANGE;
          }
          else if (hashCode == FILE_CHANGE_HASH)
          {
            return TriggerResourceUpdateOn::FILE_CHANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TriggerResourceUpdateOn>(hashCode);
          }

          return TriggerResourceUpdateOn::NOT_SET;
        }

        Aws::String GetNameForTriggerResourceUpdateOn(TriggerResourceUpdateOn enumValue)
        {
          switch(enumValue)
          {
          case TriggerResourceUpdateOn::NOT_SET:
            return {};
          case TriggerResourceUpdateOn::ANY_CHANGE:
            return "ANY_CHANGE";
          case TriggerResourceUpdateOn::FILE_CHANGE:
            return "FILE_CHANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TriggerResourceUpdateOnMapper
    } // namespace Model
  } // namespace CodeStarconnections
} // namespace Aws
