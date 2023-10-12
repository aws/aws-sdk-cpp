/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/DriveCacheType.h>
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
      namespace DriveCacheTypeMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t READ_HASH = ConstExprHashingUtils::HashString("READ");


        DriveCacheType GetDriveCacheTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return DriveCacheType::NONE;
          }
          else if (hashCode == READ_HASH)
          {
            return DriveCacheType::READ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DriveCacheType>(hashCode);
          }

          return DriveCacheType::NOT_SET;
        }

        Aws::String GetNameForDriveCacheType(DriveCacheType enumValue)
        {
          switch(enumValue)
          {
          case DriveCacheType::NOT_SET:
            return {};
          case DriveCacheType::NONE:
            return "NONE";
          case DriveCacheType::READ:
            return "READ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DriveCacheTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
