/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/QueueType.h>
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
      namespace QueueTypeMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t AGENT_HASH = ConstExprHashingUtils::HashString("AGENT");


        QueueType GetQueueTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return QueueType::STANDARD;
          }
          else if (hashCode == AGENT_HASH)
          {
            return QueueType::AGENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueType>(hashCode);
          }

          return QueueType::NOT_SET;
        }

        Aws::String GetNameForQueueType(QueueType enumValue)
        {
          switch(enumValue)
          {
          case QueueType::NOT_SET:
            return {};
          case QueueType::STANDARD:
            return "STANDARD";
          case QueueType::AGENT:
            return "AGENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
