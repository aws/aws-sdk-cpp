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

#include <aws/mediaconvert/model/H265Telecine.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace H265TelecineMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SOFT_HASH = HashingUtils::HashString("SOFT");
        static const int HARD_HASH = HashingUtils::HashString("HARD");


        H265Telecine GetH265TelecineForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return H265Telecine::NONE;
          }
          else if (hashCode == SOFT_HASH)
          {
            return H265Telecine::SOFT;
          }
          else if (hashCode == HARD_HASH)
          {
            return H265Telecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265Telecine>(hashCode);
          }

          return H265Telecine::NOT_SET;
        }

        Aws::String GetNameForH265Telecine(H265Telecine enumValue)
        {
          switch(enumValue)
          {
          case H265Telecine::NONE:
            return "NONE";
          case H265Telecine::SOFT:
            return "SOFT";
          case H265Telecine::HARD:
            return "HARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace H265TelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
