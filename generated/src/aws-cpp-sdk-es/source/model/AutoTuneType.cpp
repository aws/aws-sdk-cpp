/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AutoTuneType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace AutoTuneTypeMapper
      {

        static const int SCHEDULED_ACTION_HASH = HashingUtils::HashString("SCHEDULED_ACTION");


        AutoTuneType GetAutoTuneTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCHEDULED_ACTION_HASH)
          {
            return AutoTuneType::SCHEDULED_ACTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoTuneType>(hashCode);
          }

          return AutoTuneType::NOT_SET;
        }

        Aws::String GetNameForAutoTuneType(AutoTuneType enumValue)
        {
          switch(enumValue)
          {
          case AutoTuneType::NOT_SET:
            return {};
          case AutoTuneType::SCHEDULED_ACTION:
            return "SCHEDULED_ACTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoTuneTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
