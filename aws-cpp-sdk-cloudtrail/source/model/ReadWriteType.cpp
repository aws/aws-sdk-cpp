/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace ReadWriteTypeMapper
    } // namespace Model
  } // namespace CloudTrail
} // namespace Aws
