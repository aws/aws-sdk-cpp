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

#include <aws/apigatewayv2/model/PassthroughBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApiGatewayV2
  {
    namespace Model
    {
      namespace PassthroughBehaviorMapper
      {

        static const int WHEN_NO_MATCH_HASH = HashingUtils::HashString("WHEN_NO_MATCH");
        static const int NEVER_HASH = HashingUtils::HashString("NEVER");
        static const int WHEN_NO_TEMPLATES_HASH = HashingUtils::HashString("WHEN_NO_TEMPLATES");


        PassthroughBehavior GetPassthroughBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WHEN_NO_MATCH_HASH)
          {
            return PassthroughBehavior::WHEN_NO_MATCH;
          }
          else if (hashCode == NEVER_HASH)
          {
            return PassthroughBehavior::NEVER;
          }
          else if (hashCode == WHEN_NO_TEMPLATES_HASH)
          {
            return PassthroughBehavior::WHEN_NO_TEMPLATES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PassthroughBehavior>(hashCode);
          }

          return PassthroughBehavior::NOT_SET;
        }

        Aws::String GetNameForPassthroughBehavior(PassthroughBehavior enumValue)
        {
          switch(enumValue)
          {
          case PassthroughBehavior::WHEN_NO_MATCH:
            return "WHEN_NO_MATCH";
          case PassthroughBehavior::NEVER:
            return "NEVER";
          case PassthroughBehavior::WHEN_NO_TEMPLATES:
            return "WHEN_NO_TEMPLATES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PassthroughBehaviorMapper
    } // namespace Model
  } // namespace ApiGatewayV2
} // namespace Aws
