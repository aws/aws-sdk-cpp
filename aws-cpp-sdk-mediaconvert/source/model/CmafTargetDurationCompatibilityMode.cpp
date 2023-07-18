﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafTargetDurationCompatibilityMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace CmafTargetDurationCompatibilityModeMapper
      {

        static const int LEGACY_HASH = HashingUtils::HashString("LEGACY");
        static const int SPEC_COMPLIANT_HASH = HashingUtils::HashString("SPEC_COMPLIANT");


        CmafTargetDurationCompatibilityMode GetCmafTargetDurationCompatibilityModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LEGACY_HASH)
          {
            return CmafTargetDurationCompatibilityMode::LEGACY;
          }
          else if (hashCode == SPEC_COMPLIANT_HASH)
          {
            return CmafTargetDurationCompatibilityMode::SPEC_COMPLIANT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafTargetDurationCompatibilityMode>(hashCode);
          }

          return CmafTargetDurationCompatibilityMode::NOT_SET;
        }

        Aws::String GetNameForCmafTargetDurationCompatibilityMode(CmafTargetDurationCompatibilityMode enumValue)
        {
          switch(enumValue)
          {
          case CmafTargetDurationCompatibilityMode::LEGACY:
            return "LEGACY";
          case CmafTargetDurationCompatibilityMode::SPEC_COMPLIANT:
            return "SPEC_COMPLIANT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafTargetDurationCompatibilityModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
