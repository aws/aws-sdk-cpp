/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265Profile.h>
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
      namespace H265ProfileMapper
      {

        static const int MAIN_HASH = HashingUtils::HashString("MAIN");
        static const int MAIN_10BIT_HASH = HashingUtils::HashString("MAIN_10BIT");


        H265Profile GetH265ProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MAIN_HASH)
          {
            return H265Profile::MAIN;
          }
          else if (hashCode == MAIN_10BIT_HASH)
          {
            return H265Profile::MAIN_10BIT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265Profile>(hashCode);
          }

          return H265Profile::NOT_SET;
        }

        Aws::String GetNameForH265Profile(H265Profile enumValue)
        {
          switch(enumValue)
          {
          case H265Profile::MAIN:
            return "MAIN";
          case H265Profile::MAIN_10BIT:
            return "MAIN_10BIT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265ProfileMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
