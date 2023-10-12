/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/ReplacementTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace ReplacementTypeEnumMapper
      {

        static constexpr uint32_t KEEP_BASE_HASH = ConstExprHashingUtils::HashString("KEEP_BASE");
        static constexpr uint32_t KEEP_SOURCE_HASH = ConstExprHashingUtils::HashString("KEEP_SOURCE");
        static constexpr uint32_t KEEP_DESTINATION_HASH = ConstExprHashingUtils::HashString("KEEP_DESTINATION");
        static constexpr uint32_t USE_NEW_CONTENT_HASH = ConstExprHashingUtils::HashString("USE_NEW_CONTENT");


        ReplacementTypeEnum GetReplacementTypeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEEP_BASE_HASH)
          {
            return ReplacementTypeEnum::KEEP_BASE;
          }
          else if (hashCode == KEEP_SOURCE_HASH)
          {
            return ReplacementTypeEnum::KEEP_SOURCE;
          }
          else if (hashCode == KEEP_DESTINATION_HASH)
          {
            return ReplacementTypeEnum::KEEP_DESTINATION;
          }
          else if (hashCode == USE_NEW_CONTENT_HASH)
          {
            return ReplacementTypeEnum::USE_NEW_CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReplacementTypeEnum>(hashCode);
          }

          return ReplacementTypeEnum::NOT_SET;
        }

        Aws::String GetNameForReplacementTypeEnum(ReplacementTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ReplacementTypeEnum::NOT_SET:
            return {};
          case ReplacementTypeEnum::KEEP_BASE:
            return "KEEP_BASE";
          case ReplacementTypeEnum::KEEP_SOURCE:
            return "KEEP_SOURCE";
          case ReplacementTypeEnum::KEEP_DESTINATION:
            return "KEEP_DESTINATION";
          case ReplacementTypeEnum::USE_NEW_CONTENT:
            return "USE_NEW_CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReplacementTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
