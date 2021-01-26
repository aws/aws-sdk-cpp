/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264DynamicSubGop.h>
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
      namespace H264DynamicSubGopMapper
      {

        static const int ADAPTIVE_HASH = HashingUtils::HashString("ADAPTIVE");
        static const int STATIC__HASH = HashingUtils::HashString("STATIC");


        H264DynamicSubGop GetH264DynamicSubGopForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADAPTIVE_HASH)
          {
            return H264DynamicSubGop::ADAPTIVE;
          }
          else if (hashCode == STATIC__HASH)
          {
            return H264DynamicSubGop::STATIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264DynamicSubGop>(hashCode);
          }

          return H264DynamicSubGop::NOT_SET;
        }

        Aws::String GetNameForH264DynamicSubGop(H264DynamicSubGop enumValue)
        {
          switch(enumValue)
          {
          case H264DynamicSubGop::ADAPTIVE:
            return "ADAPTIVE";
          case H264DynamicSubGop::STATIC_:
            return "STATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264DynamicSubGopMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
