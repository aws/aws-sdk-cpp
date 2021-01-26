/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CaptureMode.h>
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
      namespace CaptureModeMapper
      {

        static const int Input_HASH = HashingUtils::HashString("Input");
        static const int Output_HASH = HashingUtils::HashString("Output");


        CaptureMode GetCaptureModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Input_HASH)
          {
            return CaptureMode::Input;
          }
          else if (hashCode == Output_HASH)
          {
            return CaptureMode::Output;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptureMode>(hashCode);
          }

          return CaptureMode::NOT_SET;
        }

        Aws::String GetNameForCaptureMode(CaptureMode enumValue)
        {
          switch(enumValue)
          {
          case CaptureMode::Input:
            return "Input";
          case CaptureMode::Output:
            return "Output";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaptureModeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
