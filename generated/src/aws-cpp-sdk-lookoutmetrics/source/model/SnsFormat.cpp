/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/SnsFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace SnsFormatMapper
      {

        static const int LONG_TEXT_HASH = HashingUtils::HashString("LONG_TEXT");
        static const int SHORT_TEXT_HASH = HashingUtils::HashString("SHORT_TEXT");
        static const int JSON_HASH = HashingUtils::HashString("JSON");


        SnsFormat GetSnsFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LONG_TEXT_HASH)
          {
            return SnsFormat::LONG_TEXT;
          }
          else if (hashCode == SHORT_TEXT_HASH)
          {
            return SnsFormat::SHORT_TEXT;
          }
          else if (hashCode == JSON_HASH)
          {
            return SnsFormat::JSON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnsFormat>(hashCode);
          }

          return SnsFormat::NOT_SET;
        }

        Aws::String GetNameForSnsFormat(SnsFormat enumValue)
        {
          switch(enumValue)
          {
          case SnsFormat::NOT_SET:
            return {};
          case SnsFormat::LONG_TEXT:
            return "LONG_TEXT";
          case SnsFormat::SHORT_TEXT:
            return "SHORT_TEXT";
          case SnsFormat::JSON:
            return "JSON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnsFormatMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
