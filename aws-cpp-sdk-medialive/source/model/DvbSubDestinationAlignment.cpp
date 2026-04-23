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

#include <aws/medialive/model/DvbSubDestinationAlignment.h>
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
      namespace DvbSubDestinationAlignmentMapper
      {

        static const int CENTERED_HASH = HashingUtils::HashString("CENTERED");
        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int SMART_HASH = HashingUtils::HashString("SMART");


        DvbSubDestinationAlignment GetDvbSubDestinationAlignmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CENTERED_HASH)
          {
            return DvbSubDestinationAlignment::CENTERED;
          }
          else if (hashCode == LEFT_HASH)
          {
            return DvbSubDestinationAlignment::LEFT;
          }
          else if (hashCode == SMART_HASH)
          {
            return DvbSubDestinationAlignment::SMART;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DvbSubDestinationAlignment>(hashCode);
          }

          return DvbSubDestinationAlignment::NOT_SET;
        }

        Aws::String GetNameForDvbSubDestinationAlignment(DvbSubDestinationAlignment enumValue)
        {
          switch(enumValue)
          {
          case DvbSubDestinationAlignment::CENTERED:
            return "CENTERED";
          case DvbSubDestinationAlignment::LEFT:
            return "LEFT";
          case DvbSubDestinationAlignment::SMART:
            return "SMART";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DvbSubDestinationAlignmentMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
