/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/AggregationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Appflow
  {
    namespace Model
    {
      namespace AggregationTypeMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int SingleFile_HASH = HashingUtils::HashString("SingleFile");


        AggregationType GetAggregationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return AggregationType::None;
          }
          else if (hashCode == SingleFile_HASH)
          {
            return AggregationType::SingleFile;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AggregationType>(hashCode);
          }

          return AggregationType::NOT_SET;
        }

        Aws::String GetNameForAggregationType(AggregationType enumValue)
        {
          switch(enumValue)
          {
          case AggregationType::None:
            return "None";
          case AggregationType::SingleFile:
            return "SingleFile";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AggregationTypeMapper
    } // namespace Model
  } // namespace Appflow
} // namespace Aws
