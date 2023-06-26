/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/BehaviorOnMXFailure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SES
  {
    namespace Model
    {
      namespace BehaviorOnMXFailureMapper
      {

        static const int UseDefaultValue_HASH = HashingUtils::HashString("UseDefaultValue");
        static const int RejectMessage_HASH = HashingUtils::HashString("RejectMessage");


        BehaviorOnMXFailure GetBehaviorOnMXFailureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UseDefaultValue_HASH)
          {
            return BehaviorOnMXFailure::UseDefaultValue;
          }
          else if (hashCode == RejectMessage_HASH)
          {
            return BehaviorOnMXFailure::RejectMessage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BehaviorOnMXFailure>(hashCode);
          }

          return BehaviorOnMXFailure::NOT_SET;
        }

        Aws::String GetNameForBehaviorOnMXFailure(BehaviorOnMXFailure enumValue)
        {
          switch(enumValue)
          {
          case BehaviorOnMXFailure::UseDefaultValue:
            return "UseDefaultValue";
          case BehaviorOnMXFailure::RejectMessage:
            return "RejectMessage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BehaviorOnMXFailureMapper
    } // namespace Model
  } // namespace SES
} // namespace Aws
