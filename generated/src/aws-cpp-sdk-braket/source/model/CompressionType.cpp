﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/CompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Braket
  {
    namespace Model
    {
      namespace CompressionTypeMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int GZIP_HASH = HashingUtils::HashString("GZIP");


        CompressionType GetCompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return CompressionType::NONE;
          }
          else if (hashCode == GZIP_HASH)
          {
            return CompressionType::GZIP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CompressionType>(hashCode);
          }

          return CompressionType::NOT_SET;
        }

        Aws::String GetNameForCompressionType(CompressionType enumValue)
        {
          switch(enumValue)
          {
          case CompressionType::NOT_SET:
            return {};
          case CompressionType::NONE:
            return "NONE";
          case CompressionType::GZIP:
            return "GZIP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CompressionTypeMapper
    } // namespace Model
  } // namespace Braket
} // namespace Aws
