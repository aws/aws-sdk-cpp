/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/SanitizationWarningReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MQ
  {
    namespace Model
    {
      namespace SanitizationWarningReasonMapper
      {

        static const int DISALLOWED_ELEMENT_REMOVED_HASH = HashingUtils::HashString("DISALLOWED_ELEMENT_REMOVED");
        static const int DISALLOWED_ATTRIBUTE_REMOVED_HASH = HashingUtils::HashString("DISALLOWED_ATTRIBUTE_REMOVED");
        static const int INVALID_ATTRIBUTE_VALUE_REMOVED_HASH = HashingUtils::HashString("INVALID_ATTRIBUTE_VALUE_REMOVED");


        SanitizationWarningReason GetSanitizationWarningReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISALLOWED_ELEMENT_REMOVED_HASH)
          {
            return SanitizationWarningReason::DISALLOWED_ELEMENT_REMOVED;
          }
          else if (hashCode == DISALLOWED_ATTRIBUTE_REMOVED_HASH)
          {
            return SanitizationWarningReason::DISALLOWED_ATTRIBUTE_REMOVED;
          }
          else if (hashCode == INVALID_ATTRIBUTE_VALUE_REMOVED_HASH)
          {
            return SanitizationWarningReason::INVALID_ATTRIBUTE_VALUE_REMOVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SanitizationWarningReason>(hashCode);
          }

          return SanitizationWarningReason::NOT_SET;
        }

        Aws::String GetNameForSanitizationWarningReason(SanitizationWarningReason enumValue)
        {
          switch(enumValue)
          {
          case SanitizationWarningReason::DISALLOWED_ELEMENT_REMOVED:
            return "DISALLOWED_ELEMENT_REMOVED";
          case SanitizationWarningReason::DISALLOWED_ATTRIBUTE_REMOVED:
            return "DISALLOWED_ATTRIBUTE_REMOVED";
          case SanitizationWarningReason::INVALID_ATTRIBUTE_VALUE_REMOVED:
            return "INVALID_ATTRIBUTE_VALUE_REMOVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SanitizationWarningReasonMapper
    } // namespace Model
  } // namespace MQ
} // namespace Aws
