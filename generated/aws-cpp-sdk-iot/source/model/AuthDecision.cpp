/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
