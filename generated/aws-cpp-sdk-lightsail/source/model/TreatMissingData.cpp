/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/TreatMissingData.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace TreatMissingDataMapper
      {

        static const int breaching_HASH = HashingUtils::HashString("breaching");
        static const int notBreaching_HASH = HashingUtils::HashString("notBreaching");
        static const int ignore_HASH = HashingUtils::HashString("ignore");
        static const int missing_HASH = HashingUtils::HashString("missing");


        TreatMissingData GetTreatMissingDataForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == breaching_HASH)
          {
            return TreatMissingData::breaching;
          }
          else if (hashCode == notBreaching_HASH)
          {
            return TreatMissingData::notBreaching;
          }
          else if (hashCode == ignore_HASH)
          {
            return TreatMissingData::ignore;
          }
          else if (hashCode == missing_HASH)
          {
            return TreatMissingData::missing;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TreatMissingData>(hashCode);
          }

          return TreatMissingData::NOT_SET;
        }

        Aws::String GetNameForTreatMissingData(TreatMissingData enumValue)
        {
          switch(enumValue)
          {
          case TreatMissingData::breaching:
            return "breaching";
          case TreatMissingData::notBreaching:
            return "notBreaching";
          case TreatMissingData::ignore:
            return "ignore";
          case TreatMissingData::missing:
            return "missing";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TreatMissingDataMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
