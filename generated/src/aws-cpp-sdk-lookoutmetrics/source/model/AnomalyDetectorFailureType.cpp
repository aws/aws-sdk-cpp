/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/AnomalyDetectorFailureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutMetrics
  {
    namespace Model
    {
      namespace AnomalyDetectorFailureTypeMapper
      {

        static const int ACTIVATION_FAILURE_HASH = HashingUtils::HashString("ACTIVATION_FAILURE");
        static const int BACK_TEST_ACTIVATION_FAILURE_HASH = HashingUtils::HashString("BACK_TEST_ACTIVATION_FAILURE");
        static const int DELETION_FAILURE_HASH = HashingUtils::HashString("DELETION_FAILURE");
        static const int DEACTIVATION_FAILURE_HASH = HashingUtils::HashString("DEACTIVATION_FAILURE");


        AnomalyDetectorFailureType GetAnomalyDetectorFailureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVATION_FAILURE_HASH)
          {
            return AnomalyDetectorFailureType::ACTIVATION_FAILURE;
          }
          else if (hashCode == BACK_TEST_ACTIVATION_FAILURE_HASH)
          {
            return AnomalyDetectorFailureType::BACK_TEST_ACTIVATION_FAILURE;
          }
          else if (hashCode == DELETION_FAILURE_HASH)
          {
            return AnomalyDetectorFailureType::DELETION_FAILURE;
          }
          else if (hashCode == DEACTIVATION_FAILURE_HASH)
          {
            return AnomalyDetectorFailureType::DEACTIVATION_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnomalyDetectorFailureType>(hashCode);
          }

          return AnomalyDetectorFailureType::NOT_SET;
        }

        Aws::String GetNameForAnomalyDetectorFailureType(AnomalyDetectorFailureType enumValue)
        {
          switch(enumValue)
          {
          case AnomalyDetectorFailureType::NOT_SET:
            return {};
          case AnomalyDetectorFailureType::ACTIVATION_FAILURE:
            return "ACTIVATION_FAILURE";
          case AnomalyDetectorFailureType::BACK_TEST_ACTIVATION_FAILURE:
            return "BACK_TEST_ACTIVATION_FAILURE";
          case AnomalyDetectorFailureType::DELETION_FAILURE:
            return "DELETION_FAILURE";
          case AnomalyDetectorFailureType::DEACTIVATION_FAILURE:
            return "DEACTIVATION_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnomalyDetectorFailureTypeMapper
    } // namespace Model
  } // namespace LookoutMetrics
} // namespace Aws
