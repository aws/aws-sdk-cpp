/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeploymentFailureHandlingPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace DeploymentFailureHandlingPolicyMapper
      {

        static const int ROLLBACK_HASH = HashingUtils::HashString("ROLLBACK");
        static const int DO_NOTHING_HASH = HashingUtils::HashString("DO_NOTHING");


        DeploymentFailureHandlingPolicy GetDeploymentFailureHandlingPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROLLBACK_HASH)
          {
            return DeploymentFailureHandlingPolicy::ROLLBACK;
          }
          else if (hashCode == DO_NOTHING_HASH)
          {
            return DeploymentFailureHandlingPolicy::DO_NOTHING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeploymentFailureHandlingPolicy>(hashCode);
          }

          return DeploymentFailureHandlingPolicy::NOT_SET;
        }

        Aws::String GetNameForDeploymentFailureHandlingPolicy(DeploymentFailureHandlingPolicy enumValue)
        {
          switch(enumValue)
          {
          case DeploymentFailureHandlingPolicy::NOT_SET:
            return {};
          case DeploymentFailureHandlingPolicy::ROLLBACK:
            return "ROLLBACK";
          case DeploymentFailureHandlingPolicy::DO_NOTHING:
            return "DO_NOTHING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeploymentFailureHandlingPolicyMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
