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

#include <aws/iotevents/model/TagrisStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTEvents
  {
    namespace Model
    {
      namespace TagrisStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int NOT_ACTIVE_HASH = HashingUtils::HashString("NOT_ACTIVE");


        TagrisStatus GetTagrisStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TagrisStatus::ACTIVE;
          }
          else if (hashCode == NOT_ACTIVE_HASH)
          {
            return TagrisStatus::NOT_ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagrisStatus>(hashCode);
          }

          return TagrisStatus::NOT_SET;
        }

        Aws::String GetNameForTagrisStatus(TagrisStatus enumValue)
        {
          switch(enumValue)
          {
          case TagrisStatus::ACTIVE:
            return "ACTIVE";
          case TagrisStatus::NOT_ACTIVE:
            return "NOT_ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TagrisStatusMapper
    } // namespace Model
  } // namespace IoTEvents
} // namespace Aws
