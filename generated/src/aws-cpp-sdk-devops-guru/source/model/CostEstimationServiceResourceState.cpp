﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/CostEstimationServiceResourceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace CostEstimationServiceResourceStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        CostEstimationServiceResourceState GetCostEstimationServiceResourceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return CostEstimationServiceResourceState::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return CostEstimationServiceResourceState::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CostEstimationServiceResourceState>(hashCode);
          }

          return CostEstimationServiceResourceState::NOT_SET;
        }

        Aws::String GetNameForCostEstimationServiceResourceState(CostEstimationServiceResourceState enumValue)
        {
          switch(enumValue)
          {
          case CostEstimationServiceResourceState::NOT_SET:
            return {};
          case CostEstimationServiceResourceState::ACTIVE:
            return "ACTIVE";
          case CostEstimationServiceResourceState::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CostEstimationServiceResourceStateMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
