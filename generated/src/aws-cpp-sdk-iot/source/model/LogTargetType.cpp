/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/LogTargetType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace LogTargetTypeMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t THING_GROUP_HASH = ConstExprHashingUtils::HashString("THING_GROUP");
        static constexpr uint32_t CLIENT_ID_HASH = ConstExprHashingUtils::HashString("CLIENT_ID");
        static constexpr uint32_t SOURCE_IP_HASH = ConstExprHashingUtils::HashString("SOURCE_IP");
        static constexpr uint32_t PRINCIPAL_ID_HASH = ConstExprHashingUtils::HashString("PRINCIPAL_ID");
        static constexpr uint32_t EVENT_TYPE_HASH = ConstExprHashingUtils::HashString("EVENT_TYPE");
        static constexpr uint32_t DEVICE_DEFENDER_HASH = ConstExprHashingUtils::HashString("DEVICE_DEFENDER");


        LogTargetType GetLogTargetTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return LogTargetType::DEFAULT;
          }
          else if (hashCode == THING_GROUP_HASH)
          {
            return LogTargetType::THING_GROUP;
          }
          else if (hashCode == CLIENT_ID_HASH)
          {
            return LogTargetType::CLIENT_ID;
          }
          else if (hashCode == SOURCE_IP_HASH)
          {
            return LogTargetType::SOURCE_IP;
          }
          else if (hashCode == PRINCIPAL_ID_HASH)
          {
            return LogTargetType::PRINCIPAL_ID;
          }
          else if (hashCode == EVENT_TYPE_HASH)
          {
            return LogTargetType::EVENT_TYPE;
          }
          else if (hashCode == DEVICE_DEFENDER_HASH)
          {
            return LogTargetType::DEVICE_DEFENDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogTargetType>(hashCode);
          }

          return LogTargetType::NOT_SET;
        }

        Aws::String GetNameForLogTargetType(LogTargetType enumValue)
        {
          switch(enumValue)
          {
          case LogTargetType::NOT_SET:
            return {};
          case LogTargetType::DEFAULT:
            return "DEFAULT";
          case LogTargetType::THING_GROUP:
            return "THING_GROUP";
          case LogTargetType::CLIENT_ID:
            return "CLIENT_ID";
          case LogTargetType::SOURCE_IP:
            return "SOURCE_IP";
          case LogTargetType::PRINCIPAL_ID:
            return "PRINCIPAL_ID";
          case LogTargetType::EVENT_TYPE:
            return "EVENT_TYPE";
          case LogTargetType::DEVICE_DEFENDER:
            return "DEVICE_DEFENDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogTargetTypeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
