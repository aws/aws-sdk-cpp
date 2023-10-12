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

        static constexpr uint32_t RESOURCE_TYPE_HASH = ConstExprHashingUtils::HashString("RESOURCE_TYPE");
        static constexpr uint32_t SERVICE_NAME_HASH = ConstExprHashingUtils::HashString("SERVICE_NAME");


        ListEventTypesFilterName GetListEventTypesFilterNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ListEventTypesFilterName::NOT_SET:
            return {};
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
