/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/RadiusAuthenticationProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace RadiusAuthenticationProtocolMapper
      {

        static constexpr uint32_t PAP_HASH = ConstExprHashingUtils::HashString("PAP");
        static constexpr uint32_t CHAP_HASH = ConstExprHashingUtils::HashString("CHAP");
        static constexpr uint32_t MS_CHAPv1_HASH = ConstExprHashingUtils::HashString("MS-CHAPv1");
        static constexpr uint32_t MS_CHAPv2_HASH = ConstExprHashingUtils::HashString("MS-CHAPv2");


        RadiusAuthenticationProtocol GetRadiusAuthenticationProtocolForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PAP_HASH)
          {
            return RadiusAuthenticationProtocol::PAP;
          }
          else if (hashCode == CHAP_HASH)
          {
            return RadiusAuthenticationProtocol::CHAP;
          }
          else if (hashCode == MS_CHAPv1_HASH)
          {
            return RadiusAuthenticationProtocol::MS_CHAPv1;
          }
          else if (hashCode == MS_CHAPv2_HASH)
          {
            return RadiusAuthenticationProtocol::MS_CHAPv2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RadiusAuthenticationProtocol>(hashCode);
          }

          return RadiusAuthenticationProtocol::NOT_SET;
        }

        Aws::String GetNameForRadiusAuthenticationProtocol(RadiusAuthenticationProtocol enumValue)
        {
          switch(enumValue)
          {
          case RadiusAuthenticationProtocol::NOT_SET:
            return {};
          case RadiusAuthenticationProtocol::PAP:
            return "PAP";
          case RadiusAuthenticationProtocol::CHAP:
            return "CHAP";
          case RadiusAuthenticationProtocol::MS_CHAPv1:
            return "MS-CHAPv1";
          case RadiusAuthenticationProtocol::MS_CHAPv2:
            return "MS-CHAPv2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RadiusAuthenticationProtocolMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
