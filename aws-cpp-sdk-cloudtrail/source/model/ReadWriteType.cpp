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

#include <aws/cloudtrail/model/ReadWriteType.h>
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
      namespace ReadWriteTypeMapper
      {

        static const int ReadOnly_HASH = HashingUtils::HashString("ReadOnly");
        static const int WriteOnly_HASH = HashingUtils::HashString("WriteOnly");
        static const int All_HASH = HashingUtils::HashString("All");


        ReadWriteType GetReadWriteTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ReadOnly_HASH)
          {
            return ReadWriteType::ReadOnly;
          }
          else if (hashCode == WriteOnly_HASH)
          {
            return ReadWriteType::WriteOnly;
          }
          else if (hashCode == All_HASH)
          {
            return ReadWriteType::All;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReadWriteType>(hashCode);
          }

          return ReadWriteType::NOT_SET;
        }

        Aws::String GetNameForReadWriteType(ReadWriteType enumValue)
        {
          switch(enumValue)
          {
          case ReadWriteType::ReadOnly:
            return "ReadOnly";
          case ReadWriteType::WriteOnly:
            return "WriteOnly";
          case ReadWriteType::All:
            return "All";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ReadWriteTypeMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
