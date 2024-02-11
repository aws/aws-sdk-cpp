/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect-contact-lens/model/SentimentValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConnectContactLens
  {
    namespace Model
    {
      namespace SentimentValueMapper
      {

        static const int POSITIVE_HASH = HashingUtils::HashString("POSITIVE");
        static const int NEUTRAL_HASH = HashingUtils::HashString("NEUTRAL");
        static const int NEGATIVE_HASH = HashingUtils::HashString("NEGATIVE");


        SentimentValue GetSentimentValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POSITIVE_HASH)
          {
            return SentimentValue::POSITIVE;
          }
          else if (hashCode == NEUTRAL_HASH)
          {
            return SentimentValue::NEUTRAL;
          }
          else if (hashCode == NEGATIVE_HASH)
          {
            return SentimentValue::NEGATIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SentimentValue>(hashCode);
          }

          return SentimentValue::NOT_SET;
        }

        Aws::String GetNameForSentimentValue(SentimentValue enumValue)
        {
          switch(enumValue)
          {
          case SentimentValue::NOT_SET:
            return {};
          case SentimentValue::POSITIVE:
            return "POSITIVE";
          case SentimentValue::NEUTRAL:
            return "NEUTRAL";
          case SentimentValue::NEGATIVE:
            return "NEGATIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SentimentValueMapper
    } // namespace Model
  } // namespace ConnectContactLens
} // namespace Aws
