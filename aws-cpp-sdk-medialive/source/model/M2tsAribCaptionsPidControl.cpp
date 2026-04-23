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

#include <aws/medialive/model/M2tsAribCaptionsPidControl.h>
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
      namespace M2tsAribCaptionsPidControlMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int USE_CONFIGURED_HASH = HashingUtils::HashString("USE_CONFIGURED");


        M2tsAribCaptionsPidControl GetM2tsAribCaptionsPidControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return M2tsAribCaptionsPidControl::AUTO;
          }
          else if (hashCode == USE_CONFIGURED_HASH)
          {
            return M2tsAribCaptionsPidControl::USE_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsAribCaptionsPidControl>(hashCode);
          }

          return M2tsAribCaptionsPidControl::NOT_SET;
        }

        Aws::String GetNameForM2tsAribCaptionsPidControl(M2tsAribCaptionsPidControl enumValue)
        {
          switch(enumValue)
          {
          case M2tsAribCaptionsPidControl::AUTO:
            return "AUTO";
          case M2tsAribCaptionsPidControl::USE_CONFIGURED:
            return "USE_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsAribCaptionsPidControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
