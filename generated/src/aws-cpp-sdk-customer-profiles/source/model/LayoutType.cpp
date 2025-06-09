/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/LayoutType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace LayoutTypeMapper
      {

        static const int PROFILE_EXPLORER_HASH = HashingUtils::HashString("PROFILE_EXPLORER");


        LayoutType GetLayoutTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PROFILE_EXPLORER_HASH)
          {
            return LayoutType::PROFILE_EXPLORER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LayoutType>(hashCode);
          }

          return LayoutType::NOT_SET;
        }

        Aws::String GetNameForLayoutType(LayoutType enumValue)
        {
          switch(enumValue)
          {
          case LayoutType::NOT_SET:
            return {};
          case LayoutType::PROFILE_EXPLORER:
            return "PROFILE_EXPLORER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LayoutTypeMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
