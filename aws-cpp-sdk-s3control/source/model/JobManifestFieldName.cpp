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

#include <aws/s3control/model/JobManifestFieldName.h>
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
      namespace JobManifestFieldNameMapper
      {

        static const int Ignore_HASH = HashingUtils::HashString("Ignore");
        static const int Bucket_HASH = HashingUtils::HashString("Bucket");
        static const int Key_HASH = HashingUtils::HashString("Key");
        static const int VersionId_HASH = HashingUtils::HashString("VersionId");


        JobManifestFieldName GetJobManifestFieldNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ignore_HASH)
          {
            return JobManifestFieldName::Ignore;
          }
          else if (hashCode == Bucket_HASH)
          {
            return JobManifestFieldName::Bucket;
          }
          else if (hashCode == Key_HASH)
          {
            return JobManifestFieldName::Key;
          }
          else if (hashCode == VersionId_HASH)
          {
            return JobManifestFieldName::VersionId;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobManifestFieldName>(hashCode);
          }

          return JobManifestFieldName::NOT_SET;
        }

        Aws::String GetNameForJobManifestFieldName(JobManifestFieldName enumValue)
        {
          switch(enumValue)
          {
          case JobManifestFieldName::Ignore:
            return "Ignore";
          case JobManifestFieldName::Bucket:
            return "Bucket";
          case JobManifestFieldName::Key:
            return "Key";
          case JobManifestFieldName::VersionId:
            return "VersionId";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobManifestFieldNameMapper
    } // namespace Model
  } // namespace S3Control
} // namespace Aws
