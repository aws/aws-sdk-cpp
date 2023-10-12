/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/SoftwareToUpdate.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Greengrass
  {
    namespace Model
    {
      namespace SoftwareToUpdateMapper
      {

        static constexpr uint32_t core_HASH = ConstExprHashingUtils::HashString("core");
        static constexpr uint32_t ota_agent_HASH = ConstExprHashingUtils::HashString("ota_agent");


        SoftwareToUpdate GetSoftwareToUpdateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == core_HASH)
          {
            return SoftwareToUpdate::core;
          }
          else if (hashCode == ota_agent_HASH)
          {
            return SoftwareToUpdate::ota_agent;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SoftwareToUpdate>(hashCode);
          }

          return SoftwareToUpdate::NOT_SET;
        }

        Aws::String GetNameForSoftwareToUpdate(SoftwareToUpdate enumValue)
        {
          switch(enumValue)
          {
          case SoftwareToUpdate::NOT_SET:
            return {};
          case SoftwareToUpdate::core:
            return "core";
          case SoftwareToUpdate::ota_agent:
            return "ota_agent";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SoftwareToUpdateMapper
    } // namespace Model
  } // namespace Greengrass
} // namespace Aws
