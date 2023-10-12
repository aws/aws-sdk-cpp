/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeprecatedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace DeprecatedStatusMapper
      {

        static constexpr uint32_t LIVE_HASH = ConstExprHashingUtils::HashString("LIVE");
        static constexpr uint32_t DEPRECATED_HASH = ConstExprHashingUtils::HashString("DEPRECATED");


        DeprecatedStatus GetDeprecatedStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIVE_HASH)
          {
            return DeprecatedStatus::LIVE;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return DeprecatedStatus::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeprecatedStatus>(hashCode);
          }

          return DeprecatedStatus::NOT_SET;
        }

        Aws::String GetNameForDeprecatedStatus(DeprecatedStatus enumValue)
        {
          switch(enumValue)
          {
          case DeprecatedStatus::NOT_SET:
            return {};
          case DeprecatedStatus::LIVE:
            return "LIVE";
          case DeprecatedStatus::DEPRECATED:
            return "DEPRECATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeprecatedStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
