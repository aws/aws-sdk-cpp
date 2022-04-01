/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Quality.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTSiteWise
  {
    namespace Model
    {
      namespace QualityMapper
      {

        static const int GOOD_HASH = HashingUtils::HashString("GOOD");
        static const int BAD_HASH = HashingUtils::HashString("BAD");
        static const int UNCERTAIN_HASH = HashingUtils::HashString("UNCERTAIN");


        Quality GetQualityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GOOD_HASH)
          {
            return Quality::GOOD;
          }
          else if (hashCode == BAD_HASH)
          {
            return Quality::BAD;
          }
          else if (hashCode == UNCERTAIN_HASH)
          {
            return Quality::UNCERTAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Quality>(hashCode);
          }

          return Quality::NOT_SET;
        }

        Aws::String GetNameForQuality(Quality enumValue)
        {
          switch(enumValue)
          {
          case Quality::GOOD:
            return "GOOD";
          case Quality::BAD:
            return "BAD";
          case Quality::UNCERTAIN:
            return "UNCERTAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QualityMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
