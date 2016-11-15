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
#include <aws/sqs/model/AttributeName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;

static const int ApproximateFirstReceiveTimestamp_HASH = HashingUtils::HashString("ApproximateFirstReceiveTimestamp");
static const int ApproximateReceiveCount_HASH = HashingUtils::HashString("ApproximateReceiveCount");
static const int SenderId_HASH = HashingUtils::HashString("SenderId");
static const int SentTimestamp_HASH = HashingUtils::HashString("SentTimestamp");

namespace Aws
{
  namespace SQS
  {
    namespace Model
    {
      namespace AttributeNameMapper
      {

        AttributeName GetAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ApproximateFirstReceiveTimestamp_HASH)
          {
            return AttributeName::ApproximateFirstReceiveTimestamp;
          }
          else if (hashCode == ApproximateReceiveCount_HASH)
          {
            return AttributeName::ApproximateReceiveCount;
          }
          else if (hashCode == SenderId_HASH)
          {
            return AttributeName::SenderId;
          }
          else if (hashCode == SentTimestamp_HASH)
          {
            return AttributeName::SentTimestamp;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttributeName>(hashCode);
          }

          return AttributeName::NOT_SET;
        }

        Aws::String GetNameForAttributeName(AttributeName enumValue)
        {
          switch(enumValue)
          {
          case AttributeName::ApproximateFirstReceiveTimestamp:
            return "ApproximateFirstReceiveTimestamp";
          case AttributeName::ApproximateReceiveCount:
            return "ApproximateReceiveCount";
          case AttributeName::SenderId:
            return "SenderId";
          case AttributeName::SentTimestamp:
            return "SentTimestamp";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace AttributeNameMapper
    } // namespace Model
  } // namespace SQS
} // namespace Aws
