/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/ModelSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace ModelSourceMapper
      {

        static const int SAGEMAKER_HASH = HashingUtils::HashString("SAGEMAKER");


        ModelSource GetModelSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAGEMAKER_HASH)
          {
            return ModelSource::SAGEMAKER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelSource>(hashCode);
          }

          return ModelSource::NOT_SET;
        }

        Aws::String GetNameForModelSource(ModelSource enumValue)
        {
          switch(enumValue)
          {
          case ModelSource::SAGEMAKER:
            return "SAGEMAKER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelSourceMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
