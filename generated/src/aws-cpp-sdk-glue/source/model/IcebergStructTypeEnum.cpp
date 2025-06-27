/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/IcebergStructTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace IcebergStructTypeEnumMapper
      {

        static const int struct__HASH = HashingUtils::HashString("struct");


        IcebergStructTypeEnum GetIcebergStructTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == struct__HASH)
          {
            return IcebergStructTypeEnum::struct_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IcebergStructTypeEnum>(hashCode);
          }

          return IcebergStructTypeEnum::NOT_SET;
        }

        Aws::String GetNameForIcebergStructTypeEnum(IcebergStructTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case IcebergStructTypeEnum::NOT_SET:
            return {};
          case IcebergStructTypeEnum::struct_:
            return "struct";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IcebergStructTypeEnumMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
