/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/VisibilityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace VisibilityTypeMapper
      {

        static const int PUBLIC__HASH = HashingUtils::HashString("PUBLIC");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");


        VisibilityType GetVisibilityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PUBLIC__HASH)
          {
            return VisibilityType::PUBLIC_;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return VisibilityType::PRIVATE_;
          }
          else if (hashCode == SHARED_HASH)
          {
            return VisibilityType::SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VisibilityType>(hashCode);
          }

          return VisibilityType::NOT_SET;
        }

        Aws::String GetNameForVisibilityType(VisibilityType enumValue)
        {
          switch(enumValue)
          {
          case VisibilityType::PUBLIC_:
            return "PUBLIC";
          case VisibilityType::PRIVATE_:
            return "PRIVATE";
          case VisibilityType::SHARED:
            return "SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VisibilityTypeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
