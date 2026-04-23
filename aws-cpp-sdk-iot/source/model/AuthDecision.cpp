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

#include <aws/iot/model/AuthDecision.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AuthDecisionMapper
      {

        static const int ALLOWED_HASH = HashingUtils::HashString("ALLOWED");
        static const int EXPLICIT_DENY_HASH = HashingUtils::HashString("EXPLICIT_DENY");
        static const int IMPLICIT_DENY_HASH = HashingUtils::HashString("IMPLICIT_DENY");


        AuthDecision GetAuthDecisionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOWED_HASH)
          {
            return AuthDecision::ALLOWED;
          }
          else if (hashCode == EXPLICIT_DENY_HASH)
          {
            return AuthDecision::EXPLICIT_DENY;
          }
          else if (hashCode == IMPLICIT_DENY_HASH)
          {
            return AuthDecision::IMPLICIT_DENY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuthDecision>(hashCode);
          }

          return AuthDecision::NOT_SET;
        }

        Aws::String GetNameForAuthDecision(AuthDecision enumValue)
        {
          switch(enumValue)
          {
          case AuthDecision::ALLOWED:
            return "ALLOWED";
          case AuthDecision::EXPLICIT_DENY:
            return "EXPLICIT_DENY";
          case AuthDecision::IMPLICIT_DENY:
            return "IMPLICIT_DENY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuthDecisionMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
