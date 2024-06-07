/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AuditManager
  {
    namespace Model
    {
      namespace ControlStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int END_OF_SUPPORT_HASH = HashingUtils::HashString("END_OF_SUPPORT");


        ControlState GetControlStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ControlState::ACTIVE;
          }
          else if (hashCode == END_OF_SUPPORT_HASH)
          {
            return ControlState::END_OF_SUPPORT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlState>(hashCode);
          }

          return ControlState::NOT_SET;
        }

        Aws::String GetNameForControlState(ControlState enumValue)
        {
          switch(enumValue)
          {
          case ControlState::NOT_SET:
            return {};
          case ControlState::ACTIVE:
            return "ACTIVE";
          case ControlState::END_OF_SUPPORT:
            return "END_OF_SUPPORT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlStateMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
