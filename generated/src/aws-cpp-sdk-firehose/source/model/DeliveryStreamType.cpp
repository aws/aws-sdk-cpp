/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/DeliveryStreamType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace DeliveryStreamTypeMapper
      {

        static constexpr uint32_t DirectPut_HASH = ConstExprHashingUtils::HashString("DirectPut");
        static constexpr uint32_t KinesisStreamAsSource_HASH = ConstExprHashingUtils::HashString("KinesisStreamAsSource");
        static constexpr uint32_t MSKAsSource_HASH = ConstExprHashingUtils::HashString("MSKAsSource");


        DeliveryStreamType GetDeliveryStreamTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DirectPut_HASH)
          {
            return DeliveryStreamType::DirectPut;
          }
          else if (hashCode == KinesisStreamAsSource_HASH)
          {
            return DeliveryStreamType::KinesisStreamAsSource;
          }
          else if (hashCode == MSKAsSource_HASH)
          {
            return DeliveryStreamType::MSKAsSource;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeliveryStreamType>(hashCode);
          }

          return DeliveryStreamType::NOT_SET;
        }

        Aws::String GetNameForDeliveryStreamType(DeliveryStreamType enumValue)
        {
          switch(enumValue)
          {
          case DeliveryStreamType::NOT_SET:
            return {};
          case DeliveryStreamType::DirectPut:
            return "DirectPut";
          case DeliveryStreamType::KinesisStreamAsSource:
            return "KinesisStreamAsSource";
          case DeliveryStreamType::MSKAsSource:
            return "MSKAsSource";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeliveryStreamTypeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
