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

#include <aws/sagemaker/model/ProcessingS3CompressionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ProcessingS3CompressionTypeMapper
      {

        static const int None_HASH = HashingUtils::HashString("None");
        static const int Gzip_HASH = HashingUtils::HashString("Gzip");


        ProcessingS3CompressionType GetProcessingS3CompressionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == None_HASH)
          {
            return ProcessingS3CompressionType::None;
          }
          else if (hashCode == Gzip_HASH)
          {
            return ProcessingS3CompressionType::Gzip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingS3CompressionType>(hashCode);
          }

          return ProcessingS3CompressionType::NOT_SET;
        }

        Aws::String GetNameForProcessingS3CompressionType(ProcessingS3CompressionType enumValue)
        {
          switch(enumValue)
          {
          case ProcessingS3CompressionType::None:
            return "None";
          case ProcessingS3CompressionType::Gzip:
            return "Gzip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessingS3CompressionTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
