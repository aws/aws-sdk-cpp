/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime-sdk-messaging/model/ExpirationCriterion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ChimeSDKMessaging
  {
    namespace Model
    {
      namespace ExpirationCriterionMapper
      {

        static const int CREATED_TIMESTAMP_HASH = HashingUtils::HashString("CREATED_TIMESTAMP");
        static const int LAST_MESSAGE_TIMESTAMP_HASH = HashingUtils::HashString("LAST_MESSAGE_TIMESTAMP");


        ExpirationCriterion GetExpirationCriterionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_TIMESTAMP_HASH)
          {
            return ExpirationCriterion::CREATED_TIMESTAMP;
          }
          else if (hashCode == LAST_MESSAGE_TIMESTAMP_HASH)
          {
            return ExpirationCriterion::LAST_MESSAGE_TIMESTAMP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExpirationCriterion>(hashCode);
          }

          return ExpirationCriterion::NOT_SET;
        }

        Aws::String GetNameForExpirationCriterion(ExpirationCriterion enumValue)
        {
          switch(enumValue)
          {
          case ExpirationCriterion::NOT_SET:
            return {};
          case ExpirationCriterion::CREATED_TIMESTAMP:
            return "CREATED_TIMESTAMP";
          case ExpirationCriterion::LAST_MESSAGE_TIMESTAMP:
            return "LAST_MESSAGE_TIMESTAMP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExpirationCriterionMapper
    } // namespace Model
  } // namespace ChimeSDKMessaging
} // namespace Aws
