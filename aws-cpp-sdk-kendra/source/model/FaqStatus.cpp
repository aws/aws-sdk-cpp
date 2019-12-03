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

#include <aws/kendra/model/FaqStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace FaqStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        FaqStatus GetFaqStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return FaqStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return FaqStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FaqStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FaqStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return FaqStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FaqStatus>(hashCode);
          }

          return FaqStatus::NOT_SET;
        }

        Aws::String GetNameForFaqStatus(FaqStatus enumValue)
        {
          switch(enumValue)
          {
          case FaqStatus::CREATING:
            return "CREATING";
          case FaqStatus::UPDATING:
            return "UPDATING";
          case FaqStatus::ACTIVE:
            return "ACTIVE";
          case FaqStatus::DELETING:
            return "DELETING";
          case FaqStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FaqStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
