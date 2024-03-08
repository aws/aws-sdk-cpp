/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/FormatConfigKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace FormatConfigKeyMapper
      {

        static const int JPEGQuality_HASH = HashingUtils::HashString("JPEGQuality");


        FormatConfigKey GetFormatConfigKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JPEGQuality_HASH)
          {
            return FormatConfigKey::JPEGQuality;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormatConfigKey>(hashCode);
          }

          return FormatConfigKey::NOT_SET;
        }

        Aws::String GetNameForFormatConfigKey(FormatConfigKey enumValue)
        {
          switch(enumValue)
          {
          case FormatConfigKey::NOT_SET:
            return {};
          case FormatConfigKey::JPEGQuality:
            return "JPEGQuality";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatConfigKeyMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
