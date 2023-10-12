/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FieldName.h>
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
      namespace FieldNameMapper
      {

        static constexpr uint32_t CRAWL_ID_HASH = ConstExprHashingUtils::HashString("CRAWL_ID");
        static constexpr uint32_t STATE_HASH = ConstExprHashingUtils::HashString("STATE");
        static constexpr uint32_t START_TIME_HASH = ConstExprHashingUtils::HashString("START_TIME");
        static constexpr uint32_t END_TIME_HASH = ConstExprHashingUtils::HashString("END_TIME");
        static constexpr uint32_t DPU_HOUR_HASH = ConstExprHashingUtils::HashString("DPU_HOUR");


        FieldName GetFieldNameForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRAWL_ID_HASH)
          {
            return FieldName::CRAWL_ID;
          }
          else if (hashCode == STATE_HASH)
          {
            return FieldName::STATE;
          }
          else if (hashCode == START_TIME_HASH)
          {
            return FieldName::START_TIME;
          }
          else if (hashCode == END_TIME_HASH)
          {
            return FieldName::END_TIME;
          }
          else if (hashCode == DPU_HOUR_HASH)
          {
            return FieldName::DPU_HOUR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FieldName>(hashCode);
          }

          return FieldName::NOT_SET;
        }

        Aws::String GetNameForFieldName(FieldName enumValue)
        {
          switch(enumValue)
          {
          case FieldName::NOT_SET:
            return {};
          case FieldName::CRAWL_ID:
            return "CRAWL_ID";
          case FieldName::STATE:
            return "STATE";
          case FieldName::START_TIME:
            return "START_TIME";
          case FieldName::END_TIME:
            return "END_TIME";
          case FieldName::DPU_HOUR:
            return "DPU_HOUR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldNameMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
