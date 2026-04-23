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

#include <aws/glue/model/UpdateBehavior.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace UpdateBehaviorMapper
      {

        static const int LOG_HASH = HashingUtils::HashString("LOG");
        static const int UPDATE_IN_DATABASE_HASH = HashingUtils::HashString("UPDATE_IN_DATABASE");


        UpdateBehavior GetUpdateBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOG_HASH)
          {
            return UpdateBehavior::LOG;
          }
          else if (hashCode == UPDATE_IN_DATABASE_HASH)
          {
            return UpdateBehavior::UPDATE_IN_DATABASE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateBehavior>(hashCode);
          }

          return UpdateBehavior::NOT_SET;
        }

        Aws::String GetNameForUpdateBehavior(UpdateBehavior enumValue)
        {
          switch(enumValue)
          {
          case UpdateBehavior::LOG:
            return "LOG";
          case UpdateBehavior::UPDATE_IN_DATABASE:
            return "UPDATE_IN_DATABASE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateBehaviorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
