/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
        static const int KERAS_HASH = HashingUtils::HashString("KERAS");
        static const int MXNET_HASH = HashingUtils::HashString("MXNET");
        static const int ONNX_HASH = HashingUtils::HashString("ONNX");
        static const int PYTORCH_HASH = HashingUtils::HashString("PYTORCH");
        static const int XGBOOST_HASH = HashingUtils::HashString("XGBOOST");
        static const int TFLITE_HASH = HashingUtils::HashString("TFLITE");
        static const int DARKNET_HASH = HashingUtils::HashString("DARKNET");


        Framework GetFrameworkForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TENSORFLOW_HASH)
          {
            return Framework::TENSORFLOW;
          }
          else if (hashCode == KERAS_HASH)
          {
            return Framework::KERAS;
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
          else if (hashCode == TFLITE_HASH)
          {
            return Framework::TFLITE;
          }
          else if (hashCode == DARKNET_HASH)
          {
            return Framework::DARKNET;
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
          case Framework::KERAS:
            return "KERAS";
          case Framework::MXNET:
            return "MXNET";
          case Framework::ONNX:
            return "ONNX";
          case Framework::PYTORCH:
            return "PYTORCH";
          case Framework::XGBOOST:
            return "XGBOOST";
          case Framework::TFLITE:
            return "TFLITE";
          case Framework::DARKNET:
            return "DARKNET";
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
