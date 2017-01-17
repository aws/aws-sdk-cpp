﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/s3/model/StorageClassAnalysisSchemaVersion.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3
  {
    namespace Model
    {
      namespace StorageClassAnalysisSchemaVersionMapper
      {

        static const int V_1_HASH = HashingUtils::HashString("V_1");


        StorageClassAnalysisSchemaVersion GetStorageClassAnalysisSchemaVersionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == V_1_HASH)
          {
            return StorageClassAnalysisSchemaVersion::V_1;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StorageClassAnalysisSchemaVersion>(hashCode);
          }

          return StorageClassAnalysisSchemaVersion::NOT_SET;
        }

        Aws::String GetNameForStorageClassAnalysisSchemaVersion(StorageClassAnalysisSchemaVersion enumValue)
        {
          switch(enumValue)
          {
          case StorageClassAnalysisSchemaVersion::V_1:
            return "V_1";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace StorageClassAnalysisSchemaVersionMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
