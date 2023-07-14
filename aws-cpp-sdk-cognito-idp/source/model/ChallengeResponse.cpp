/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ChallengeResponse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace ChallengeResponseMapper
      {

        static const int Success_HASH = HashingUtils::HashString("Success");
        static const int Failure_HASH = HashingUtils::HashString("Failure");


        ChallengeResponse GetChallengeResponseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Success_HASH)
          {
            return ChallengeResponse::Success;
          }
          else if (hashCode == Failure_HASH)
          {
            return ChallengeResponse::Failure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChallengeResponse>(hashCode);
          }

          return ChallengeResponse::NOT_SET;
        }

        Aws::String GetNameForChallengeResponse(ChallengeResponse enumValue)
        {
          switch(enumValue)
          {
          case ChallengeResponse::Success:
            return "Success";
          case ChallengeResponse::Failure:
            return "Failure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChallengeResponseMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
