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

#include <aws/medialive/model/Eac3StereoDownmix.h>
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
      namespace Eac3StereoDownmixMapper
      {

        static const int DPL2_HASH = HashingUtils::HashString("DPL2");
        static const int LO_RO_HASH = HashingUtils::HashString("LO_RO");
        static const int LT_RT_HASH = HashingUtils::HashString("LT_RT");
        static const int NOT_INDICATED_HASH = HashingUtils::HashString("NOT_INDICATED");


        Eac3StereoDownmix GetEac3StereoDownmixForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DPL2_HASH)
          {
            return Eac3StereoDownmix::DPL2;
          }
          else if (hashCode == LO_RO_HASH)
          {
            return Eac3StereoDownmix::LO_RO;
          }
          else if (hashCode == LT_RT_HASH)
          {
            return Eac3StereoDownmix::LT_RT;
          }
          else if (hashCode == NOT_INDICATED_HASH)
          {
            return Eac3StereoDownmix::NOT_INDICATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Eac3StereoDownmix>(hashCode);
          }

          return Eac3StereoDownmix::NOT_SET;
        }

        Aws::String GetNameForEac3StereoDownmix(Eac3StereoDownmix enumValue)
        {
          switch(enumValue)
          {
          case Eac3StereoDownmix::DPL2:
            return "DPL2";
          case Eac3StereoDownmix::LO_RO:
            return "LO_RO";
          case Eac3StereoDownmix::LT_RT:
            return "LT_RT";
          case Eac3StereoDownmix::NOT_INDICATED:
            return "NOT_INDICATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace Eac3StereoDownmixMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
