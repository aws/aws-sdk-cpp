﻿/*
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

#include <aws/medialive/model/M2tsPcrControl.h>
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
      namespace M2tsPcrControlMapper
      {

        static const int CONFIGURED_PCR_PERIOD_HASH = HashingUtils::HashString("CONFIGURED_PCR_PERIOD");
        static const int PCR_EVERY_PES_PACKET_HASH = HashingUtils::HashString("PCR_EVERY_PES_PACKET");


        M2tsPcrControl GetM2tsPcrControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIGURED_PCR_PERIOD_HASH)
          {
            return M2tsPcrControl::CONFIGURED_PCR_PERIOD;
          }
          else if (hashCode == PCR_EVERY_PES_PACKET_HASH)
          {
            return M2tsPcrControl::PCR_EVERY_PES_PACKET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsPcrControl>(hashCode);
          }

          return M2tsPcrControl::NOT_SET;
        }

        Aws::String GetNameForM2tsPcrControl(M2tsPcrControl enumValue)
        {
          switch(enumValue)
          {
          case M2tsPcrControl::CONFIGURED_PCR_PERIOD:
            return "CONFIGURED_PCR_PERIOD";
          case M2tsPcrControl::PCR_EVERY_PES_PACKET:
            return "PCR_EVERY_PES_PACKET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace M2tsPcrControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
