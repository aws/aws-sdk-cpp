/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AutoRegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace AutoRegistrationStatusMapper
      {

        static constexpr uint32_t ENABLE_HASH = ConstExprHashingUtils::HashString("ENABLE");
        static constexpr uint32_t DISABLE_HASH = ConstExprHashingUtils::HashString("DISABLE");


        AutoRegistrationStatus GetAutoRegistrationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_HASH)
          {
            return AutoRegistrationStatus::ENABLE;
          }
          else if (hashCode == DISABLE_HASH)
          {
            return AutoRegistrationStatus::DISABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoRegistrationStatus>(hashCode);
          }

          return AutoRegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForAutoRegistrationStatus(AutoRegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case AutoRegistrationStatus::NOT_SET:
            return {};
          case AutoRegistrationStatus::ENABLE:
            return "ENABLE";
          case AutoRegistrationStatus::DISABLE:
            return "DISABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoRegistrationStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
