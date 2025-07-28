/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ComputationModelType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace ComputationModelTypeMapper
      {

        static const int ANOMALY_DETECTION_HASH = HashingUtils::HashString("ANOMALY_DETECTION");


        ComputationModelType GetComputationModelTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANOMALY_DETECTION_HASH)
          {
            return ComputationModelType::ANOMALY_DETECTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ComputationModelType>(hashCode);
          }

          return ComputationModelType::NOT_SET;
        }

        Aws::String GetNameForComputationModelType(ComputationModelType enumValue)
        {
          switch(enumValue)
          {
          case ComputationModelType::NOT_SET:
            return {};
          case ComputationModelType::ANOMALY_DETECTION:
            return "ANOMALY_DETECTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ComputationModelTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
