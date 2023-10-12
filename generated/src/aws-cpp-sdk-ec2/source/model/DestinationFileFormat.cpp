/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DestinationFileFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace DestinationFileFormatMapper
      {

        static constexpr uint32_t plain_text_HASH = ConstExprHashingUtils::HashString("plain-text");
        static constexpr uint32_t parquet_HASH = ConstExprHashingUtils::HashString("parquet");


        DestinationFileFormat GetDestinationFileFormatForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == plain_text_HASH)
          {
            return DestinationFileFormat::plain_text;
          }
          else if (hashCode == parquet_HASH)
          {
            return DestinationFileFormat::parquet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DestinationFileFormat>(hashCode);
          }

          return DestinationFileFormat::NOT_SET;
        }

        Aws::String GetNameForDestinationFileFormat(DestinationFileFormat enumValue)
        {
          switch(enumValue)
          {
          case DestinationFileFormat::NOT_SET:
            return {};
          case DestinationFileFormat::plain_text:
            return "plain-text";
          case DestinationFileFormat::parquet:
            return "parquet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DestinationFileFormatMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
