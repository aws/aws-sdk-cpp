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

#include <aws/s3control/model/JobManifestFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace JobManifestFormatMapper
      {

        static const int S3BatchOperations_CSV_20180820_HASH = HashingUtils::HashString("S3BatchOperations_CSV_20180820");
        static const int S3InventoryReport_CSV_20161130_HASH = HashingUtils::HashString("S3InventoryReport_CSV_20161130");


        JobManifestFormat GetJobManifestFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3BatchOperations_CSV_20180820_HASH)
          {
            return JobManifestFormat::S3BatchOperations_CSV_20180820;
          }
          else if (hashCode == S3InventoryReport_CSV_20161130_HASH)
          {
            return JobManifestFormat::S3InventoryReport_CSV_20161130;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobManifestFormat>(hashCode);
          }

          return JobManifestFormat::NOT_SET;
        }

        Aws::String GetNameForJobManifestFormat(JobManifestFormat enumValue)
        {
          switch(enumValue)
          {
          case JobManifestFormat::S3BatchOperations_CSV_20180820:
            return "S3BatchOperations_CSV_20180820";
          case JobManifestFormat::S3InventoryReport_CSV_20161130:
            return "S3InventoryReport_CSV_20161130";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobManifestFormatMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
