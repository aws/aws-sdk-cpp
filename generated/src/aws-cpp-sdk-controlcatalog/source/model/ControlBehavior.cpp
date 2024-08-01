/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/ControlBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ControlCatalog
  {
    namespace Model
    {
      namespace ControlBehaviorMapper
      {

        static const int PREVENTIVE_HASH = HashingUtils::HashString("PREVENTIVE");
        static const int PROACTIVE_HASH = HashingUtils::HashString("PROACTIVE");
        static const int DETECTIVE_HASH = HashingUtils::HashString("DETECTIVE");


        ControlBehavior GetControlBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PREVENTIVE_HASH)
          {
            return ControlBehavior::PREVENTIVE;
          }
          else if (hashCode == PROACTIVE_HASH)
          {
            return ControlBehavior::PROACTIVE;
          }
          else if (hashCode == DETECTIVE_HASH)
          {
            return ControlBehavior::DETECTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlBehavior>(hashCode);
          }

          return ControlBehavior::NOT_SET;
        }

        Aws::String GetNameForControlBehavior(ControlBehavior enumValue)
        {
          switch(enumValue)
          {
          case ControlBehavior::NOT_SET:
            return {};
          case ControlBehavior::PREVENTIVE:
            return "PREVENTIVE";
          case ControlBehavior::PROACTIVE:
            return "PROACTIVE";
          case ControlBehavior::DETECTIVE:
            return "DETECTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlBehaviorMapper
    } // namespace Model
  } // namespace ControlCatalog
} // namespace Aws
