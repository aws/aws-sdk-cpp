/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ModelInfrastructureType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ModelInfrastructureTypeMapper
      {

        static const int RealTimeInference_HASH = HashingUtils::HashString("RealTimeInference");


        ModelInfrastructureType GetModelInfrastructureTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RealTimeInference_HASH)
          {
            return ModelInfrastructureType::RealTimeInference;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelInfrastructureType>(hashCode);
          }

          return ModelInfrastructureType::NOT_SET;
        }

        Aws::String GetNameForModelInfrastructureType(ModelInfrastructureType enumValue)
        {
          switch(enumValue)
          {
          case ModelInfrastructureType::RealTimeInference:
            return "RealTimeInference";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelInfrastructureTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
