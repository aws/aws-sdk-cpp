/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/ServiceJobType.h>
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
      namespace ServiceJobTypeMapper
      {

        static const int SAGEMAKER_TRAINING_HASH = HashingUtils::HashString("SAGEMAKER_TRAINING");


        ServiceJobType GetServiceJobTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAGEMAKER_TRAINING_HASH)
          {
            return ServiceJobType::SAGEMAKER_TRAINING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceJobType>(hashCode);
          }

          return ServiceJobType::NOT_SET;
        }

        Aws::String GetNameForServiceJobType(ServiceJobType enumValue)
        {
          switch(enumValue)
          {
          case ServiceJobType::NOT_SET:
            return {};
          case ServiceJobType::SAGEMAKER_TRAINING:
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

      } // namespace ServiceJobTypeMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
