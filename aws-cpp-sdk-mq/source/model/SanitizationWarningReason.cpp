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
