/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ConfiguredAudienceModelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRoomsML
  {
    namespace Model
    {
      namespace ConfiguredAudienceModelStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        ConfiguredAudienceModelStatus GetConfiguredAudienceModelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ConfiguredAudienceModelStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConfiguredAudienceModelStatus>(hashCode);
          }

          return ConfiguredAudienceModelStatus::NOT_SET;
        }

        Aws::String GetNameForConfiguredAudienceModelStatus(ConfiguredAudienceModelStatus enumValue)
        {
          switch(enumValue)
          {
          case ConfiguredAudienceModelStatus::NOT_SET:
            return {};
          case ConfiguredAudienceModelStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConfiguredAudienceModelStatusMapper
    } // namespace Model
  } // namespace CleanRoomsML
} // namespace Aws
