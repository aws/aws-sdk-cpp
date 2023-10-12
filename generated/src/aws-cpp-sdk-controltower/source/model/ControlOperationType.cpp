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

        static constexpr uint32_t ENABLE_CONTROL_HASH = ConstExprHashingUtils::HashString("ENABLE_CONTROL");
        static constexpr uint32_t DISABLE_CONTROL_HASH = ConstExprHashingUtils::HashString("DISABLE_CONTROL");


        ControlOperationType GetControlOperationTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ControlOperationType::NOT_SET:
            return {};
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
