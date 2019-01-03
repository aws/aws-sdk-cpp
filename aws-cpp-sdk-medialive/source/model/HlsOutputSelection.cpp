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

#include <aws/medialive/model/HlsOutputSelection.h>
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
      namespace HlsOutputSelectionMapper
      {

        static const int MANIFESTS_AND_SEGMENTS_HASH = HashingUtils::HashString("MANIFESTS_AND_SEGMENTS");
        static const int SEGMENTS_ONLY_HASH = HashingUtils::HashString("SEGMENTS_ONLY");


        HlsOutputSelection GetHlsOutputSelectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANIFESTS_AND_SEGMENTS_HASH)
          {
            return HlsOutputSelection::MANIFESTS_AND_SEGMENTS;
          }
          else if (hashCode == SEGMENTS_ONLY_HASH)
          {
            return HlsOutputSelection::SEGMENTS_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsOutputSelection>(hashCode);
          }

          return HlsOutputSelection::NOT_SET;
        }

        Aws::String GetNameForHlsOutputSelection(HlsOutputSelection enumValue)
        {
          switch(enumValue)
          {
          case HlsOutputSelection::MANIFESTS_AND_SEGMENTS:
            return "MANIFESTS_AND_SEGMENTS";
          case HlsOutputSelection::SEGMENTS_ONLY:
            return "SEGMENTS_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsOutputSelectionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
