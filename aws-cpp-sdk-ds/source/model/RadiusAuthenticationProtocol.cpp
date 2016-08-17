/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int PAP_HASH = HashingUtils::HashString("PAP");
        static const int CHAP_HASH = HashingUtils::HashString("CHAP");
        static const int MS_CHAPv1_HASH = HashingUtils::HashString("MS-CHAPv1");
        static const int MS_CHAPv2_HASH = HashingUtils::HashString("MS-CHAPv2");


        RadiusAuthenticationProtocol GetRadiusAuthenticationProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace RadiusAuthenticationProtocolMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
