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

#include <aws/sagemaker/model/AutoMLS3DataType.h>
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
      namespace AutoMLS3DataTypeMapper
      {

        static const int ManifestFile_HASH = HashingUtils::HashString("ManifestFile");
        static const int S3Prefix_HASH = HashingUtils::HashString("S3Prefix");


        AutoMLS3DataType GetAutoMLS3DataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ManifestFile_HASH)
          {
            return AutoMLS3DataType::ManifestFile;
          }
          else if (hashCode == S3Prefix_HASH)
          {
            return AutoMLS3DataType::S3Prefix;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoMLS3DataType>(hashCode);
          }

          return AutoMLS3DataType::NOT_SET;
        }

        Aws::String GetNameForAutoMLS3DataType(AutoMLS3DataType enumValue)
        {
          switch(enumValue)
          {
          case AutoMLS3DataType::ManifestFile:
            return "ManifestFile";
          case AutoMLS3DataType::S3Prefix:
            return "S3Prefix";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoMLS3DataTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
