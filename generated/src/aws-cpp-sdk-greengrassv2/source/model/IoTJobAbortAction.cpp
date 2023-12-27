/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/IoTJobAbortAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GreengrassV2
  {
    namespace Model
    {
      namespace IoTJobAbortActionMapper
      {

        static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");


        IoTJobAbortAction GetIoTJobAbortActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCEL_HASH)
          {
            return IoTJobAbortAction::CANCEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IoTJobAbortAction>(hashCode);
          }

          return IoTJobAbortAction::NOT_SET;
        }

        Aws::String GetNameForIoTJobAbortAction(IoTJobAbortAction enumValue)
        {
          switch(enumValue)
          {
          case IoTJobAbortAction::NOT_SET:
            return {};
          case IoTJobAbortAction::CANCEL:
            return "CANCEL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IoTJobAbortActionMapper
    } // namespace Model
  } // namespace GreengrassV2
} // namespace Aws
