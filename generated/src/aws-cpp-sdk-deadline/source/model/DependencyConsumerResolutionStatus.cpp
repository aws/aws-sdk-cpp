/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/DependencyConsumerResolutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace DependencyConsumerResolutionStatusMapper
      {

        static const int RESOLVED_HASH = HashingUtils::HashString("RESOLVED");
        static const int UNRESOLVED_HASH = HashingUtils::HashString("UNRESOLVED");


        DependencyConsumerResolutionStatus GetDependencyConsumerResolutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOLVED_HASH)
          {
            return DependencyConsumerResolutionStatus::RESOLVED;
          }
          else if (hashCode == UNRESOLVED_HASH)
          {
            return DependencyConsumerResolutionStatus::UNRESOLVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DependencyConsumerResolutionStatus>(hashCode);
          }

          return DependencyConsumerResolutionStatus::NOT_SET;
        }

        Aws::String GetNameForDependencyConsumerResolutionStatus(DependencyConsumerResolutionStatus enumValue)
        {
          switch(enumValue)
          {
          case DependencyConsumerResolutionStatus::NOT_SET:
            return {};
          case DependencyConsumerResolutionStatus::RESOLVED:
            return "RESOLVED";
          case DependencyConsumerResolutionStatus::UNRESOLVED:
            return "UNRESOLVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DependencyConsumerResolutionStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
