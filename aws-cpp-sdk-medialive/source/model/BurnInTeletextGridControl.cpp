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

#include <aws/medialive/model/BurnInTeletextGridControl.h>
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
      namespace BurnInTeletextGridControlMapper
      {

        static const int FIXED_HASH = HashingUtils::HashString("FIXED");
        static const int SCALED_HASH = HashingUtils::HashString("SCALED");


        BurnInTeletextGridControl GetBurnInTeletextGridControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIXED_HASH)
          {
            return BurnInTeletextGridControl::FIXED;
          }
          else if (hashCode == SCALED_HASH)
          {
            return BurnInTeletextGridControl::SCALED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BurnInTeletextGridControl>(hashCode);
          }

          return BurnInTeletextGridControl::NOT_SET;
        }

        Aws::String GetNameForBurnInTeletextGridControl(BurnInTeletextGridControl enumValue)
        {
          switch(enumValue)
          {
          case BurnInTeletextGridControl::FIXED:
            return "FIXED";
          case BurnInTeletextGridControl::SCALED:
            return "SCALED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BurnInTeletextGridControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
