﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/ItemSelection.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFront
  {
    namespace Model
    {
      namespace ItemSelectionMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int whitelist_HASH = HashingUtils::HashString("whitelist");
        static const int all_HASH = HashingUtils::HashString("all");


        ItemSelection GetItemSelectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return ItemSelection::none;
          }
          else if (hashCode == whitelist_HASH)
          {
            return ItemSelection::whitelist;
          }
          else if (hashCode == all_HASH)
          {
            return ItemSelection::all;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ItemSelection>(hashCode);
          }

          return ItemSelection::NOT_SET;
        }

        Aws::String GetNameForItemSelection(ItemSelection enumValue)
        {
          switch(enumValue)
          {
          case ItemSelection::NOT_SET:
            return {};
          case ItemSelection::none:
            return "none";
          case ItemSelection::whitelist:
            return "whitelist";
          case ItemSelection::all:
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

      } // namespace ItemSelectionMapper
    } // namespace Model
  } // namespace CloudFront
} // namespace Aws
