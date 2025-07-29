/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceEnvironmentType.h>
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
      namespace ServiceEnvironmentTypeMapper
      {

        static const int SAGEMAKER_TRAINING_HASH = HashingUtils::HashString("SAGEMAKER_TRAINING");


        ServiceEnvironmentType GetServiceEnvironmentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAGEMAKER_TRAINING_HASH)
          {
            return ServiceEnvironmentType::SAGEMAKER_TRAINING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceEnvironmentType>(hashCode);
          }

          return ServiceEnvironmentType::NOT_SET;
        }

        Aws::String GetNameForServiceEnvironmentType(ServiceEnvironmentType enumValue)
        {
          switch(enumValue)
          {
          case ServiceEnvironmentType::NOT_SET:
            return {};
          case ServiceEnvironmentType::SAGEMAKER_TRAINING:
            return "SAGEMAKER_TRAINING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServiceEnvironmentTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
