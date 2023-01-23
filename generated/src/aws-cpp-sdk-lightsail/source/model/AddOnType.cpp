/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AddOnType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace AddOnTypeMapper
      {

        static const int AutoSnapshot_HASH = HashingUtils::HashString("AutoSnapshot");


        AddOnType GetAddOnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AutoSnapshot_HASH)
          {
            return AddOnType::AutoSnapshot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AddOnType>(hashCode);
          }

          return AddOnType::NOT_SET;
        }

        Aws::String GetNameForAddOnType(AddOnType enumValue)
        {
          switch(enumValue)
          {
          case AddOnType::AutoSnapshot:
            return "AutoSnapshot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AddOnTypeMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
