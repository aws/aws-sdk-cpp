/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateJobLifecycleStatus.h>
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
      namespace UpdateJobLifecycleStatusMapper
      {

        static const int ARCHIVED_HASH = HashingUtils::HashString("ARCHIVED");


        UpdateJobLifecycleStatus GetUpdateJobLifecycleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ARCHIVED_HASH)
          {
            return UpdateJobLifecycleStatus::ARCHIVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateJobLifecycleStatus>(hashCode);
          }

          return UpdateJobLifecycleStatus::NOT_SET;
        }

        Aws::String GetNameForUpdateJobLifecycleStatus(UpdateJobLifecycleStatus enumValue)
        {
          switch(enumValue)
          {
          case UpdateJobLifecycleStatus::NOT_SET:
            return {};
          case UpdateJobLifecycleStatus::ARCHIVED:
            return "ARCHIVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateJobLifecycleStatusMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
