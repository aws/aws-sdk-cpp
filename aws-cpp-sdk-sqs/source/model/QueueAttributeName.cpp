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
#include <aws/sqs/model/QueueAttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SQS
  {
    namespace Model
    {
      namespace QueueAttributeNameMapper
      {

        static const int All_HASH = HashingUtils::HashString("All");
        static const int Policy_HASH = HashingUtils::HashString("Policy");
        static const int VisibilityTimeout_HASH = HashingUtils::HashString("VisibilityTimeout");
        static const int MaximumMessageSize_HASH = HashingUtils::HashString("MaximumMessageSize");
        static const int MessageRetentionPeriod_HASH = HashingUtils::HashString("MessageRetentionPeriod");
        static const int ApproximateNumberOfMessages_HASH = HashingUtils::HashString("ApproximateNumberOfMessages");
        static const int ApproximateNumberOfMessagesNotVisible_HASH = HashingUtils::HashString("ApproximateNumberOfMessagesNotVisible");
        static const int CreatedTimestamp_HASH = HashingUtils::HashString("CreatedTimestamp");
        static const int LastModifiedTimestamp_HASH = HashingUtils::HashString("LastModifiedTimestamp");
        static const int QueueArn_HASH = HashingUtils::HashString("QueueArn");
        static const int ApproximateNumberOfMessagesDelayed_HASH = HashingUtils::HashString("ApproximateNumberOfMessagesDelayed");
        static const int DelaySeconds_HASH = HashingUtils::HashString("DelaySeconds");
        static const int ReceiveMessageWaitTimeSeconds_HASH = HashingUtils::HashString("ReceiveMessageWaitTimeSeconds");
        static const int RedrivePolicy_HASH = HashingUtils::HashString("RedrivePolicy");
        static const int SentTimestamp_HASH = HashingUtils::HashString("SentTimestamp");
        static const int ApproximateFirstReceiveTimestamp_HASH = HashingUtils::HashString("ApproximateFirstReceiveTimestamp");
        static const int ApproximateReceiveCount_HASH = HashingUtils::HashString("ApproximateReceiveCount");
        static const int SenderId_HASH = HashingUtils::HashString("SenderId");


        QueueAttributeName GetQueueAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == All_HASH)
          {
            return QueueAttributeName::All;
          }
          else if (hashCode == Policy_HASH)
          {
            return QueueAttributeName::Policy;
          }
          else if (hashCode == VisibilityTimeout_HASH)
          {
            return QueueAttributeName::VisibilityTimeout;
          }
          else if (hashCode == MaximumMessageSize_HASH)
          {
            return QueueAttributeName::MaximumMessageSize;
          }
          else if (hashCode == MessageRetentionPeriod_HASH)
          {
            return QueueAttributeName::MessageRetentionPeriod;
          }
          else if (hashCode == ApproximateNumberOfMessages_HASH)
          {
            return QueueAttributeName::ApproximateNumberOfMessages;
          }
          else if (hashCode == ApproximateNumberOfMessagesNotVisible_HASH)
          {
            return QueueAttributeName::ApproximateNumberOfMessagesNotVisible;
          }
          else if (hashCode == CreatedTimestamp_HASH)
          {
            return QueueAttributeName::CreatedTimestamp;
          }
          else if (hashCode == LastModifiedTimestamp_HASH)
          {
            return QueueAttributeName::LastModifiedTimestamp;
          }
          else if (hashCode == QueueArn_HASH)
          {
            return QueueAttributeName::QueueArn;
          }
          else if (hashCode == ApproximateNumberOfMessagesDelayed_HASH)
          {
            return QueueAttributeName::ApproximateNumberOfMessagesDelayed;
          }
          else if (hashCode == DelaySeconds_HASH)
          {
            return QueueAttributeName::DelaySeconds;
          }
          else if (hashCode == ReceiveMessageWaitTimeSeconds_HASH)
          {
            return QueueAttributeName::ReceiveMessageWaitTimeSeconds;
          }
          else if (hashCode == RedrivePolicy_HASH)
          {
            return QueueAttributeName::RedrivePolicy;
          }
          else if (hashCode == SentTimestamp_HASH)
          {
            return QueueAttributeName::SentTimestamp;
          }
          else if (hashCode == ApproximateFirstReceiveTimestamp_HASH)
          {
            return QueueAttributeName::ApproximateFirstReceiveTimestamp;
          }
          else if (hashCode == ApproximateReceiveCount_HASH)
          {
            return QueueAttributeName::ApproximateReceiveCount;
          }
          else if (hashCode == SenderId_HASH)
          {
            return QueueAttributeName::SenderId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueueAttributeName>(hashCode);
          }

          return QueueAttributeName::NOT_SET;
        }

        Aws::String GetNameForQueueAttributeName(QueueAttributeName enumValue)
        {
          switch(enumValue)
          {
          case QueueAttributeName::All:
            return "All";
          case QueueAttributeName::Policy:
            return "Policy";
          case QueueAttributeName::VisibilityTimeout:
            return "VisibilityTimeout";
          case QueueAttributeName::MaximumMessageSize:
            return "MaximumMessageSize";
          case QueueAttributeName::MessageRetentionPeriod:
            return "MessageRetentionPeriod";
          case QueueAttributeName::ApproximateNumberOfMessages:
            return "ApproximateNumberOfMessages";
          case QueueAttributeName::ApproximateNumberOfMessagesNotVisible:
            return "ApproximateNumberOfMessagesNotVisible";
          case QueueAttributeName::CreatedTimestamp:
            return "CreatedTimestamp";
          case QueueAttributeName::LastModifiedTimestamp:
            return "LastModifiedTimestamp";
          case QueueAttributeName::QueueArn:
            return "QueueArn";
          case QueueAttributeName::ApproximateNumberOfMessagesDelayed:
            return "ApproximateNumberOfMessagesDelayed";
          case QueueAttributeName::DelaySeconds:
            return "DelaySeconds";
          case QueueAttributeName::ReceiveMessageWaitTimeSeconds:
            return "ReceiveMessageWaitTimeSeconds";
          case QueueAttributeName::RedrivePolicy:
            return "RedrivePolicy";
          case QueueAttributeName::SentTimestamp:
            return "SentTimestamp";
          case QueueAttributeName::ApproximateFirstReceiveTimestamp:
            return "ApproximateFirstReceiveTimestamp";
          case QueueAttributeName::ApproximateReceiveCount:
            return "ApproximateReceiveCount";
          case QueueAttributeName::SenderId:
            return "SenderId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace QueueAttributeNameMapper
    } // namespace Model
  } // namespace SQS
} // namespace Aws
