/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AutoAcceptSharedAssociationsValue.h>
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
      namespace AutoAcceptSharedAssociationsValueMapper
      {

        static constexpr uint32_t enable_HASH = ConstExprHashingUtils::HashString("enable");
        static constexpr uint32_t disable_HASH = ConstExprHashingUtils::HashString("disable");


        AutoAcceptSharedAssociationsValue GetAutoAcceptSharedAssociationsValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == enable_HASH)
          {
            return AutoAcceptSharedAssociationsValue::enable;
          }
          else if (hashCode == disable_HASH)
          {
            return AutoAcceptSharedAssociationsValue::disable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoAcceptSharedAssociationsValue>(hashCode);
          }

          return AutoAcceptSharedAssociationsValue::NOT_SET;
        }

        Aws::String GetNameForAutoAcceptSharedAssociationsValue(AutoAcceptSharedAssociationsValue enumValue)
        {
          switch(enumValue)
          {
          case AutoAcceptSharedAssociationsValue::NOT_SET:
            return {};
          case AutoAcceptSharedAssociationsValue::enable:
            return "enable";
          case AutoAcceptSharedAssociationsValue::disable:
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

      } // namespace AutoAcceptSharedAssociationsValueMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
