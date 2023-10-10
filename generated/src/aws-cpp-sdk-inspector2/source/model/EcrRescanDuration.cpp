﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/EcrRescanDuration.h>
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
      namespace EcrRescanDurationMapper
      {

        static const int LIFETIME_HASH = HashingUtils::HashString("LIFETIME");
        static const int DAYS_30_HASH = HashingUtils::HashString("DAYS_30");
        static const int DAYS_180_HASH = HashingUtils::HashString("DAYS_180");


        EcrRescanDuration GetEcrRescanDurationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIFETIME_HASH)
          {
            return EcrRescanDuration::LIFETIME;
          }
          else if (hashCode == DAYS_30_HASH)
          {
            return EcrRescanDuration::DAYS_30;
          }
          else if (hashCode == DAYS_180_HASH)
          {
            return EcrRescanDuration::DAYS_180;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EcrRescanDuration>(hashCode);
          }

          return EcrRescanDuration::NOT_SET;
        }

        Aws::String GetNameForEcrRescanDuration(EcrRescanDuration enumValue)
        {
          switch(enumValue)
          {
          case EcrRescanDuration::NOT_SET:
            return {};
          case EcrRescanDuration::LIFETIME:
            return "LIFETIME";
          case EcrRescanDuration::DAYS_30:
            return "DAYS_30";
          case EcrRescanDuration::DAYS_180:
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

      } // namespace EcrRescanDurationMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
