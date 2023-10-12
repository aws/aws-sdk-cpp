/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/RelevanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace RelevanceTypeMapper
      {

        static constexpr uint32_t RELEVANT_HASH = ConstExprHashingUtils::HashString("RELEVANT");
        static constexpr uint32_t NOT_RELEVANT_HASH = ConstExprHashingUtils::HashString("NOT_RELEVANT");


        RelevanceType GetRelevanceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RELEVANT_HASH)
          {
            return RelevanceType::RELEVANT;
          }
          else if (hashCode == NOT_RELEVANT_HASH)
          {
            return RelevanceType::NOT_RELEVANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RelevanceType>(hashCode);
          }

          return RelevanceType::NOT_SET;
        }

        Aws::String GetNameForRelevanceType(RelevanceType enumValue)
        {
          switch(enumValue)
          {
          case RelevanceType::NOT_SET:
            return {};
          case RelevanceType::RELEVANT:
            return "RELEVANT";
          case RelevanceType::NOT_RELEVANT:
            return "NOT_RELEVANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RelevanceTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
