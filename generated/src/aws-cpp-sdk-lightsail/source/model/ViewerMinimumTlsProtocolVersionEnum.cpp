/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/ViewerMinimumTlsProtocolVersionEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace ViewerMinimumTlsProtocolVersionEnumMapper
      {

        static const int TLSv1_1_2016_HASH = HashingUtils::HashString("TLSv1.1_2016");
        static const int TLSv1_2_2018_HASH = HashingUtils::HashString("TLSv1.2_2018");
        static const int TLSv1_2_2019_HASH = HashingUtils::HashString("TLSv1.2_2019");
        static const int TLSv1_2_2021_HASH = HashingUtils::HashString("TLSv1.2_2021");


        ViewerMinimumTlsProtocolVersionEnum GetViewerMinimumTlsProtocolVersionEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLSv1_1_2016_HASH)
          {
            return ViewerMinimumTlsProtocolVersionEnum::TLSv1_1_2016;
          }
          else if (hashCode == TLSv1_2_2018_HASH)
          {
            return ViewerMinimumTlsProtocolVersionEnum::TLSv1_2_2018;
          }
          else if (hashCode == TLSv1_2_2019_HASH)
          {
            return ViewerMinimumTlsProtocolVersionEnum::TLSv1_2_2019;
          }
          else if (hashCode == TLSv1_2_2021_HASH)
          {
            return ViewerMinimumTlsProtocolVersionEnum::TLSv1_2_2021;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ViewerMinimumTlsProtocolVersionEnum>(hashCode);
          }

          return ViewerMinimumTlsProtocolVersionEnum::NOT_SET;
        }

        Aws::String GetNameForViewerMinimumTlsProtocolVersionEnum(ViewerMinimumTlsProtocolVersionEnum enumValue)
        {
          switch(enumValue)
          {
          case ViewerMinimumTlsProtocolVersionEnum::NOT_SET:
            return {};
          case ViewerMinimumTlsProtocolVersionEnum::TLSv1_1_2016:
            return "TLSv1.1_2016";
          case ViewerMinimumTlsProtocolVersionEnum::TLSv1_2_2018:
            return "TLSv1.2_2018";
          case ViewerMinimumTlsProtocolVersionEnum::TLSv1_2_2019:
            return "TLSv1.2_2019";
          case ViewerMinimumTlsProtocolVersionEnum::TLSv1_2_2021:
            return "TLSv1.2_2021";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ViewerMinimumTlsProtocolVersionEnumMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
