﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/JobType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Amplify
  {
    namespace Model
    {
      namespace JobTypeMapper
      {

        static const int RELEASE_HASH = HashingUtils::HashString("RELEASE");
        static const int RETRY_HASH = HashingUtils::HashString("RETRY");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int WEB_HOOK_HASH = HashingUtils::HashString("WEB_HOOK");


        JobType GetJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RELEASE_HASH)
          {
            return JobType::RELEASE;
          }
          else if (hashCode == RETRY_HASH)
          {
            return JobType::RETRY;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return JobType::MANUAL;
          }
          else if (hashCode == WEB_HOOK_HASH)
          {
            return JobType::WEB_HOOK;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobType>(hashCode);
          }

          return JobType::NOT_SET;
        }

        Aws::String GetNameForJobType(JobType enumValue)
        {
          switch(enumValue)
          {
          case JobType::RELEASE:
            return "RELEASE";
          case JobType::RETRY:
            return "RETRY";
          case JobType::MANUAL:
            return "MANUAL";
          case JobType::WEB_HOOK:
            return "WEB_HOOK";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobTypeMapper
    } // namespace Model
  } // namespace Amplify
} // namespace Aws
