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

#include <aws/mediaconvert/model/DeinterlaceAlgorithm.h>
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
      namespace DeinterlaceAlgorithmMapper
      {

        static const int INTERPOLATE_HASH = HashingUtils::HashString("INTERPOLATE");
        static const int INTERPOLATE_TICKER_HASH = HashingUtils::HashString("INTERPOLATE_TICKER");
        static const int BLEND_HASH = HashingUtils::HashString("BLEND");
        static const int BLEND_TICKER_HASH = HashingUtils::HashString("BLEND_TICKER");


        DeinterlaceAlgorithm GetDeinterlaceAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTERPOLATE_HASH)
          {
            return DeinterlaceAlgorithm::INTERPOLATE;
          }
          else if (hashCode == INTERPOLATE_TICKER_HASH)
          {
            return DeinterlaceAlgorithm::INTERPOLATE_TICKER;
          }
          else if (hashCode == BLEND_HASH)
          {
            return DeinterlaceAlgorithm::BLEND;
          }
          else if (hashCode == BLEND_TICKER_HASH)
          {
            return DeinterlaceAlgorithm::BLEND_TICKER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeinterlaceAlgorithm>(hashCode);
          }

          return DeinterlaceAlgorithm::NOT_SET;
        }

        Aws::String GetNameForDeinterlaceAlgorithm(DeinterlaceAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case DeinterlaceAlgorithm::INTERPOLATE:
            return "INTERPOLATE";
          case DeinterlaceAlgorithm::INTERPOLATE_TICKER:
            return "INTERPOLATE_TICKER";
          case DeinterlaceAlgorithm::BLEND:
            return "BLEND";
          case DeinterlaceAlgorithm::BLEND_TICKER:
            return "BLEND_TICKER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DeinterlaceAlgorithmMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
