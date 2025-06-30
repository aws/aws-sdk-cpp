/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/X12GS05TimeFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace B2BI
  {
    namespace Model
    {
      namespace X12GS05TimeFormatMapper
      {

        static const int HHMM_HASH = HashingUtils::HashString("HHMM");
        static const int HHMMSS_HASH = HashingUtils::HashString("HHMMSS");
        static const int HHMMSSDD_HASH = HashingUtils::HashString("HHMMSSDD");


        X12GS05TimeFormat GetX12GS05TimeFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HHMM_HASH)
          {
            return X12GS05TimeFormat::HHMM;
          }
          else if (hashCode == HHMMSS_HASH)
          {
            return X12GS05TimeFormat::HHMMSS;
          }
          else if (hashCode == HHMMSSDD_HASH)
          {
            return X12GS05TimeFormat::HHMMSSDD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<X12GS05TimeFormat>(hashCode);
          }

          return X12GS05TimeFormat::NOT_SET;
        }

        Aws::String GetNameForX12GS05TimeFormat(X12GS05TimeFormat enumValue)
        {
          switch(enumValue)
          {
          case X12GS05TimeFormat::NOT_SET:
            return {};
          case X12GS05TimeFormat::HHMM:
            return "HHMM";
          case X12GS05TimeFormat::HHMMSS:
            return "HHMMSS";
          case X12GS05TimeFormat::HHMMSSDD:
            return "HHMMSSDD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace X12GS05TimeFormatMapper
    } // namespace Model
  } // namespace B2BI
} // namespace Aws
