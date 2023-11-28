/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/FoundationModelLifecycleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Bedrock
  {
    namespace Model
    {
      namespace FoundationModelLifecycleStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int LEGACY_HASH = HashingUtils::HashString("LEGACY");


        FoundationModelLifecycleStatus GetFoundationModelLifecycleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return FoundationModelLifecycleStatus::ACTIVE;
          }
          else if (hashCode == LEGACY_HASH)
          {
            return FoundationModelLifecycleStatus::LEGACY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FoundationModelLifecycleStatus>(hashCode);
          }

          return FoundationModelLifecycleStatus::NOT_SET;
        }

        Aws::String GetNameForFoundationModelLifecycleStatus(FoundationModelLifecycleStatus enumValue)
        {
          switch(enumValue)
          {
          case FoundationModelLifecycleStatus::NOT_SET:
            return {};
          case FoundationModelLifecycleStatus::ACTIVE:
            return "ACTIVE";
          case FoundationModelLifecycleStatus::LEGACY:
            return "LEGACY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FoundationModelLifecycleStatusMapper
    } // namespace Model
  } // namespace Bedrock
} // namespace Aws
