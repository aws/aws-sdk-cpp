/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/ModelPromoteMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LookoutEquipment
  {
    namespace Model
    {
      namespace ModelPromoteModeMapper
      {

        static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        ModelPromoteMode GetModelPromoteModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MANAGED_HASH)
          {
            return ModelPromoteMode::MANAGED;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return ModelPromoteMode::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelPromoteMode>(hashCode);
          }

          return ModelPromoteMode::NOT_SET;
        }

        Aws::String GetNameForModelPromoteMode(ModelPromoteMode enumValue)
        {
          switch(enumValue)
          {
          case ModelPromoteMode::NOT_SET:
            return {};
          case ModelPromoteMode::MANAGED:
            return "MANAGED";
          case ModelPromoteMode::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelPromoteModeMapper
    } // namespace Model
  } // namespace LookoutEquipment
} // namespace Aws
