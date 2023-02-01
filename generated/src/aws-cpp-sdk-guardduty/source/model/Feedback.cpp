/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/Feedback.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace FeedbackMapper
      {

        static const int USEFUL_HASH = HashingUtils::HashString("USEFUL");
        static const int NOT_USEFUL_HASH = HashingUtils::HashString("NOT_USEFUL");


        Feedback GetFeedbackForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USEFUL_HASH)
          {
            return Feedback::USEFUL;
          }
          else if (hashCode == NOT_USEFUL_HASH)
          {
            return Feedback::NOT_USEFUL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Feedback>(hashCode);
          }

          return Feedback::NOT_SET;
        }

        Aws::String GetNameForFeedback(Feedback enumValue)
        {
          switch(enumValue)
          {
          case Feedback::USEFUL:
            return "USEFUL";
          case Feedback::NOT_USEFUL:
            return "NOT_USEFUL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeedbackMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
