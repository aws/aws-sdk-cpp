/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ControlResponse.h>
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
      namespace ControlResponseMapper
      {

        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");
        static const int AUTOMATE_HASH = HashingUtils::HashString("AUTOMATE");
        static const int DEFER_HASH = HashingUtils::HashString("DEFER");
        static const int IGNORE_HASH = HashingUtils::HashString("IGNORE");


        ControlResponse GetControlResponseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANUAL_HASH)
          {
            return ControlResponse::MANUAL;
          }
          else if (hashCode == AUTOMATE_HASH)
          {
            return ControlResponse::AUTOMATE;
          }
          else if (hashCode == DEFER_HASH)
          {
            return ControlResponse::DEFER;
          }
          else if (hashCode == IGNORE_HASH)
          {
            return ControlResponse::IGNORE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ControlResponse>(hashCode);
          }

          return ControlResponse::NOT_SET;
        }

        Aws::String GetNameForControlResponse(ControlResponse enumValue)
        {
          switch(enumValue)
          {
          case ControlResponse::NOT_SET:
            return {};
          case ControlResponse::MANUAL:
            return "MANUAL";
          case ControlResponse::AUTOMATE:
            return "AUTOMATE";
          case ControlResponse::DEFER:
            return "DEFER";
          case ControlResponse::IGNORE:
            return "IGNORE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ControlResponseMapper
    } // namespace Model
  } // namespace AuditManager
} // namespace Aws
