/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/RemediationActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace RemediationActionTypeMapper
      {

        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");
        static const int MODIFY_HASH = HashingUtils::HashString("MODIFY");


        RemediationActionType GetRemediationActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REMOVE_HASH)
          {
            return RemediationActionType::REMOVE;
          }
          else if (hashCode == MODIFY_HASH)
          {
            return RemediationActionType::MODIFY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RemediationActionType>(hashCode);
          }

          return RemediationActionType::NOT_SET;
        }

        Aws::String GetNameForRemediationActionType(RemediationActionType enumValue)
        {
          switch(enumValue)
          {
          case RemediationActionType::REMOVE:
            return "REMOVE";
          case RemediationActionType::MODIFY:
            return "MODIFY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RemediationActionTypeMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
