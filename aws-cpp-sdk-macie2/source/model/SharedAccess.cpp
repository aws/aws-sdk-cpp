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

#include <aws/macie2/model/SharedAccess.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace SharedAccessMapper
      {

        static const int EXTERNAL_HASH = HashingUtils::HashString("EXTERNAL");
        static const int INTERNAL_HASH = HashingUtils::HashString("INTERNAL");
        static const int NOT_SHARED_HASH = HashingUtils::HashString("NOT_SHARED");


        SharedAccess GetSharedAccessForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXTERNAL_HASH)
          {
            return SharedAccess::EXTERNAL;
          }
          else if (hashCode == INTERNAL_HASH)
          {
            return SharedAccess::INTERNAL;
          }
          else if (hashCode == NOT_SHARED_HASH)
          {
            return SharedAccess::NOT_SHARED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SharedAccess>(hashCode);
          }

          return SharedAccess::NOT_SET;
        }

        Aws::String GetNameForSharedAccess(SharedAccess enumValue)
        {
          switch(enumValue)
          {
          case SharedAccess::EXTERNAL:
            return "EXTERNAL";
          case SharedAccess::INTERNAL:
            return "INTERNAL";
          case SharedAccess::NOT_SHARED:
            return "NOT_SHARED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SharedAccessMapper
    } // namespace Model
  } // namespace Macie2
} // namespace Aws
