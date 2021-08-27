/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/NielsenActiveWatermarkProcessType.h>
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
      namespace NielsenActiveWatermarkProcessTypeMapper
      {

        static const int NAES2_AND_NW_HASH = HashingUtils::HashString("NAES2_AND_NW");
        static const int CBET_HASH = HashingUtils::HashString("CBET");
        static const int NAES2_AND_NW_AND_CBET_HASH = HashingUtils::HashString("NAES2_AND_NW_AND_CBET");


        NielsenActiveWatermarkProcessType GetNielsenActiveWatermarkProcessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAES2_AND_NW_HASH)
          {
            return NielsenActiveWatermarkProcessType::NAES2_AND_NW;
          }
          else if (hashCode == CBET_HASH)
          {
            return NielsenActiveWatermarkProcessType::CBET;
          }
          else if (hashCode == NAES2_AND_NW_AND_CBET_HASH)
          {
            return NielsenActiveWatermarkProcessType::NAES2_AND_NW_AND_CBET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenActiveWatermarkProcessType>(hashCode);
          }

          return NielsenActiveWatermarkProcessType::NOT_SET;
        }

        Aws::String GetNameForNielsenActiveWatermarkProcessType(NielsenActiveWatermarkProcessType enumValue)
        {
          switch(enumValue)
          {
          case NielsenActiveWatermarkProcessType::NAES2_AND_NW:
            return "NAES2_AND_NW";
          case NielsenActiveWatermarkProcessType::CBET:
            return "CBET";
          case NielsenActiveWatermarkProcessType::NAES2_AND_NW_AND_CBET:
            return "NAES2_AND_NW_AND_CBET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NielsenActiveWatermarkProcessTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
