/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/model/UpdateActionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudDirectory
  {
    namespace Model
    {
      namespace UpdateActionTypeMapper
      {

        static const int CREATE_OR_UPDATE_HASH = HashingUtils::HashString("CREATE_OR_UPDATE");
        static const int DELETE__HASH = HashingUtils::HashString("DELETE");


        UpdateActionType GetUpdateActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_OR_UPDATE_HASH)
          {
            return UpdateActionType::CREATE_OR_UPDATE;
          }
          else if (hashCode == DELETE__HASH)
          {
            return UpdateActionType::DELETE_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateActionType>(hashCode);
          }

          return UpdateActionType::NOT_SET;
        }

        Aws::String GetNameForUpdateActionType(UpdateActionType enumValue)
        {
          switch(enumValue)
          {
          case UpdateActionType::CREATE_OR_UPDATE:
            return "CREATE_OR_UPDATE";
          case UpdateActionType::DELETE_:
            return "DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace UpdateActionTypeMapper
    } // namespace Model
  } // namespace CloudDirectory
} // namespace Aws
