/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-notifications/model/DetailType.h>
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
      namespace DetailTypeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int FULL_HASH = HashingUtils::HashString("FULL");


        DetailType GetDetailTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return DetailType::BASIC;
          }
          else if (hashCode == FULL_HASH)
          {
            return DetailType::FULL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailType>(hashCode);
          }

          return DetailType::NOT_SET;
        }

        Aws::String GetNameForDetailType(DetailType enumValue)
        {
          switch(enumValue)
          {
          case DetailType::BASIC:
            return "BASIC";
          case DetailType::FULL:
            return "FULL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetailTypeMapper
    } // namespace Model
  } // namespace CodeStarNotifications
} // namespace Aws
