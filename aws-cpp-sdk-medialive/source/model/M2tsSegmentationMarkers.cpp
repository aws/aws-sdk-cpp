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

#include <aws/medialive/model/M2tsSegmentationMarkers.h>
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
      namespace M2tsSegmentationMarkersMapper
      {

        static const int EBP_HASH = HashingUtils::HashString("EBP");
        static const int EBP_LEGACY_HASH = HashingUtils::HashString("EBP_LEGACY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int PSI_SEGSTART_HASH = HashingUtils::HashString("PSI_SEGSTART");
        static const int RAI_ADAPT_HASH = HashingUtils::HashString("RAI_ADAPT");
        static const int RAI_SEGSTART_HASH = HashingUtils::HashString("RAI_SEGSTART");


        M2tsSegmentationMarkers GetM2tsSegmentationMarkersForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EBP_HASH)
          {
            return M2tsSegmentationMarkers::EBP;
          }
          else if (hashCode == EBP_LEGACY_HASH)
          {
            return M2tsSegmentationMarkers::EBP_LEGACY;
          }
          else if (hashCode == NONE_HASH)
          {
            return M2tsSegmentationMarkers::NONE;
          }
          else if (hashCode == PSI_SEGSTART_HASH)
          {
            return M2tsSegmentationMarkers::PSI_SEGSTART;
          }
          else if (hashCode == RAI_ADAPT_HASH)
          {
            return M2tsSegmentationMarkers::RAI_ADAPT;
          }
          else if (hashCode == RAI_SEGSTART_HASH)
          {
            return M2tsSegmentationMarkers::RAI_SEGSTART;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsSegmentationMarkers>(hashCode);
          }

          return M2tsSegmentationMarkers::NOT_SET;
        }

        Aws::String GetNameForM2tsSegmentationMarkers(M2tsSegmentationMarkers enumValue)
        {
          switch(enumValue)
          {
          case M2tsSegmentationMarkers::EBP:
            return "EBP";
          case M2tsSegmentationMarkers::EBP_LEGACY:
            return "EBP_LEGACY";
          case M2tsSegmentationMarkers::NONE:
            return "NONE";
          case M2tsSegmentationMarkers::PSI_SEGSTART:
            return "PSI_SEGSTART";
          case M2tsSegmentationMarkers::RAI_ADAPT:
            return "RAI_ADAPT";
          case M2tsSegmentationMarkers::RAI_SEGSTART:
            return "RAI_SEGSTART";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsSegmentationMarkersMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
