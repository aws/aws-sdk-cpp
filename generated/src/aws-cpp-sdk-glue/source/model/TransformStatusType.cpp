/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TransformStatusType.h>
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
      namespace TransformStatusTypeMapper
      {

        static constexpr uint32_t NOT_READY_HASH = ConstExprHashingUtils::HashString("NOT_READY");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        TransformStatusType GetTransformStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_READY_HASH)
          {
            return TransformStatusType::NOT_READY;
          }
          else if (hashCode == READY_HASH)
          {
            return TransformStatusType::READY;
          }
          else if (hashCode == DELETING_HASH)
          {
            return TransformStatusType::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransformStatusType>(hashCode);
          }

          return TransformStatusType::NOT_SET;
        }

        Aws::String GetNameForTransformStatusType(TransformStatusType enumValue)
        {
          switch(enumValue)
          {
          case TransformStatusType::NOT_SET:
            return {};
          case TransformStatusType::NOT_READY:
            return "NOT_READY";
          case TransformStatusType::READY:
            return "READY";
          case TransformStatusType::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransformStatusTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
