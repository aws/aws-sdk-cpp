/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apptest/model/CaptureTool.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppTest
  {
    namespace Model
    {
      namespace CaptureToolMapper
      {

        static const int Precisely_HASH = HashingUtils::HashString("Precisely");
        static const int AWS_DMS_HASH = HashingUtils::HashString("AWS DMS");


        CaptureTool GetCaptureToolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Precisely_HASH)
          {
            return CaptureTool::Precisely;
          }
          else if (hashCode == AWS_DMS_HASH)
          {
            return CaptureTool::AWS_DMS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CaptureTool>(hashCode);
          }

          return CaptureTool::NOT_SET;
        }

        Aws::String GetNameForCaptureTool(CaptureTool enumValue)
        {
          switch(enumValue)
          {
          case CaptureTool::NOT_SET:
            return {};
          case CaptureTool::Precisely:
            return "Precisely";
          case CaptureTool::AWS_DMS:
            return "AWS DMS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CaptureToolMapper
    } // namespace Model
  } // namespace AppTest
} // namespace Aws
