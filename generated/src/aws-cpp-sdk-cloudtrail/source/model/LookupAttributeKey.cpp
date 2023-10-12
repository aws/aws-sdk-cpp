/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t EventId_HASH = ConstExprHashingUtils::HashString("EventId");
        static constexpr uint32_t EventName_HASH = ConstExprHashingUtils::HashString("EventName");
        static constexpr uint32_t ReadOnly_HASH = ConstExprHashingUtils::HashString("ReadOnly");
        static constexpr uint32_t Username_HASH = ConstExprHashingUtils::HashString("Username");
        static constexpr uint32_t ResourceType_HASH = ConstExprHashingUtils::HashString("ResourceType");
        static constexpr uint32_t ResourceName_HASH = ConstExprHashingUtils::HashString("ResourceName");
        static constexpr uint32_t EventSource_HASH = ConstExprHashingUtils::HashString("EventSource");
        static constexpr uint32_t AccessKeyId_HASH = ConstExprHashingUtils::HashString("AccessKeyId");


        LookupAttributeKey GetLookupAttributeKeyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EventId_HASH)
          {
            return LookupAttributeKey::EventId;
          }
          else if (hashCode == EventName_HASH)
          {
            return LookupAttributeKey::EventName;
          }
          else if (hashCode == ReadOnly_HASH)
          {
            return LookupAttributeKey::ReadOnly;
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
          else if (hashCode == EventSource_HASH)
          {
            return LookupAttributeKey::EventSource;
          }
          else if (hashCode == AccessKeyId_HASH)
          {
            return LookupAttributeKey::AccessKeyId;
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
          case LookupAttributeKey::NOT_SET:
            return {};
          case LookupAttributeKey::EventId:
            return "EventId";
          case LookupAttributeKey::EventName:
            return "EventName";
          case LookupAttributeKey::ReadOnly:
            return "ReadOnly";
          case LookupAttributeKey::Username:
            return "Username";
          case LookupAttributeKey::ResourceType:
            return "ResourceType";
          case LookupAttributeKey::ResourceName:
            return "ResourceName";
          case LookupAttributeKey::EventSource:
            return "EventSource";
          case LookupAttributeKey::AccessKeyId:
            return "AccessKeyId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LookupAttributeKeyMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
