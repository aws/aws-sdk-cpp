/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/alexaforbusiness/model/CommsProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AlexaForBusiness
  {
    namespace Model
    {
      namespace CommsProtocolMapper
      {

        static const int SIP_HASH = HashingUtils::HashString("SIP");
        static const int SIPS_HASH = HashingUtils::HashString("SIPS");
        static const int H323_HASH = HashingUtils::HashString("H323");


        CommsProtocol GetCommsProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIP_HASH)
          {
            return CommsProtocol::SIP;
          }
          else if (hashCode == SIPS_HASH)
          {
            return CommsProtocol::SIPS;
          }
          else if (hashCode == H323_HASH)
          {
            return CommsProtocol::H323;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommsProtocol>(hashCode);
          }

          return CommsProtocol::NOT_SET;
        }

        Aws::String GetNameForCommsProtocol(CommsProtocol enumValue)
        {
          switch(enumValue)
          {
          case CommsProtocol::SIP:
            return "SIP";
          case CommsProtocol::SIPS:
            return "SIPS";
          case CommsProtocol::H323:
            return "H323";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CommsProtocolMapper
    } // namespace Model
  } // namespace AlexaForBusiness
} // namespace Aws
