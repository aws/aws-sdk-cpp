/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/FormatToHeaderKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Omics
  {
    namespace Model
    {
      namespace FormatToHeaderKeyMapper
      {

        static const int CHR_HASH = HashingUtils::HashString("CHR");
        static const int START_HASH = HashingUtils::HashString("START");
        static const int END_HASH = HashingUtils::HashString("END");
        static const int REF_HASH = HashingUtils::HashString("REF");
        static const int ALT_HASH = HashingUtils::HashString("ALT");
        static const int POS_HASH = HashingUtils::HashString("POS");


        FormatToHeaderKey GetFormatToHeaderKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CHR_HASH)
          {
            return FormatToHeaderKey::CHR;
          }
          else if (hashCode == START_HASH)
          {
            return FormatToHeaderKey::START;
          }
          else if (hashCode == END_HASH)
          {
            return FormatToHeaderKey::END;
          }
          else if (hashCode == REF_HASH)
          {
            return FormatToHeaderKey::REF;
          }
          else if (hashCode == ALT_HASH)
          {
            return FormatToHeaderKey::ALT;
          }
          else if (hashCode == POS_HASH)
          {
            return FormatToHeaderKey::POS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormatToHeaderKey>(hashCode);
          }

          return FormatToHeaderKey::NOT_SET;
        }

        Aws::String GetNameForFormatToHeaderKey(FormatToHeaderKey enumValue)
        {
          switch(enumValue)
          {
          case FormatToHeaderKey::CHR:
            return "CHR";
          case FormatToHeaderKey::START:
            return "START";
          case FormatToHeaderKey::END:
            return "END";
          case FormatToHeaderKey::REF:
            return "REF";
          case FormatToHeaderKey::ALT:
            return "ALT";
          case FormatToHeaderKey::POS:
            return "POS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormatToHeaderKeyMapper
    } // namespace Model
  } // namespace Omics
} // namespace Aws
