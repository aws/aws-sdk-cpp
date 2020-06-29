/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AutoAcceptSharedAttachmentsValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace AutoAcceptSharedAttachmentsValueMapper
      {

        static const int enable_HASH = HashingUtils::HashString("enable");
        static const int disable_HASH = HashingUtils::HashString("disable");


        AutoAcceptSharedAttachmentsValue GetAutoAcceptSharedAttachmentsValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return AutoAcceptSharedAttachmentsValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return AutoAcceptSharedAttachmentsValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoAcceptSharedAttachmentsValue>(hashCode);
          }

          return AutoAcceptSharedAttachmentsValue::NOT_SET;
        }

        Aws::String GetNameForAutoAcceptSharedAttachmentsValue(AutoAcceptSharedAttachmentsValue enumValue)
        {
          switch(enumValue)
          {
          case AutoAcceptSharedAttachmentsValue::enable:
            return "enable";
          case AutoAcceptSharedAttachmentsValue::disable:
            return "disable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoAcceptSharedAttachmentsValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
