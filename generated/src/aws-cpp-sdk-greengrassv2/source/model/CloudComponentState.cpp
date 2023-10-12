/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/CloudComponentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace CloudComponentStateMapper
      {

        static constexpr uint32_t REQUESTED_HASH = ConstExprHashingUtils::HashString("REQUESTED");
        static constexpr uint32_t INITIATED_HASH = ConstExprHashingUtils::HashString("INITIATED");
        static constexpr uint32_t DEPLOYABLE_HASH = ConstExprHashingUtils::HashString("DEPLOYABLE");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t DEPRECATED_HASH = ConstExprHashingUtils::HashString("DEPRECATED");


        CloudComponentState GetCloudComponentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REQUESTED_HASH)
          {
            return CloudComponentState::REQUESTED;
          }
          else if (hashCode == INITIATED_HASH)
          {
            return CloudComponentState::INITIATED;
          }
          else if (hashCode == DEPLOYABLE_HASH)
          {
            return CloudComponentState::DEPLOYABLE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CloudComponentState::FAILED;
          }
          else if (hashCode == DEPRECATED_HASH)
          {
            return CloudComponentState::DEPRECATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudComponentState>(hashCode);
          }

          return CloudComponentState::NOT_SET;
        }

        Aws::String GetNameForCloudComponentState(CloudComponentState enumValue)
        {
          switch(enumValue)
          {
          case CloudComponentState::NOT_SET:
            return {};
          case CloudComponentState::REQUESTED:
            return "REQUESTED";
          case CloudComponentState::INITIATED:
            return "INITIATED";
          case CloudComponentState::DEPLOYABLE:
            return "DEPLOYABLE";
          case CloudComponentState::FAILED:
            return "FAILED";
          case CloudComponentState::DEPRECATED:
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

      } // namespace CloudComponentStateMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
