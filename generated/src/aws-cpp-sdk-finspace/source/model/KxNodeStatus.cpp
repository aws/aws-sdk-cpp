/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxNodeStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace finspace
  {
    namespace Model
    {
      namespace KxNodeStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");


        KxNodeStatus GetKxNodeStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return KxNodeStatus::RUNNING;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return KxNodeStatus::PROVISIONING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<KxNodeStatus>(hashCode);
          }

          return KxNodeStatus::NOT_SET;
        }

        Aws::String GetNameForKxNodeStatus(KxNodeStatus enumValue)
        {
          switch(enumValue)
          {
          case KxNodeStatus::NOT_SET:
            return {};
          case KxNodeStatus::RUNNING:
            return "RUNNING";
          case KxNodeStatus::PROVISIONING:
            return "PROVISIONING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace KxNodeStatusMapper
    } // namespace Model
  } // namespace finspace
} // namespace Aws
