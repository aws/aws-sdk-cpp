/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/AbortCriteriaAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTManagedIntegrations
  {
    namespace Model
    {
      namespace AbortCriteriaActionMapper
      {

        static const int CANCEL_HASH = HashingUtils::HashString("CANCEL");


        AbortCriteriaAction GetAbortCriteriaActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANCEL_HASH)
          {
            return AbortCriteriaAction::CANCEL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AbortCriteriaAction>(hashCode);
          }

          return AbortCriteriaAction::NOT_SET;
        }

        Aws::String GetNameForAbortCriteriaAction(AbortCriteriaAction enumValue)
        {
          switch(enumValue)
          {
          case AbortCriteriaAction::NOT_SET:
            return {};
          case AbortCriteriaAction::CANCEL:
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

      } // namespace AbortCriteriaActionMapper
    } // namespace Model
  } // namespace IoTManagedIntegrations
} // namespace Aws
