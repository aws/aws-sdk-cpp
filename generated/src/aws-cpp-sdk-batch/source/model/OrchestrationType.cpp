/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/OrchestrationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace OrchestrationTypeMapper
      {

        static const int ECS_HASH = HashingUtils::HashString("ECS");
        static const int EKS_HASH = HashingUtils::HashString("EKS");


        OrchestrationType GetOrchestrationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ECS_HASH)
          {
            return OrchestrationType::ECS;
          }
          else if (hashCode == EKS_HASH)
          {
            return OrchestrationType::EKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrchestrationType>(hashCode);
          }

          return OrchestrationType::NOT_SET;
        }

        Aws::String GetNameForOrchestrationType(OrchestrationType enumValue)
        {
          switch(enumValue)
          {
          case OrchestrationType::ECS:
            return "ECS";
          case OrchestrationType::EKS:
            return "EKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrchestrationTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
