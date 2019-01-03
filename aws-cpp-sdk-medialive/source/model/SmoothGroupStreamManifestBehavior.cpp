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

#include <aws/medialive/model/SmoothGroupStreamManifestBehavior.h>
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
      namespace SmoothGroupStreamManifestBehaviorMapper
      {

        static const int DO_NOT_SEND_HASH = HashingUtils::HashString("DO_NOT_SEND");
        static const int SEND_HASH = HashingUtils::HashString("SEND");


        SmoothGroupStreamManifestBehavior GetSmoothGroupStreamManifestBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DO_NOT_SEND_HASH)
          {
            return SmoothGroupStreamManifestBehavior::DO_NOT_SEND;
          }
          else if (hashCode == SEND_HASH)
          {
            return SmoothGroupStreamManifestBehavior::SEND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupStreamManifestBehavior>(hashCode);
          }

          return SmoothGroupStreamManifestBehavior::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupStreamManifestBehavior(SmoothGroupStreamManifestBehavior enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupStreamManifestBehavior::DO_NOT_SEND:
            return "DO_NOT_SEND";
          case SmoothGroupStreamManifestBehavior::SEND:
            return "SEND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupStreamManifestBehaviorMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
