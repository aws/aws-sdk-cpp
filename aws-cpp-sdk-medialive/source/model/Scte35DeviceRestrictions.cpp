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

#include <aws/medialive/model/Scte35DeviceRestrictions.h>
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
      namespace Scte35DeviceRestrictionsMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int RESTRICT_GROUP0_HASH = HashingUtils::HashString("RESTRICT_GROUP0");
        static const int RESTRICT_GROUP1_HASH = HashingUtils::HashString("RESTRICT_GROUP1");
        static const int RESTRICT_GROUP2_HASH = HashingUtils::HashString("RESTRICT_GROUP2");


        Scte35DeviceRestrictions GetScte35DeviceRestrictionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return Scte35DeviceRestrictions::NONE;
          }
          else if (hashCode == RESTRICT_GROUP0_HASH)
          {
            return Scte35DeviceRestrictions::RESTRICT_GROUP0;
          }
          else if (hashCode == RESTRICT_GROUP1_HASH)
          {
            return Scte35DeviceRestrictions::RESTRICT_GROUP1;
          }
          else if (hashCode == RESTRICT_GROUP2_HASH)
          {
            return Scte35DeviceRestrictions::RESTRICT_GROUP2;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Scte35DeviceRestrictions>(hashCode);
          }

          return Scte35DeviceRestrictions::NOT_SET;
        }

        Aws::String GetNameForScte35DeviceRestrictions(Scte35DeviceRestrictions enumValue)
        {
          switch(enumValue)
          {
          case Scte35DeviceRestrictions::NONE:
            return "NONE";
          case Scte35DeviceRestrictions::RESTRICT_GROUP0:
            return "RESTRICT_GROUP0";
          case Scte35DeviceRestrictions::RESTRICT_GROUP1:
            return "RESTRICT_GROUP1";
          case Scte35DeviceRestrictions::RESTRICT_GROUP2:
            return "RESTRICT_GROUP2";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Scte35DeviceRestrictionsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
