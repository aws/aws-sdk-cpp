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

#include <aws/appsync/model/ConflictDetectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace ConflictDetectionTypeMapper
      {

        static const int VERSION_HASH = HashingUtils::HashString("VERSION");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ConflictDetectionType GetConflictDetectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VERSION_HASH)
          {
            return ConflictDetectionType::VERSION;
          }
          else if (hashCode == NONE_HASH)
          {
            return ConflictDetectionType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictDetectionType>(hashCode);
          }

          return ConflictDetectionType::NOT_SET;
        }

        Aws::String GetNameForConflictDetectionType(ConflictDetectionType enumValue)
        {
          switch(enumValue)
          {
          case ConflictDetectionType::VERSION:
            return "VERSION";
          case ConflictDetectionType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictDetectionTypeMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
