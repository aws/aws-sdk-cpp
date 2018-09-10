﻿/*
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

#include <aws/devicefarm/model/UploadCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace UploadCategoryMapper
      {

        static const int CURATED_HASH = HashingUtils::HashString("CURATED");
        static const int PRIVATE__HASH = HashingUtils::HashString("PRIVATE");


        UploadCategory GetUploadCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURATED_HASH)
          {
            return UploadCategory::CURATED;
          }
          else if (hashCode == PRIVATE__HASH)
          {
            return UploadCategory::PRIVATE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UploadCategory>(hashCode);
          }

          return UploadCategory::NOT_SET;
        }

        Aws::String GetNameForUploadCategory(UploadCategory enumValue)
        {
          switch(enumValue)
          {
          case UploadCategory::CURATED:
            return "CURATED";
          case UploadCategory::PRIVATE_:
            return "PRIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace UploadCategoryMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
