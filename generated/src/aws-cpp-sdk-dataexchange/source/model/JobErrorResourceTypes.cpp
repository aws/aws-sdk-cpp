/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/JobErrorResourceTypes.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataExchange
  {
    namespace Model
    {
      namespace JobErrorResourceTypesMapper
      {

        static const int REVISION_HASH = HashingUtils::HashString("REVISION");
        static const int ASSET_HASH = HashingUtils::HashString("ASSET");
        static const int DATA_SET_HASH = HashingUtils::HashString("DATA_SET");


        JobErrorResourceTypes GetJobErrorResourceTypesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REVISION_HASH)
          {
            return JobErrorResourceTypes::REVISION;
          }
          else if (hashCode == ASSET_HASH)
          {
            return JobErrorResourceTypes::ASSET;
          }
          else if (hashCode == DATA_SET_HASH)
          {
            return JobErrorResourceTypes::DATA_SET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobErrorResourceTypes>(hashCode);
          }

          return JobErrorResourceTypes::NOT_SET;
        }

        Aws::String GetNameForJobErrorResourceTypes(JobErrorResourceTypes enumValue)
        {
          switch(enumValue)
          {
          case JobErrorResourceTypes::NOT_SET:
            return {};
          case JobErrorResourceTypes::REVISION:
            return "REVISION";
          case JobErrorResourceTypes::ASSET:
            return "ASSET";
          case JobErrorResourceTypes::DATA_SET:
            return "DATA_SET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobErrorResourceTypesMapper
    } // namespace Model
  } // namespace DataExchange
} // namespace Aws
