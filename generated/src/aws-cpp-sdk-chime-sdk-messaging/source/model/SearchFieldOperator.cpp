/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/SearchFieldOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMessaging
  {
    namespace Model
    {
      namespace SearchFieldOperatorMapper
      {

        static constexpr uint32_t EQUALS_HASH = ConstExprHashingUtils::HashString("EQUALS");
        static constexpr uint32_t INCLUDES_HASH = ConstExprHashingUtils::HashString("INCLUDES");


        SearchFieldOperator GetSearchFieldOperatorForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EQUALS_HASH)
          {
            return SearchFieldOperator::EQUALS;
          }
          else if (hashCode == INCLUDES_HASH)
          {
            return SearchFieldOperator::INCLUDES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchFieldOperator>(hashCode);
          }

          return SearchFieldOperator::NOT_SET;
        }

        Aws::String GetNameForSearchFieldOperator(SearchFieldOperator enumValue)
        {
          switch(enumValue)
          {
          case SearchFieldOperator::NOT_SET:
            return {};
          case SearchFieldOperator::EQUALS:
            return "EQUALS";
          case SearchFieldOperator::INCLUDES:
            return "INCLUDES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchFieldOperatorMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
