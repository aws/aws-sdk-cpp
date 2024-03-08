/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VideoCapability.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace VideoCapabilityMapper
      {

        static const int SEND_HASH = HashingUtils::HashString("SEND");


        VideoCapability GetVideoCapabilityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEND_HASH)
          {
            return VideoCapability::SEND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VideoCapability>(hashCode);
          }

          return VideoCapability::NOT_SET;
        }

        Aws::String GetNameForVideoCapability(VideoCapability enumValue)
        {
          switch(enumValue)
          {
          case VideoCapability::NOT_SET:
            return {};
          case VideoCapability::SEND:
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

      } // namespace VideoCapabilityMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
