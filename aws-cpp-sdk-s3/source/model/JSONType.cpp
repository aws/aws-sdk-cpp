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

#include <aws/s3/model/JSONType.h>
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
      namespace JSONTypeMapper
      {

        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int LINES_HASH = HashingUtils::HashString("LINES");


        JSONType GetJSONTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_HASH)
          {
            return JSONType::DOCUMENT;
          }
          else if (hashCode == LINES_HASH)
          {
            return JSONType::LINES;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JSONType>(hashCode);
          }

          return JSONType::NOT_SET;
        }

        Aws::String GetNameForJSONType(JSONType enumValue)
        {
          switch(enumValue)
          {
          case JSONType::DOCUMENT:
            return "DOCUMENT";
          case JSONType::LINES:
            return "LINES";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace JSONTypeMapper
    } // namespace Model
  } // namespace S3
} // namespace Aws
