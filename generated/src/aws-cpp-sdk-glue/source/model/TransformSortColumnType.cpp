/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TransformSortColumnType.h>
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
      namespace TransformSortColumnTypeMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t TRANSFORM_TYPE_HASH = ConstExprHashingUtils::HashString("TRANSFORM_TYPE");
        static constexpr uint32_t STATUS_HASH = ConstExprHashingUtils::HashString("STATUS");
        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t LAST_MODIFIED_HASH = ConstExprHashingUtils::HashString("LAST_MODIFIED");


        TransformSortColumnType GetTransformSortColumnTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return TransformSortColumnType::NAME;
          }
          else if (hashCode == TRANSFORM_TYPE_HASH)
          {
            return TransformSortColumnType::TRANSFORM_TYPE;
          }
          else if (hashCode == STATUS_HASH)
          {
            return TransformSortColumnType::STATUS;
          }
          else if (hashCode == CREATED_HASH)
          {
            return TransformSortColumnType::CREATED;
          }
          else if (hashCode == LAST_MODIFIED_HASH)
          {
            return TransformSortColumnType::LAST_MODIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformSortColumnType>(hashCode);
          }

          return TransformSortColumnType::NOT_SET;
        }

        Aws::String GetNameForTransformSortColumnType(TransformSortColumnType enumValue)
        {
          switch(enumValue)
          {
          case TransformSortColumnType::NOT_SET:
            return {};
          case TransformSortColumnType::NAME:
            return "NAME";
          case TransformSortColumnType::TRANSFORM_TYPE:
            return "TRANSFORM_TYPE";
          case TransformSortColumnType::STATUS:
            return "STATUS";
          case TransformSortColumnType::CREATED:
            return "CREATED";
          case TransformSortColumnType::LAST_MODIFIED:
            return "LAST_MODIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformSortColumnTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
