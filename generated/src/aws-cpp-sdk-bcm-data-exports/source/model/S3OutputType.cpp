/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/S3OutputType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDataExports
  {
    namespace Model
    {
      namespace S3OutputTypeMapper
      {

        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        S3OutputType GetS3OutputTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOM_HASH)
          {
            return S3OutputType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<S3OutputType>(hashCode);
          }

          return S3OutputType::NOT_SET;
        }

        Aws::String GetNameForS3OutputType(S3OutputType enumValue)
        {
          switch(enumValue)
          {
          case S3OutputType::NOT_SET:
            return {};
          case S3OutputType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace S3OutputTypeMapper
    } // namespace Model
  } // namespace BCMDataExports
} // namespace Aws
