/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/LatestInferenceResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace LatestInferenceResultMapper
      {

        static const int ANOMALOUS_HASH = HashingUtils::HashString("ANOMALOUS");
        static const int NORMAL_HASH = HashingUtils::HashString("NORMAL");


        LatestInferenceResult GetLatestInferenceResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ANOMALOUS_HASH)
          {
            return LatestInferenceResult::ANOMALOUS;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return LatestInferenceResult::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LatestInferenceResult>(hashCode);
          }

          return LatestInferenceResult::NOT_SET;
        }

        Aws::String GetNameForLatestInferenceResult(LatestInferenceResult enumValue)
        {
          switch(enumValue)
          {
          case LatestInferenceResult::ANOMALOUS:
            return "ANOMALOUS";
          case LatestInferenceResult::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LatestInferenceResultMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
