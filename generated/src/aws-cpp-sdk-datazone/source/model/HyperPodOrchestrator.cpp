/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/HyperPodOrchestrator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace HyperPodOrchestratorMapper
      {

        static const int EKS_HASH = HashingUtils::HashString("EKS");
        static const int SLURM_HASH = HashingUtils::HashString("SLURM");


        HyperPodOrchestrator GetHyperPodOrchestratorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_HASH)
          {
            return HyperPodOrchestrator::EKS;
          }
          else if (hashCode == SLURM_HASH)
          {
            return HyperPodOrchestrator::SLURM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HyperPodOrchestrator>(hashCode);
          }

          return HyperPodOrchestrator::NOT_SET;
        }

        Aws::String GetNameForHyperPodOrchestrator(HyperPodOrchestrator enumValue)
        {
          switch(enumValue)
          {
          case HyperPodOrchestrator::NOT_SET:
            return {};
          case HyperPodOrchestrator::EKS:
            return "EKS";
          case HyperPodOrchestrator::SLURM:
            return "SLURM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HyperPodOrchestratorMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
