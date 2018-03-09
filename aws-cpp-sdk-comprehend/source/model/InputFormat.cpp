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

#include <aws/comprehend/model/InputFormat.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace InputFormatMapper
      {

        static const int ONE_DOC_PER_FILE_HASH = HashingUtils::HashString("ONE_DOC_PER_FILE");
        static const int ONE_DOC_PER_LINE_HASH = HashingUtils::HashString("ONE_DOC_PER_LINE");


        InputFormat GetInputFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ONE_DOC_PER_FILE_HASH)
          {
            return InputFormat::ONE_DOC_PER_FILE;
          }
          else if (hashCode == ONE_DOC_PER_LINE_HASH)
          {
            return InputFormat::ONE_DOC_PER_LINE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputFormat>(hashCode);
          }

          return InputFormat::NOT_SET;
        }

        Aws::String GetNameForInputFormat(InputFormat enumValue)
        {
          switch(enumValue)
          {
          case InputFormat::ONE_DOC_PER_FILE:
            return "ONE_DOC_PER_FILE";
          case InputFormat::ONE_DOC_PER_LINE:
            return "ONE_DOC_PER_LINE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace InputFormatMapper
    } // namespace Model
  } // namespace Comprehend
} // namespace Aws
