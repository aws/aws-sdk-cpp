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

#include <aws/rekognition/model/QualityFilter.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Rekognition
  {
    namespace Model
    {
      namespace QualityFilterMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int AUTO_HASH = HashingUtils::HashString("AUTO");


        QualityFilter GetQualityFilterForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return QualityFilter::NONE;
          }
          else if (hashCode == AUTO_HASH)
          {
            return QualityFilter::AUTO;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QualityFilter>(hashCode);
          }

          return QualityFilter::NOT_SET;
        }

        Aws::String GetNameForQualityFilter(QualityFilter enumValue)
        {
          switch(enumValue)
          {
          case QualityFilter::NONE:
            return "NONE";
          case QualityFilter::AUTO:
            return "AUTO";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QualityFilterMapper
    } // namespace Model
  } // namespace Rekognition
} // namespace Aws
