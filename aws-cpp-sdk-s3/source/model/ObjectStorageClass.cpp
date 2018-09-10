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

#include <aws/s3/model/ObjectStorageClass.h>
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
      namespace ObjectStorageClassMapper
      {

        static const int STANDARD_HASH = HashingUtils::HashString("STANDARD");
        static const int REDUCED_REDUNDANCY_HASH = HashingUtils::HashString("REDUCED_REDUNDANCY");
        static const int GLACIER_HASH = HashingUtils::HashString("GLACIER");
        static const int STANDARD_IA_HASH = HashingUtils::HashString("STANDARD_IA");
        static const int ONEZONE_IA_HASH = HashingUtils::HashString("ONEZONE_IA");


        ObjectStorageClass GetObjectStorageClassForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return ObjectStorageClass::STANDARD;
          }
          else if (hashCode == REDUCED_REDUNDANCY_HASH)
          {
            return ObjectStorageClass::REDUCED_REDUNDANCY;
          }
          else if (hashCode == GLACIER_HASH)
          {
            return ObjectStorageClass::GLACIER;
          }
          else if (hashCode == STANDARD_IA_HASH)
          {
            return ObjectStorageClass::STANDARD_IA;
          }
          else if (hashCode == ONEZONE_IA_HASH)
          {
            return ObjectStorageClass::ONEZONE_IA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectStorageClass>(hashCode);
          }

          return ObjectStorageClass::NOT_SET;
        }

        Aws::String GetNameForObjectStorageClass(ObjectStorageClass enumValue)
        {
          switch(enumValue)
          {
          case ObjectStorageClass::STANDARD:
            return "STANDARD";
          case ObjectStorageClass::REDUCED_REDUNDANCY:
            return "REDUCED_REDUNDANCY";
          case ObjectStorageClass::GLACIER:
            return "GLACIER";
          case ObjectStorageClass::STANDARD_IA:
            return "STANDARD_IA";
          case ObjectStorageClass::ONEZONE_IA:
            return "ONEZONE_IA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ObjectStorageClassMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
