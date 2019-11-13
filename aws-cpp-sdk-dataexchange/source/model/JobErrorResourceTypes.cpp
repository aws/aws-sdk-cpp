/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
          case JobErrorResourceTypes::REVISION:
            return "REVISION";
          case JobErrorResourceTypes::ASSET:
            return "ASSET";
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
