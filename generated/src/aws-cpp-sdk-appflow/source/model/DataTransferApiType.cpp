/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DataTransferApiType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace DataTransferApiTypeMapper
      {

        static constexpr uint32_t SYNC_HASH = ConstExprHashingUtils::HashString("SYNC");
        static constexpr uint32_t ASYNC_HASH = ConstExprHashingUtils::HashString("ASYNC");
        static constexpr uint32_t AUTOMATIC_HASH = ConstExprHashingUtils::HashString("AUTOMATIC");


        DataTransferApiType GetDataTransferApiTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNC_HASH)
          {
            return DataTransferApiType::SYNC;
          }
          else if (hashCode == ASYNC_HASH)
          {
            return DataTransferApiType::ASYNC;
          }
          else if (hashCode == AUTOMATIC_HASH)
          {
            return DataTransferApiType::AUTOMATIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataTransferApiType>(hashCode);
          }

          return DataTransferApiType::NOT_SET;
        }

        Aws::String GetNameForDataTransferApiType(DataTransferApiType enumValue)
        {
          switch(enumValue)
          {
          case DataTransferApiType::NOT_SET:
            return {};
          case DataTransferApiType::SYNC:
            return "SYNC";
          case DataTransferApiType::ASYNC:
            return "ASYNC";
          case DataTransferApiType::AUTOMATIC:
            return "AUTOMATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataTransferApiTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
