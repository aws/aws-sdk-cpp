/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-identity/model/MappingRuleMatchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentity
  {
    namespace Model
    {
      namespace MappingRuleMatchTypeMapper
      {

        static constexpr uint32_t Equals_HASH = ConstExprHashingUtils::HashString("Equals");
        static constexpr uint32_t Contains_HASH = ConstExprHashingUtils::HashString("Contains");
        static constexpr uint32_t StartsWith_HASH = ConstExprHashingUtils::HashString("StartsWith");
        static constexpr uint32_t NotEqual_HASH = ConstExprHashingUtils::HashString("NotEqual");


        MappingRuleMatchType GetMappingRuleMatchTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Equals_HASH)
          {
            return MappingRuleMatchType::Equals;
          }
          else if (hashCode == Contains_HASH)
          {
            return MappingRuleMatchType::Contains;
          }
          else if (hashCode == StartsWith_HASH)
          {
            return MappingRuleMatchType::StartsWith;
          }
          else if (hashCode == NotEqual_HASH)
          {
            return MappingRuleMatchType::NotEqual;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MappingRuleMatchType>(hashCode);
          }

          return MappingRuleMatchType::NOT_SET;
        }

        Aws::String GetNameForMappingRuleMatchType(MappingRuleMatchType enumValue)
        {
          switch(enumValue)
          {
          case MappingRuleMatchType::NOT_SET:
            return {};
          case MappingRuleMatchType::Equals:
            return "Equals";
          case MappingRuleMatchType::Contains:
            return "Contains";
          case MappingRuleMatchType::StartsWith:
            return "StartsWith";
          case MappingRuleMatchType::NotEqual:
            return "NotEqual";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MappingRuleMatchTypeMapper
    } // namespace Model
  } // namespace CognitoIdentity
} // namespace Aws
