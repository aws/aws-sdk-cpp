/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/AzureBlobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace AzureBlobTypeMapper
      {

        static const int BLOCK_HASH = HashingUtils::HashString("BLOCK");


        AzureBlobType GetAzureBlobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLOCK_HASH)
          {
            return AzureBlobType::BLOCK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AzureBlobType>(hashCode);
          }

          return AzureBlobType::NOT_SET;
        }

        Aws::String GetNameForAzureBlobType(AzureBlobType enumValue)
        {
          switch(enumValue)
          {
          case AzureBlobType::NOT_SET:
            return {};
          case AzureBlobType::BLOCK:
            return "BLOCK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AzureBlobTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
