/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/QueueName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace QueueNameMapper
      {

        static const int QUANTUM_TASKS_QUEUE_HASH = HashingUtils::HashString("QUANTUM_TASKS_QUEUE");
        static const int JOBS_QUEUE_HASH = HashingUtils::HashString("JOBS_QUEUE");


        QueueName GetQueueNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUANTUM_TASKS_QUEUE_HASH)
          {
            return QueueName::QUANTUM_TASKS_QUEUE;
          }
          else if (hashCode == JOBS_QUEUE_HASH)
          {
            return QueueName::JOBS_QUEUE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueName>(hashCode);
          }

          return QueueName::NOT_SET;
        }

        Aws::String GetNameForQueueName(QueueName enumValue)
        {
          switch(enumValue)
          {
          case QueueName::NOT_SET:
            return {};
          case QueueName::QUANTUM_TASKS_QUEUE:
            return "QUANTUM_TASKS_QUEUE";
          case QueueName::JOBS_QUEUE:
            return "JOBS_QUEUE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueueNameMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
