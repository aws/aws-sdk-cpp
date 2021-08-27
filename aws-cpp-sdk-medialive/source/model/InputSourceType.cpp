/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/InputSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace InputSourceTypeMapper
      {

        static const int STATIC__HASH = HashingUtils::HashString("STATIC");
        static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");


        InputSourceType GetInputSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return InputSourceType::STATIC_;
          }
          else if (hashCode == DYNAMIC_HASH)
          {
            return InputSourceType::DYNAMIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputSourceType>(hashCode);
          }

          return InputSourceType::NOT_SET;
        }

        Aws::String GetNameForInputSourceType(InputSourceType enumValue)
        {
          switch(enumValue)
          {
          case InputSourceType::STATIC_:
            return "STATIC";
          case InputSourceType::DYNAMIC:
            return "DYNAMIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputSourceTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
