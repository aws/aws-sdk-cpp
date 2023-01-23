/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/ListEventTypesFilterName.h>
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
      namespace ListEventTypesFilterNameMapper
      {

        static const int RESOURCE_TYPE_HASH = HashingUtils::HashString("RESOURCE_TYPE");
        static const int SERVICE_NAME_HASH = HashingUtils::HashString("SERVICE_NAME");


        ListEventTypesFilterName GetListEventTypesFilterNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_TYPE_HASH)
          {
            return ListEventTypesFilterName::RESOURCE_TYPE;
          }
          else if (hashCode == SERVICE_NAME_HASH)
          {
            return ListEventTypesFilterName::SERVICE_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListEventTypesFilterName>(hashCode);
          }

          return ListEventTypesFilterName::NOT_SET;
        }

        Aws::String GetNameForListEventTypesFilterName(ListEventTypesFilterName enumValue)
        {
          switch(enumValue)
          {
          case ListEventTypesFilterName::RESOURCE_TYPE:
            return "RESOURCE_TYPE";
          case ListEventTypesFilterName::SERVICE_NAME:
            return "SERVICE_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListEventTypesFilterNameMapper
    } // namespace Model
  } // namespace CodeStarNotifications
} // namespace Aws
