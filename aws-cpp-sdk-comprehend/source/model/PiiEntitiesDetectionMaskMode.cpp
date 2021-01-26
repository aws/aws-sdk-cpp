/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/PiiEntitiesDetectionMaskMode.h>
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
      namespace PiiEntitiesDetectionMaskModeMapper
      {

        static const int MASK_HASH = HashingUtils::HashString("MASK");
        static const int REPLACE_WITH_PII_ENTITY_TYPE_HASH = HashingUtils::HashString("REPLACE_WITH_PII_ENTITY_TYPE");


        PiiEntitiesDetectionMaskMode GetPiiEntitiesDetectionMaskModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MASK_HASH)
          {
            return PiiEntitiesDetectionMaskMode::MASK;
          }
          else if (hashCode == REPLACE_WITH_PII_ENTITY_TYPE_HASH)
          {
            return PiiEntitiesDetectionMaskMode::REPLACE_WITH_PII_ENTITY_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PiiEntitiesDetectionMaskMode>(hashCode);
          }

          return PiiEntitiesDetectionMaskMode::NOT_SET;
        }

        Aws::String GetNameForPiiEntitiesDetectionMaskMode(PiiEntitiesDetectionMaskMode enumValue)
        {
          switch(enumValue)
          {
          case PiiEntitiesDetectionMaskMode::MASK:
            return "MASK";
          case PiiEntitiesDetectionMaskMode::REPLACE_WITH_PII_ENTITY_TYPE:
            return "REPLACE_WITH_PII_ENTITY_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PiiEntitiesDetectionMaskModeMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
