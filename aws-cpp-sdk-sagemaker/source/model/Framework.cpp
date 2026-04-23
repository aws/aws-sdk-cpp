/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/Framework.h>
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
      namespace FrameworkMapper
      {

        static const int TENSORFLOW_HASH = HashingUtils::HashString("TENSORFLOW");
        static const int MXNET_HASH = HashingUtils::HashString("MXNET");
        static const int ONNX_HASH = HashingUtils::HashString("ONNX");
        static const int PYTORCH_HASH = HashingUtils::HashString("PYTORCH");
        static const int XGBOOST_HASH = HashingUtils::HashString("XGBOOST");


        Framework GetFrameworkForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TENSORFLOW_HASH)
          {
            return Framework::TENSORFLOW;
          }
          else if (hashCode == MXNET_HASH)
          {
            return Framework::MXNET;
          }
          else if (hashCode == ONNX_HASH)
          {
            return Framework::ONNX;
          }
          else if (hashCode == PYTORCH_HASH)
          {
            return Framework::PYTORCH;
          }
          else if (hashCode == XGBOOST_HASH)
          {
            return Framework::XGBOOST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Framework>(hashCode);
          }

          return Framework::NOT_SET;
        }

        Aws::String GetNameForFramework(Framework enumValue)
        {
          switch(enumValue)
          {
          case Framework::TENSORFLOW:
            return "TENSORFLOW";
          case Framework::MXNET:
            return "MXNET";
          case Framework::ONNX:
            return "ONNX";
          case Framework::PYTORCH:
            return "PYTORCH";
          case Framework::XGBOOST:
            return "XGBOOST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FrameworkMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
