/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/InstanceAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace InstanceActionMapper
      {

        static constexpr uint32_t TERMINATE_HASH = ConstExprHashingUtils::HashString("TERMINATE");
        static constexpr uint32_t KEEP_ALIVE_HASH = ConstExprHashingUtils::HashString("KEEP_ALIVE");


        InstanceAction GetInstanceActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TERMINATE_HASH)
          {
            return InstanceAction::TERMINATE;
          }
          else if (hashCode == KEEP_ALIVE_HASH)
          {
            return InstanceAction::KEEP_ALIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InstanceAction>(hashCode);
          }

          return InstanceAction::NOT_SET;
        }

        Aws::String GetNameForInstanceAction(InstanceAction enumValue)
        {
          switch(enumValue)
          {
          case InstanceAction::NOT_SET:
            return {};
          case InstanceAction::TERMINATE:
            return "TERMINATE";
          case InstanceAction::KEEP_ALIVE:
            return "KEEP_ALIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InstanceActionMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
