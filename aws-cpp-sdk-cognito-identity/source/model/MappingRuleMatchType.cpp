/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

        static const int Equals_HASH = HashingUtils::HashString("Equals");
        static const int Contains_HASH = HashingUtils::HashString("Contains");
        static const int StartsWith_HASH = HashingUtils::HashString("StartsWith");
        static const int NotEqual_HASH = HashingUtils::HashString("NotEqual");


        MappingRuleMatchType GetMappingRuleMatchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace MappingRuleMatchTypeMapper
    } // namespace Model
  } // namespace CognitoIdentity
} // namespace Aws
