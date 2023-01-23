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

        static const int ENABLE_HASH = HashingUtils::HashString("ENABLE");
        static const int DISABLE_HASH = HashingUtils::HashString("DISABLE");


        AutoRegistrationStatus GetAutoRegistrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
