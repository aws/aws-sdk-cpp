/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/JoinRequiredOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace JoinRequiredOptionMapper
      {

        static const int QUERY_RUNNER_HASH = HashingUtils::HashString("QUERY_RUNNER");


        JoinRequiredOption GetJoinRequiredOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERY_RUNNER_HASH)
          {
            return JoinRequiredOption::QUERY_RUNNER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JoinRequiredOption>(hashCode);
          }

          return JoinRequiredOption::NOT_SET;
        }

        Aws::String GetNameForJoinRequiredOption(JoinRequiredOption enumValue)
        {
          switch(enumValue)
          {
          case JoinRequiredOption::NOT_SET:
            return {};
          case JoinRequiredOption::QUERY_RUNNER:
            return "QUERY_RUNNER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JoinRequiredOptionMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
