/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/RecoveryApproach.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCRegionswitch
  {
    namespace Model
    {
      namespace RecoveryApproachMapper
      {

        static const int activeActive_HASH = HashingUtils::HashString("activeActive");
        static const int activePassive_HASH = HashingUtils::HashString("activePassive");


        RecoveryApproach GetRecoveryApproachForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == activeActive_HASH)
          {
            return RecoveryApproach::activeActive;
          }
          else if (hashCode == activePassive_HASH)
          {
            return RecoveryApproach::activePassive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryApproach>(hashCode);
          }

          return RecoveryApproach::NOT_SET;
        }

        Aws::String GetNameForRecoveryApproach(RecoveryApproach enumValue)
        {
          switch(enumValue)
          {
          case RecoveryApproach::NOT_SET:
            return {};
          case RecoveryApproach::activeActive:
            return "activeActive";
          case RecoveryApproach::activePassive:
            return "activePassive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryApproachMapper
    } // namespace Model
  } // namespace ARCRegionswitch
} // namespace Aws
