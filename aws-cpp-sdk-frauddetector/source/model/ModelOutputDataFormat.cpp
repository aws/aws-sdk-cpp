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

#include <aws/frauddetector/model/ModelOutputDataFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FraudDetector
  {
    namespace Model
    {
      namespace ModelOutputDataFormatMapper
      {

        static const int TEXT_CSV_HASH = HashingUtils::HashString("TEXT_CSV");
        static const int APPLICATION_JSONLINES_HASH = HashingUtils::HashString("APPLICATION_JSONLINES");


        ModelOutputDataFormat GetModelOutputDataFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TEXT_CSV_HASH)
          {
            return ModelOutputDataFormat::TEXT_CSV;
          }
          else if (hashCode == APPLICATION_JSONLINES_HASH)
          {
            return ModelOutputDataFormat::APPLICATION_JSONLINES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModelOutputDataFormat>(hashCode);
          }

          return ModelOutputDataFormat::NOT_SET;
        }

        Aws::String GetNameForModelOutputDataFormat(ModelOutputDataFormat enumValue)
        {
          switch(enumValue)
          {
          case ModelOutputDataFormat::TEXT_CSV:
            return "TEXT_CSV";
          case ModelOutputDataFormat::APPLICATION_JSONLINES:
            return "APPLICATION_JSONLINES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModelOutputDataFormatMapper
    } // namespace Model
  } // namespace FraudDetector
} // namespace Aws
