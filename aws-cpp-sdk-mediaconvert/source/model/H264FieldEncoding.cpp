/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264FieldEncoding.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace H264FieldEncodingMapper
      {

        static const int PAFF_HASH = HashingUtils::HashString("PAFF");
        static const int FORCE_FIELD_HASH = HashingUtils::HashString("FORCE_FIELD");


        H264FieldEncoding GetH264FieldEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAFF_HASH)
          {
            return H264FieldEncoding::PAFF;
          }
          else if (hashCode == FORCE_FIELD_HASH)
          {
            return H264FieldEncoding::FORCE_FIELD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264FieldEncoding>(hashCode);
          }

          return H264FieldEncoding::NOT_SET;
        }

        Aws::String GetNameForH264FieldEncoding(H264FieldEncoding enumValue)
        {
          switch(enumValue)
          {
          case H264FieldEncoding::PAFF:
            return "PAFF";
          case H264FieldEncoding::FORCE_FIELD:
            return "FORCE_FIELD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264FieldEncodingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
