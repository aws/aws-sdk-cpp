/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SupportedDataTransferType.h>
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
      namespace SupportedDataTransferTypeMapper
      {

        static const int RECORD_HASH = HashingUtils::HashString("RECORD");
        static const int FILE_HASH = HashingUtils::HashString("FILE");


        SupportedDataTransferType GetSupportedDataTransferTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RECORD_HASH)
          {
            return SupportedDataTransferType::RECORD;
          }
          else if (hashCode == FILE_HASH)
          {
            return SupportedDataTransferType::FILE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SupportedDataTransferType>(hashCode);
          }

          return SupportedDataTransferType::NOT_SET;
        }

        Aws::String GetNameForSupportedDataTransferType(SupportedDataTransferType enumValue)
        {
          switch(enumValue)
          {
          case SupportedDataTransferType::NOT_SET:
            return {};
          case SupportedDataTransferType::RECORD:
            return "RECORD";
          case SupportedDataTransferType::FILE:
            return "FILE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SupportedDataTransferTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
