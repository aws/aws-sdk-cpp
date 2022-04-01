﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediapackage/model/AdsOnDeliveryRestrictions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaPackage
  {
    namespace Model
    {
      namespace AdsOnDeliveryRestrictionsMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int RESTRICTED_HASH = HashingUtils::HashString("RESTRICTED");
        static const int UNRESTRICTED_HASH = HashingUtils::HashString("UNRESTRICTED");
        static const int BOTH_HASH = HashingUtils::HashString("BOTH");


        AdsOnDeliveryRestrictions GetAdsOnDeliveryRestrictionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AdsOnDeliveryRestrictions::NONE;
          }
          else if (hashCode == RESTRICTED_HASH)
          {
            return AdsOnDeliveryRestrictions::RESTRICTED;
          }
          else if (hashCode == UNRESTRICTED_HASH)
          {
            return AdsOnDeliveryRestrictions::UNRESTRICTED;
          }
          else if (hashCode == BOTH_HASH)
          {
            return AdsOnDeliveryRestrictions::BOTH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AdsOnDeliveryRestrictions>(hashCode);
          }

          return AdsOnDeliveryRestrictions::NOT_SET;
        }

        Aws::String GetNameForAdsOnDeliveryRestrictions(AdsOnDeliveryRestrictions enumValue)
        {
          switch(enumValue)
          {
          case AdsOnDeliveryRestrictions::NONE:
            return "NONE";
          case AdsOnDeliveryRestrictions::RESTRICTED:
            return "RESTRICTED";
          case AdsOnDeliveryRestrictions::UNRESTRICTED:
            return "UNRESTRICTED";
          case AdsOnDeliveryRestrictions::BOTH:
            return "BOTH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AdsOnDeliveryRestrictionsMapper
    } // namespace Model
  } // namespace MediaPackage
} // namespace Aws
