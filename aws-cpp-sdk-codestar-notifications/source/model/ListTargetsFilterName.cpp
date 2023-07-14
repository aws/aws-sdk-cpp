/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/ListTargetsFilterName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeStarNotifications
  {
    namespace Model
    {
      namespace ListTargetsFilterNameMapper
      {

        static const int TARGET_TYPE_HASH = HashingUtils::HashString("TARGET_TYPE");
        static const int TARGET_ADDRESS_HASH = HashingUtils::HashString("TARGET_ADDRESS");
        static const int TARGET_STATUS_HASH = HashingUtils::HashString("TARGET_STATUS");


        ListTargetsFilterName GetListTargetsFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TARGET_TYPE_HASH)
          {
            return ListTargetsFilterName::TARGET_TYPE;
          }
          else if (hashCode == TARGET_ADDRESS_HASH)
          {
            return ListTargetsFilterName::TARGET_ADDRESS;
          }
          else if (hashCode == TARGET_STATUS_HASH)
          {
            return ListTargetsFilterName::TARGET_STATUS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListTargetsFilterName>(hashCode);
          }

          return ListTargetsFilterName::NOT_SET;
        }

        Aws::String GetNameForListTargetsFilterName(ListTargetsFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListTargetsFilterName::TARGET_TYPE:
            return "TARGET_TYPE";
          case ListTargetsFilterName::TARGET_ADDRESS:
            return "TARGET_ADDRESS";
          case ListTargetsFilterName::TARGET_STATUS:
            return "TARGET_STATUS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListTargetsFilterNameMapper
    } // namespace Model
  } // namespace CodeStarNotifications
} // namespace Aws
