/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrPullDateRescanDuration.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace EcrPullDateRescanDurationMapper
      {

        static const int DAYS_14_HASH = HashingUtils::HashString("DAYS_14");
        static const int DAYS_30_HASH = HashingUtils::HashString("DAYS_30");
        static const int DAYS_60_HASH = HashingUtils::HashString("DAYS_60");
        static const int DAYS_90_HASH = HashingUtils::HashString("DAYS_90");
        static const int DAYS_180_HASH = HashingUtils::HashString("DAYS_180");


        EcrPullDateRescanDuration GetEcrPullDateRescanDurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_14_HASH)
          {
            return EcrPullDateRescanDuration::DAYS_14;
          }
          else if (hashCode == DAYS_30_HASH)
          {
            return EcrPullDateRescanDuration::DAYS_30;
          }
          else if (hashCode == DAYS_60_HASH)
          {
            return EcrPullDateRescanDuration::DAYS_60;
          }
          else if (hashCode == DAYS_90_HASH)
          {
            return EcrPullDateRescanDuration::DAYS_90;
          }
          else if (hashCode == DAYS_180_HASH)
          {
            return EcrPullDateRescanDuration::DAYS_180;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EcrPullDateRescanDuration>(hashCode);
          }

          return EcrPullDateRescanDuration::NOT_SET;
        }

        Aws::String GetNameForEcrPullDateRescanDuration(EcrPullDateRescanDuration enumValue)
        {
          switch(enumValue)
          {
          case EcrPullDateRescanDuration::NOT_SET:
            return {};
          case EcrPullDateRescanDuration::DAYS_14:
            return "DAYS_14";
          case EcrPullDateRescanDuration::DAYS_30:
            return "DAYS_30";
          case EcrPullDateRescanDuration::DAYS_60:
            return "DAYS_60";
          case EcrPullDateRescanDuration::DAYS_90:
            return "DAYS_90";
          case EcrPullDateRescanDuration::DAYS_180:
            return "DAYS_180";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EcrPullDateRescanDurationMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
