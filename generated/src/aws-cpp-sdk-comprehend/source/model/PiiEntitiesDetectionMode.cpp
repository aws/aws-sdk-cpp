/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PiiEntitiesDetectionMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace PiiEntitiesDetectionModeMapper
      {

        static const int ONLY_REDACTION_HASH = HashingUtils::HashString("ONLY_REDACTION");
        static const int ONLY_OFFSETS_HASH = HashingUtils::HashString("ONLY_OFFSETS");


        PiiEntitiesDetectionMode GetPiiEntitiesDetectionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONLY_REDACTION_HASH)
          {
            return PiiEntitiesDetectionMode::ONLY_REDACTION;
          }
          else if (hashCode == ONLY_OFFSETS_HASH)
          {
            return PiiEntitiesDetectionMode::ONLY_OFFSETS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PiiEntitiesDetectionMode>(hashCode);
          }

          return PiiEntitiesDetectionMode::NOT_SET;
        }

        Aws::String GetNameForPiiEntitiesDetectionMode(PiiEntitiesDetectionMode enumValue)
        {
          switch(enumValue)
          {
          case PiiEntitiesDetectionMode::ONLY_REDACTION:
            return "ONLY_REDACTION";
          case PiiEntitiesDetectionMode::ONLY_OFFSETS:
            return "ONLY_OFFSETS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PiiEntitiesDetectionModeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
