/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/BytesMeasure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace BytesMeasureMapper
      {

        static const int KILOBYTES_HASH = HashingUtils::HashString("KILOBYTES");


        BytesMeasure GetBytesMeasureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KILOBYTES_HASH)
          {
            return BytesMeasure::KILOBYTES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BytesMeasure>(hashCode);
          }

          return BytesMeasure::NOT_SET;
        }

        Aws::String GetNameForBytesMeasure(BytesMeasure enumValue)
        {
          switch(enumValue)
          {
          case BytesMeasure::KILOBYTES:
            return "KILOBYTES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BytesMeasureMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
