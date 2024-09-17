/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/BaselineOperationType.h>
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
      namespace BaselineOperationTypeMapper
      {

        static const int ENABLE_BASELINE_HASH = HashingUtils::HashString("ENABLE_BASELINE");
        static const int DISABLE_BASELINE_HASH = HashingUtils::HashString("DISABLE_BASELINE");
        static const int UPDATE_ENABLED_BASELINE_HASH = HashingUtils::HashString("UPDATE_ENABLED_BASELINE");
        static const int RESET_ENABLED_BASELINE_HASH = HashingUtils::HashString("RESET_ENABLED_BASELINE");


        BaselineOperationType GetBaselineOperationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLE_BASELINE_HASH)
          {
            return BaselineOperationType::ENABLE_BASELINE;
          }
          else if (hashCode == DISABLE_BASELINE_HASH)
          {
            return BaselineOperationType::DISABLE_BASELINE;
          }
          else if (hashCode == UPDATE_ENABLED_BASELINE_HASH)
          {
            return BaselineOperationType::UPDATE_ENABLED_BASELINE;
          }
          else if (hashCode == RESET_ENABLED_BASELINE_HASH)
          {
            return BaselineOperationType::RESET_ENABLED_BASELINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BaselineOperationType>(hashCode);
          }

          return BaselineOperationType::NOT_SET;
        }

        Aws::String GetNameForBaselineOperationType(BaselineOperationType enumValue)
        {
          switch(enumValue)
          {
          case BaselineOperationType::NOT_SET:
            return {};
          case BaselineOperationType::ENABLE_BASELINE:
            return "ENABLE_BASELINE";
          case BaselineOperationType::DISABLE_BASELINE:
            return "DISABLE_BASELINE";
          case BaselineOperationType::UPDATE_ENABLED_BASELINE:
            return "UPDATE_ENABLED_BASELINE";
          case BaselineOperationType::RESET_ENABLED_BASELINE:
            return "RESET_ENABLED_BASELINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BaselineOperationTypeMapper
    } // namespace Model
  } // namespace ControlTower
} // namespace Aws
