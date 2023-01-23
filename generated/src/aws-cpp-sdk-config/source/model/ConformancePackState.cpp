/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/ConformancePackState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace ConformancePackStateMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int CREATE_COMPLETE_HASH = HashingUtils::HashString("CREATE_COMPLETE");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETE_IN_PROGRESS_HASH = HashingUtils::HashString("DELETE_IN_PROGRESS");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ConformancePackState GetConformancePackStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return ConformancePackState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == CREATE_COMPLETE_HASH)
          {
            return ConformancePackState::CREATE_COMPLETE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ConformancePackState::CREATE_FAILED;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return ConformancePackState::DELETE_IN_PROGRESS;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ConformancePackState::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConformancePackState>(hashCode);
          }

          return ConformancePackState::NOT_SET;
        }

        Aws::String GetNameForConformancePackState(ConformancePackState enumValue)
        {
          switch(enumValue)
          {
          case ConformancePackState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case ConformancePackState::CREATE_COMPLETE:
            return "CREATE_COMPLETE";
          case ConformancePackState::CREATE_FAILED:
            return "CREATE_FAILED";
          case ConformancePackState::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          case ConformancePackState::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConformancePackStateMapper
    } // namespace Model
  } // namespace ConfigService
} // namespace Aws
