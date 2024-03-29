﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/LifecyclePolicyStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace imagebuilder
  {
    namespace Model
    {
      namespace LifecyclePolicyStatusMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        LifecyclePolicyStatus GetLifecyclePolicyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return LifecyclePolicyStatus::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return LifecyclePolicyStatus::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecyclePolicyStatus>(hashCode);
          }

          return LifecyclePolicyStatus::NOT_SET;
        }

        Aws::String GetNameForLifecyclePolicyStatus(LifecyclePolicyStatus enumValue)
        {
          switch(enumValue)
          {
          case LifecyclePolicyStatus::NOT_SET:
            return {};
          case LifecyclePolicyStatus::DISABLED:
            return "DISABLED";
          case LifecyclePolicyStatus::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecyclePolicyStatusMapper
    } // namespace Model
  } // namespace imagebuilder
} // namespace Aws
