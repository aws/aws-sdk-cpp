/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264EntropyEncoding.h>
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
      namespace H264EntropyEncodingMapper
      {

        static const int CABAC_HASH = HashingUtils::HashString("CABAC");
        static const int CAVLC_HASH = HashingUtils::HashString("CAVLC");


        H264EntropyEncoding GetH264EntropyEncodingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CABAC_HASH)
          {
            return H264EntropyEncoding::CABAC;
          }
          else if (hashCode == CAVLC_HASH)
          {
            return H264EntropyEncoding::CAVLC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264EntropyEncoding>(hashCode);
          }

          return H264EntropyEncoding::NOT_SET;
        }

        Aws::String GetNameForH264EntropyEncoding(H264EntropyEncoding enumValue)
        {
          switch(enumValue)
          {
          case H264EntropyEncoding::CABAC:
            return "CABAC";
          case H264EntropyEncoding::CAVLC:
            return "CAVLC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264EntropyEncodingMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
