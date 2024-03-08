/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/PreloadDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace HealthLake
  {
    namespace Model
    {
      namespace PreloadDataTypeMapper
      {

        static const int SYNTHEA_HASH = HashingUtils::HashString("SYNTHEA");


        PreloadDataType GetPreloadDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNTHEA_HASH)
          {
            return PreloadDataType::SYNTHEA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PreloadDataType>(hashCode);
          }

          return PreloadDataType::NOT_SET;
        }

        Aws::String GetNameForPreloadDataType(PreloadDataType enumValue)
        {
          switch(enumValue)
          {
          case PreloadDataType::NOT_SET:
            return {};
          case PreloadDataType::SYNTHEA:
            return "SYNTHEA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PreloadDataTypeMapper
    } // namespace Model
  } // namespace HealthLake
} // namespace Aws
