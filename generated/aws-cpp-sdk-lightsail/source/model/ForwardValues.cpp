/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ForwardValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ForwardValuesMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int allow_list_HASH = HashingUtils::HashString("allow-list");
        static const int all_HASH = HashingUtils::HashString("all");


        ForwardValues GetForwardValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return ForwardValues::none;
          }
          else if (hashCode == allow_list_HASH)
          {
            return ForwardValues::allow_list;
          }
          else if (hashCode == all_HASH)
          {
            return ForwardValues::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ForwardValues>(hashCode);
          }

          return ForwardValues::NOT_SET;
        }

        Aws::String GetNameForForwardValues(ForwardValues enumValue)
        {
          switch(enumValue)
          {
          case ForwardValues::none:
            return "none";
          case ForwardValues::allow_list:
            return "allow-list";
          case ForwardValues::all:
            return "all";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ForwardValuesMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
