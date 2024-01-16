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

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int THING_GROUP_HASH = HashingUtils::HashString("THING_GROUP");
        static const int CLIENT_ID_HASH = HashingUtils::HashString("CLIENT_ID");
        static const int SOURCE_IP_HASH = HashingUtils::HashString("SOURCE_IP");
        static const int PRINCIPAL_ID_HASH = HashingUtils::HashString("PRINCIPAL_ID");


        LogTargetType GetLogTargetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
