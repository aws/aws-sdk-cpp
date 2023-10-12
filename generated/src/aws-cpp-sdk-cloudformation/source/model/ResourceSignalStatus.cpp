/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ResourceSignalStatus.h>
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
      namespace ResourceSignalStatusMapper
      {

        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t FAILURE_HASH = ConstExprHashingUtils::HashString("FAILURE");


        ResourceSignalStatus GetResourceSignalStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return ResourceSignalStatus::SUCCESS;
          }
          else if (hashCode == FAILURE_HASH)
          {
            return ResourceSignalStatus::FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceSignalStatus>(hashCode);
          }

          return ResourceSignalStatus::NOT_SET;
        }

        Aws::String GetNameForResourceSignalStatus(ResourceSignalStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceSignalStatus::NOT_SET:
            return {};
          case ResourceSignalStatus::SUCCESS:
            return "SUCCESS";
          case ResourceSignalStatus::FAILURE:
            return "FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceSignalStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
