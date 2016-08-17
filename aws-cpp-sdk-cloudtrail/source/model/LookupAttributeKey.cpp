/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/cloudtrail/model/LookupAttributeKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudTrail
  {
    namespace Model
    {
      namespace LookupAttributeKeyMapper
      {

        static const int EventId_HASH = HashingUtils::HashString("EventId");
        static const int EventName_HASH = HashingUtils::HashString("EventName");
        static const int Username_HASH = HashingUtils::HashString("Username");
        static const int ResourceType_HASH = HashingUtils::HashString("ResourceType");
        static const int ResourceName_HASH = HashingUtils::HashString("ResourceName");


        LookupAttributeKey GetLookupAttributeKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EventId_HASH)
          {
            return LookupAttributeKey::EventId;
          }
          else if (hashCode == EventName_HASH)
          {
            return LookupAttributeKey::EventName;
          }
          else if (hashCode == Username_HASH)
          {
            return LookupAttributeKey::Username;
          }
          else if (hashCode == ResourceType_HASH)
          {
            return LookupAttributeKey::ResourceType;
          }
          else if (hashCode == ResourceName_HASH)
          {
            return LookupAttributeKey::ResourceName;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LookupAttributeKey>(hashCode);
          }

          return LookupAttributeKey::NOT_SET;
        }

        Aws::String GetNameForLookupAttributeKey(LookupAttributeKey enumValue)
        {
          switch(enumValue)
          {
          case LookupAttributeKey::EventId:
            return "EventId";
          case LookupAttributeKey::EventName:
            return "EventName";
          case LookupAttributeKey::Username:
            return "Username";
          case LookupAttributeKey::ResourceType:
            return "ResourceType";
          case LookupAttributeKey::ResourceName:
            return "ResourceName";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace LookupAttributeKeyMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
