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

#include <aws/quicksight/model/TemplateErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace TemplateErrorTypeMapper
      {

        static const int DATA_SET_NOT_FOUND_HASH = HashingUtils::HashString("DATA_SET_NOT_FOUND");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");


        TemplateErrorType GetTemplateErrorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DATA_SET_NOT_FOUND_HASH)
          {
            return TemplateErrorType::DATA_SET_NOT_FOUND;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return TemplateErrorType::INTERNAL_FAILURE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateErrorType>(hashCode);
          }

          return TemplateErrorType::NOT_SET;
        }

        Aws::String GetNameForTemplateErrorType(TemplateErrorType enumValue)
        {
          switch(enumValue)
          {
          case TemplateErrorType::DATA_SET_NOT_FOUND:
            return "DATA_SET_NOT_FOUND";
          case TemplateErrorType::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateErrorTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
