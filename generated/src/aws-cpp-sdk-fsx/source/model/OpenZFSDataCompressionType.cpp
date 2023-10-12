/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSDataCompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace OpenZFSDataCompressionTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t ZSTD_HASH = ConstExprHashingUtils::HashString("ZSTD");
        static constexpr uint32_t LZ4_HASH = ConstExprHashingUtils::HashString("LZ4");


        OpenZFSDataCompressionType GetOpenZFSDataCompressionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return OpenZFSDataCompressionType::NONE;
          }
          else if (hashCode == ZSTD_HASH)
          {
            return OpenZFSDataCompressionType::ZSTD;
          }
          else if (hashCode == LZ4_HASH)
          {
            return OpenZFSDataCompressionType::LZ4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenZFSDataCompressionType>(hashCode);
          }

          return OpenZFSDataCompressionType::NOT_SET;
        }

        Aws::String GetNameForOpenZFSDataCompressionType(OpenZFSDataCompressionType enumValue)
        {
          switch(enumValue)
          {
          case OpenZFSDataCompressionType::NOT_SET:
            return {};
          case OpenZFSDataCompressionType::NONE:
            return "NONE";
          case OpenZFSDataCompressionType::ZSTD:
            return "ZSTD";
          case OpenZFSDataCompressionType::LZ4:
            return "LZ4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenZFSDataCompressionTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
