/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/DataChecksumAlgorithm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupStorage
  {
    namespace Model
    {
      namespace DataChecksumAlgorithmMapper
      {

        static constexpr uint32_t SHA256_HASH = ConstExprHashingUtils::HashString("SHA256");


        DataChecksumAlgorithm GetDataChecksumAlgorithmForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHA256_HASH)
          {
            return DataChecksumAlgorithm::SHA256;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataChecksumAlgorithm>(hashCode);
          }

          return DataChecksumAlgorithm::NOT_SET;
        }

        Aws::String GetNameForDataChecksumAlgorithm(DataChecksumAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case DataChecksumAlgorithm::NOT_SET:
            return {};
          case DataChecksumAlgorithm::SHA256:
            return "SHA256";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataChecksumAlgorithmMapper
    } // namespace Model
  } // namespace BackupStorage
} // namespace Aws
