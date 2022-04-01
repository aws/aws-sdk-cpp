/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
