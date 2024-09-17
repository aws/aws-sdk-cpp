/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/ServiceLevelObjectiveBudgetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationSignals
  {
    namespace Model
    {
      namespace ServiceLevelObjectiveBudgetStatusMapper
      {

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int WARNING_HASH = HashingUtils::HashString("WARNING");
        static const int BREACHED_HASH = HashingUtils::HashString("BREACHED");
        static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");


        ServiceLevelObjectiveBudgetStatus GetServiceLevelObjectiveBudgetStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return ServiceLevelObjectiveBudgetStatus::OK;
          }
          else if (hashCode == WARNING_HASH)
          {
            return ServiceLevelObjectiveBudgetStatus::WARNING;
          }
          else if (hashCode == BREACHED_HASH)
          {
            return ServiceLevelObjectiveBudgetStatus::BREACHED;
          }
          else if (hashCode == INSUFFICIENT_DATA_HASH)
          {
            return ServiceLevelObjectiveBudgetStatus::INSUFFICIENT_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceLevelObjectiveBudgetStatus>(hashCode);
          }

          return ServiceLevelObjectiveBudgetStatus::NOT_SET;
        }

        Aws::String GetNameForServiceLevelObjectiveBudgetStatus(ServiceLevelObjectiveBudgetStatus enumValue)
        {
          switch(enumValue)
          {
          case ServiceLevelObjectiveBudgetStatus::NOT_SET:
            return {};
          case ServiceLevelObjectiveBudgetStatus::OK:
            return "OK";
          case ServiceLevelObjectiveBudgetStatus::WARNING:
            return "WARNING";
          case ServiceLevelObjectiveBudgetStatus::BREACHED:
            return "BREACHED";
          case ServiceLevelObjectiveBudgetStatus::INSUFFICIENT_DATA:
            return "INSUFFICIENT_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceLevelObjectiveBudgetStatusMapper
    } // namespace Model
  } // namespace ApplicationSignals
} // namespace Aws
