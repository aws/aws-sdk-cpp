/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/machinelearning/model/DetailsAttributes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MachineLearning
  {
    namespace Model
    {
      namespace DetailsAttributesMapper
      {

        static const int PredictiveModelType_HASH = HashingUtils::HashString("PredictiveModelType");
        static const int Algorithm_HASH = HashingUtils::HashString("Algorithm");


        DetailsAttributes GetDetailsAttributesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PredictiveModelType_HASH)
          {
            return DetailsAttributes::PredictiveModelType;
          }
          else if (hashCode == Algorithm_HASH)
          {
            return DetailsAttributes::Algorithm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetailsAttributes>(hashCode);
          }

          return DetailsAttributes::NOT_SET;
        }

        Aws::String GetNameForDetailsAttributes(DetailsAttributes enumValue)
        {
          switch(enumValue)
          {
          case DetailsAttributes::PredictiveModelType:
            return "PredictiveModelType";
          case DetailsAttributes::Algorithm:
            return "Algorithm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetailsAttributesMapper
    } // namespace Model
  } // namespace MachineLearning
} // namespace Aws
