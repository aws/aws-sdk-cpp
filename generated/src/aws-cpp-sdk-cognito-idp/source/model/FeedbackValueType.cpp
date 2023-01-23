/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/FeedbackValueType.h>
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
      namespace FeedbackValueTypeMapper
      {

        static const int Valid_HASH = HashingUtils::HashString("Valid");
        static const int Invalid_HASH = HashingUtils::HashString("Invalid");


        FeedbackValueType GetFeedbackValueTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Valid_HASH)
          {
            return FeedbackValueType::Valid;
          }
          else if (hashCode == Invalid_HASH)
          {
            return FeedbackValueType::Invalid;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeedbackValueType>(hashCode);
          }

          return FeedbackValueType::NOT_SET;
        }

        Aws::String GetNameForFeedbackValueType(FeedbackValueType enumValue)
        {
          switch(enumValue)
          {
          case FeedbackValueType::Valid:
            return "Valid";
          case FeedbackValueType::Invalid:
            return "Invalid";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeedbackValueTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
