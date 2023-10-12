/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/CloudHsmObjectState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSM
  {
    namespace Model
    {
      namespace CloudHsmObjectStateMapper
      {

        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DEGRADED_HASH = ConstExprHashingUtils::HashString("DEGRADED");


        CloudHsmObjectState GetCloudHsmObjectStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == READY_HASH)
          {
            return CloudHsmObjectState::READY;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return CloudHsmObjectState::UPDATING;
          }
          else if (hashCode == DEGRADED_HASH)
          {
            return CloudHsmObjectState::DEGRADED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CloudHsmObjectState>(hashCode);
          }

          return CloudHsmObjectState::NOT_SET;
        }

        Aws::String GetNameForCloudHsmObjectState(CloudHsmObjectState enumValue)
        {
          switch(enumValue)
          {
          case CloudHsmObjectState::NOT_SET:
            return {};
          case CloudHsmObjectState::READY:
            return "READY";
          case CloudHsmObjectState::UPDATING:
            return "UPDATING";
          case CloudHsmObjectState::DEGRADED:
            return "DEGRADED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CloudHsmObjectStateMapper
    } // namespace Model
  } // namespace CloudHSM
} // namespace Aws
