/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/FlattenedElement.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatchLogs
  {
    namespace Model
    {
      namespace FlattenedElementMapper
      {

        static const int first_HASH = HashingUtils::HashString("first");
        static const int last_HASH = HashingUtils::HashString("last");


        FlattenedElement GetFlattenedElementForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == first_HASH)
          {
            return FlattenedElement::first;
          }
          else if (hashCode == last_HASH)
          {
            return FlattenedElement::last;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FlattenedElement>(hashCode);
          }

          return FlattenedElement::NOT_SET;
        }

        Aws::String GetNameForFlattenedElement(FlattenedElement enumValue)
        {
          switch(enumValue)
          {
          case FlattenedElement::NOT_SET:
            return {};
          case FlattenedElement::first:
            return "first";
          case FlattenedElement::last:
            return "last";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FlattenedElementMapper
    } // namespace Model
  } // namespace CloudWatchLogs
} // namespace Aws
