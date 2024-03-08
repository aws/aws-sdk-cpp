/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/TaintEffect.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace TaintEffectMapper
      {

        static const int NO_SCHEDULE_HASH = HashingUtils::HashString("NO_SCHEDULE");
        static const int NO_EXECUTE_HASH = HashingUtils::HashString("NO_EXECUTE");
        static const int PREFER_NO_SCHEDULE_HASH = HashingUtils::HashString("PREFER_NO_SCHEDULE");


        TaintEffect GetTaintEffectForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_SCHEDULE_HASH)
          {
            return TaintEffect::NO_SCHEDULE;
          }
          else if (hashCode == NO_EXECUTE_HASH)
          {
            return TaintEffect::NO_EXECUTE;
          }
          else if (hashCode == PREFER_NO_SCHEDULE_HASH)
          {
            return TaintEffect::PREFER_NO_SCHEDULE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaintEffect>(hashCode);
          }

          return TaintEffect::NOT_SET;
        }

        Aws::String GetNameForTaintEffect(TaintEffect enumValue)
        {
          switch(enumValue)
          {
          case TaintEffect::NOT_SET:
            return {};
          case TaintEffect::NO_SCHEDULE:
            return "NO_SCHEDULE";
          case TaintEffect::NO_EXECUTE:
            return "NO_EXECUTE";
          case TaintEffect::PREFER_NO_SCHEDULE:
            return "PREFER_NO_SCHEDULE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaintEffectMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
