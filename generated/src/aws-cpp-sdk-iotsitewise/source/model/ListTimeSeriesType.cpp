/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListTimeSeriesType.h>
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
      namespace ListTimeSeriesTypeMapper
      {

        static const int ASSOCIATED_HASH = HashingUtils::HashString("ASSOCIATED");
        static const int DISASSOCIATED_HASH = HashingUtils::HashString("DISASSOCIATED");


        ListTimeSeriesType GetListTimeSeriesTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASSOCIATED_HASH)
          {
            return ListTimeSeriesType::ASSOCIATED;
          }
          else if (hashCode == DISASSOCIATED_HASH)
          {
            return ListTimeSeriesType::DISASSOCIATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ListTimeSeriesType>(hashCode);
          }

          return ListTimeSeriesType::NOT_SET;
        }

        Aws::String GetNameForListTimeSeriesType(ListTimeSeriesType enumValue)
        {
          switch(enumValue)
          {
          case ListTimeSeriesType::NOT_SET:
            return {};
          case ListTimeSeriesType::ASSOCIATED:
            return "ASSOCIATED";
          case ListTimeSeriesType::DISASSOCIATED:
            return "DISASSOCIATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ListTimeSeriesTypeMapper
    } // namespace Model
  } // namespace IoTSiteWise
} // namespace Aws
