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

#include <aws/workspaces/model/ModificationStateEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace ModificationStateEnumMapper
      {

        static const int UPDATE_INITIATED_HASH = HashingUtils::HashString("UPDATE_INITIATED");
        static const int UPDATE_IN_PROGRESS_HASH = HashingUtils::HashString("UPDATE_IN_PROGRESS");


        ModificationStateEnum GetModificationStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UPDATE_INITIATED_HASH)
          {
            return ModificationStateEnum::UPDATE_INITIATED;
          }
          else if (hashCode == UPDATE_IN_PROGRESS_HASH)
          {
            return ModificationStateEnum::UPDATE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ModificationStateEnum>(hashCode);
          }

          return ModificationStateEnum::NOT_SET;
        }

        Aws::String GetNameForModificationStateEnum(ModificationStateEnum enumValue)
        {
          switch(enumValue)
          {
          case ModificationStateEnum::UPDATE_INITIATED:
            return "UPDATE_INITIATED";
          case ModificationStateEnum::UPDATE_IN_PROGRESS:
            return "UPDATE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ModificationStateEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
