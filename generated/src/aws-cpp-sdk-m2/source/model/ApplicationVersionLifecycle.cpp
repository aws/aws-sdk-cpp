/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/ApplicationVersionLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MainframeModernization
  {
    namespace Model
    {
      namespace ApplicationVersionLifecycleMapper
      {

        static constexpr uint32_t Creating_HASH = ConstExprHashingUtils::HashString("Creating");
        static constexpr uint32_t Available_HASH = ConstExprHashingUtils::HashString("Available");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        ApplicationVersionLifecycle GetApplicationVersionLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Creating_HASH)
          {
            return ApplicationVersionLifecycle::Creating;
          }
          else if (hashCode == Available_HASH)
          {
            return ApplicationVersionLifecycle::Available;
          }
          else if (hashCode == Failed_HASH)
          {
            return ApplicationVersionLifecycle::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationVersionLifecycle>(hashCode);
          }

          return ApplicationVersionLifecycle::NOT_SET;
        }

        Aws::String GetNameForApplicationVersionLifecycle(ApplicationVersionLifecycle enumValue)
        {
          switch(enumValue)
          {
          case ApplicationVersionLifecycle::NOT_SET:
            return {};
          case ApplicationVersionLifecycle::Creating:
            return "Creating";
          case ApplicationVersionLifecycle::Available:
            return "Available";
          case ApplicationVersionLifecycle::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplicationVersionLifecycleMapper
    } // namespace Model
  } // namespace MainframeModernization
} // namespace Aws
