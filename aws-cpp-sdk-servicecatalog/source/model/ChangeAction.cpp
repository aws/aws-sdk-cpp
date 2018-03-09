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

#include <aws/servicecatalog/model/ChangeAction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace ChangeActionMapper
      {

        static const int ADD_HASH = HashingUtils::HashString("ADD");
        static const int MODIFY_HASH = HashingUtils::HashString("MODIFY");
        static const int REMOVE_HASH = HashingUtils::HashString("REMOVE");


        ChangeAction GetChangeActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADD_HASH)
          {
            return ChangeAction::ADD;
          }
          else if (hashCode == MODIFY_HASH)
          {
            return ChangeAction::MODIFY;
          }
          else if (hashCode == REMOVE_HASH)
          {
            return ChangeAction::REMOVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChangeAction>(hashCode);
          }

          return ChangeAction::NOT_SET;
        }

        Aws::String GetNameForChangeAction(ChangeAction enumValue)
        {
          switch(enumValue)
          {
          case ChangeAction::ADD:
            return "ADD";
          case ChangeAction::MODIFY:
            return "MODIFY";
          case ChangeAction::REMOVE:
            return "REMOVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ChangeActionMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
