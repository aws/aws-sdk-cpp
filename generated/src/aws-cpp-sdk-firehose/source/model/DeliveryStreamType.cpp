﻿/**
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

        static const int DirectPut_HASH = HashingUtils::HashString("DirectPut");
        static const int KinesisStreamAsSource_HASH = HashingUtils::HashString("KinesisStreamAsSource");
        static const int MSKAsSource_HASH = HashingUtils::HashString("MSKAsSource");
        static const int DatabaseAsSource_HASH = HashingUtils::HashString("DatabaseAsSource");


        DeliveryStreamType GetDeliveryStreamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == DatabaseAsSource_HASH)
          {
            return DeliveryStreamType::DatabaseAsSource;
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
          case DeliveryStreamType::DatabaseAsSource:
            return "DatabaseAsSource";
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
