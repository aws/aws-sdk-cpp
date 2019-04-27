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

#include <aws/textract/model/SelectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Textract
  {
    namespace Model
    {
      namespace SelectionStatusMapper
      {

        static const int SELECTED_HASH = HashingUtils::HashString("SELECTED");
        static const int NOT_SELECTED_HASH = HashingUtils::HashString("NOT_SELECTED");


        SelectionStatus GetSelectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELECTED_HASH)
          {
            return SelectionStatus::SELECTED;
          }
          else if (hashCode == NOT_SELECTED_HASH)
          {
            return SelectionStatus::NOT_SELECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SelectionStatus>(hashCode);
          }

          return SelectionStatus::NOT_SET;
        }

        Aws::String GetNameForSelectionStatus(SelectionStatus enumValue)
        {
          switch(enumValue)
          {
          case SelectionStatus::SELECTED:
            return "SELECTED";
          case SelectionStatus::NOT_SELECTED:
            return "NOT_SELECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SelectionStatusMapper
    } // namespace Model
  } // namespace Textract
} // namespace Aws
