/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-meetings/model/ContentResolution.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMeetings
  {
    namespace Model
    {
      namespace ContentResolutionMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int FHD_HASH = HashingUtils::HashString("FHD");
        static const int UHD_HASH = HashingUtils::HashString("UHD");


        ContentResolution GetContentResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return ContentResolution::None;
          }
          else if (hashCode == FHD_HASH)
          {
            return ContentResolution::FHD;
          }
          else if (hashCode == UHD_HASH)
          {
            return ContentResolution::UHD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContentResolution>(hashCode);
          }

          return ContentResolution::NOT_SET;
        }

        Aws::String GetNameForContentResolution(ContentResolution enumValue)
        {
          switch(enumValue)
          {
          case ContentResolution::NOT_SET:
            return {};
          case ContentResolution::None:
            return "None";
          case ContentResolution::FHD:
            return "FHD";
          case ContentResolution::UHD:
            return "UHD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContentResolutionMapper
    } // namespace Model
  } // namespace ChimeSDKMeetings
} // namespace Aws
