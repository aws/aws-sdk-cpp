﻿/*
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
#include <aws/sqs/model/MessageSystemAttributeName.h>
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
      namespace MessageSystemAttributeNameMapper
      {

        static const int SenderId_HASH = HashingUtils::HashString("SenderId");
        static const int SentTimestamp_HASH = HashingUtils::HashString("SentTimestamp");
        static const int ApproximateReceiveCount_HASH = HashingUtils::HashString("ApproximateReceiveCount");
        static const int ApproximateFirstReceiveTimestamp_HASH = HashingUtils::HashString("ApproximateFirstReceiveTimestamp");
        static const int SequenceNumber_HASH = HashingUtils::HashString("SequenceNumber");
        static const int MessageDeduplicationId_HASH = HashingUtils::HashString("MessageDeduplicationId");
        static const int MessageGroupId_HASH = HashingUtils::HashString("MessageGroupId");


        MessageSystemAttributeName GetMessageSystemAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SenderId_HASH)
          {
            return MessageSystemAttributeName::SenderId;
          }
          else if (hashCode == SentTimestamp_HASH)
          {
            return MessageSystemAttributeName::SentTimestamp;
          }
          else if (hashCode == ApproximateReceiveCount_HASH)
          {
            return MessageSystemAttributeName::ApproximateReceiveCount;
          }
          else if (hashCode == ApproximateFirstReceiveTimestamp_HASH)
          {
            return MessageSystemAttributeName::ApproximateFirstReceiveTimestamp;
          }
          else if (hashCode == SequenceNumber_HASH)
          {
            return MessageSystemAttributeName::SequenceNumber;
          }
          else if (hashCode == MessageDeduplicationId_HASH)
          {
            return MessageSystemAttributeName::MessageDeduplicationId;
          }
          else if (hashCode == MessageGroupId_HASH)
          {
            return MessageSystemAttributeName::MessageGroupId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MessageSystemAttributeName>(hashCode);
          }

          return MessageSystemAttributeName::NOT_SET;
        }

        Aws::String GetNameForMessageSystemAttributeName(MessageSystemAttributeName enumValue)
        {
          switch(enumValue)
          {
          case MessageSystemAttributeName::SenderId:
            return "SenderId";
          case MessageSystemAttributeName::SentTimestamp:
            return "SentTimestamp";
          case MessageSystemAttributeName::ApproximateReceiveCount:
            return "ApproximateReceiveCount";
          case MessageSystemAttributeName::ApproximateFirstReceiveTimestamp:
            return "ApproximateFirstReceiveTimestamp";
          case MessageSystemAttributeName::SequenceNumber:
            return "SequenceNumber";
          case MessageSystemAttributeName::MessageDeduplicationId:
            return "MessageDeduplicationId";
          case MessageSystemAttributeName::MessageGroupId:
            return "MessageGroupId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MessageSystemAttributeNameMapper
    } // namespace Model
  } // namespace SQS
} // namespace Aws
