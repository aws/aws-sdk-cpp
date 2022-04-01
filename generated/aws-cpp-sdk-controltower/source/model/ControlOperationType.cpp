/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/ControlOperationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlTower
  {
    namespace Model
    {
      namespace ControlOperationTypeMapper
      {

        static const int ENABLE_CONTROL_HASH = HashingUtils::HashString("ENABLE_CONTROL");
        static const int DISABLE_CONTROL_HASH = HashingUtils::HashString("DISABLE_CONTROL");


        ControlOperationType GetControlOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_CONTROL_HASH)
          {
            return ControlOperationType::ENABLE_CONTROL;
          }
          else if (hashCode == DISABLE_CONTROL_HASH)
          {
            return ControlOperationType::DISABLE_CONTROL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlOperationType>(hashCode);
          }

          return ControlOperationType::NOT_SET;
        }

        Aws::String GetNameForControlOperationType(ControlOperationType enumValue)
        {
          switch(enumValue)
          {
          case ControlOperationType::ENABLE_CONTROL:
            return "ENABLE_CONTROL";
          case ControlOperationType::DISABLE_CONTROL:
            return "DISABLE_CONTROL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlOperationTypeMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
