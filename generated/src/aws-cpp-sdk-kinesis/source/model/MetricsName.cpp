/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/MetricsName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kinesis
  {
    namespace Model
    {
      namespace MetricsNameMapper
      {

        static constexpr uint32_t IncomingBytes_HASH = ConstExprHashingUtils::HashString("IncomingBytes");
        static constexpr uint32_t IncomingRecords_HASH = ConstExprHashingUtils::HashString("IncomingRecords");
        static constexpr uint32_t OutgoingBytes_HASH = ConstExprHashingUtils::HashString("OutgoingBytes");
        static constexpr uint32_t OutgoingRecords_HASH = ConstExprHashingUtils::HashString("OutgoingRecords");
        static constexpr uint32_t WriteProvisionedThroughputExceeded_HASH = ConstExprHashingUtils::HashString("WriteProvisionedThroughputExceeded");
        static constexpr uint32_t ReadProvisionedThroughputExceeded_HASH = ConstExprHashingUtils::HashString("ReadProvisionedThroughputExceeded");
        static constexpr uint32_t IteratorAgeMilliseconds_HASH = ConstExprHashingUtils::HashString("IteratorAgeMilliseconds");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        MetricsName GetMetricsNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IncomingBytes_HASH)
          {
            return MetricsName::IncomingBytes;
          }
          else if (hashCode == IncomingRecords_HASH)
          {
            return MetricsName::IncomingRecords;
          }
          else if (hashCode == OutgoingBytes_HASH)
          {
            return MetricsName::OutgoingBytes;
          }
          else if (hashCode == OutgoingRecords_HASH)
          {
            return MetricsName::OutgoingRecords;
          }
          else if (hashCode == WriteProvisionedThroughputExceeded_HASH)
          {
            return MetricsName::WriteProvisionedThroughputExceeded;
          }
          else if (hashCode == ReadProvisionedThroughputExceeded_HASH)
          {
            return MetricsName::ReadProvisionedThroughputExceeded;
          }
          else if (hashCode == IteratorAgeMilliseconds_HASH)
          {
            return MetricsName::IteratorAgeMilliseconds;
          }
          else if (hashCode == ALL_HASH)
          {
            return MetricsName::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricsName>(hashCode);
          }

          return MetricsName::NOT_SET;
        }

        Aws::String GetNameForMetricsName(MetricsName enumValue)
        {
          switch(enumValue)
          {
          case MetricsName::NOT_SET:
            return {};
          case MetricsName::IncomingBytes:
            return "IncomingBytes";
          case MetricsName::IncomingRecords:
            return "IncomingRecords";
          case MetricsName::OutgoingBytes:
            return "OutgoingBytes";
          case MetricsName::OutgoingRecords:
            return "OutgoingRecords";
          case MetricsName::WriteProvisionedThroughputExceeded:
            return "WriteProvisionedThroughputExceeded";
          case MetricsName::ReadProvisionedThroughputExceeded:
            return "ReadProvisionedThroughputExceeded";
          case MetricsName::IteratorAgeMilliseconds:
            return "IteratorAgeMilliseconds";
          case MetricsName::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricsNameMapper
    } // namespace Model
  } // namespace Kinesis
} // namespace Aws
