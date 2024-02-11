/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/FormTypeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace FormTypeStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        FormTypeStatus GetFormTypeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return FormTypeStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return FormTypeStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FormTypeStatus>(hashCode);
          }

          return FormTypeStatus::NOT_SET;
        }

        Aws::String GetNameForFormTypeStatus(FormTypeStatus enumValue)
        {
          switch(enumValue)
          {
          case FormTypeStatus::NOT_SET:
            return {};
          case FormTypeStatus::ENABLED:
            return "ENABLED";
          case FormTypeStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FormTypeStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
