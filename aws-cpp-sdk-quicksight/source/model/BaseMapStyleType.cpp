/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BaseMapStyleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace BaseMapStyleTypeMapper
      {

        static const int LIGHT_GRAY_HASH = HashingUtils::HashString("LIGHT_GRAY");
        static const int DARK_GRAY_HASH = HashingUtils::HashString("DARK_GRAY");
        static const int STREET_HASH = HashingUtils::HashString("STREET");
        static const int IMAGERY_HASH = HashingUtils::HashString("IMAGERY");


        BaseMapStyleType GetBaseMapStyleTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIGHT_GRAY_HASH)
          {
            return BaseMapStyleType::LIGHT_GRAY;
          }
          else if (hashCode == DARK_GRAY_HASH)
          {
            return BaseMapStyleType::DARK_GRAY;
          }
          else if (hashCode == STREET_HASH)
          {
            return BaseMapStyleType::STREET;
          }
          else if (hashCode == IMAGERY_HASH)
          {
            return BaseMapStyleType::IMAGERY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BaseMapStyleType>(hashCode);
          }

          return BaseMapStyleType::NOT_SET;
        }

        Aws::String GetNameForBaseMapStyleType(BaseMapStyleType enumValue)
        {
          switch(enumValue)
          {
          case BaseMapStyleType::LIGHT_GRAY:
            return "LIGHT_GRAY";
          case BaseMapStyleType::DARK_GRAY:
            return "DARK_GRAY";
          case BaseMapStyleType::STREET:
            return "STREET";
          case BaseMapStyleType::IMAGERY:
            return "IMAGERY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BaseMapStyleTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
