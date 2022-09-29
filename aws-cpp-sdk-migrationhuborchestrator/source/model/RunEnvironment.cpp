/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/RunEnvironment.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubOrchestrator
  {
    namespace Model
    {
      namespace RunEnvironmentMapper
      {

        static const int AWS_HASH = HashingUtils::HashString("AWS");
        static const int ONPREMISE_HASH = HashingUtils::HashString("ONPREMISE");


        RunEnvironment GetRunEnvironmentForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_HASH)
          {
            return RunEnvironment::AWS;
          }
          else if (hashCode == ONPREMISE_HASH)
          {
            return RunEnvironment::ONPREMISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RunEnvironment>(hashCode);
          }

          return RunEnvironment::NOT_SET;
        }

        Aws::String GetNameForRunEnvironment(RunEnvironment enumValue)
        {
          switch(enumValue)
          {
          case RunEnvironment::AWS:
            return "AWS";
          case RunEnvironment::ONPREMISE:
            return "ONPREMISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RunEnvironmentMapper
    } // namespace Model
  } // namespace MigrationHubOrchestrator
} // namespace Aws
