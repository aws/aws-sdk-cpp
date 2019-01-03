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

#include <aws/ram/model/ResourceShareStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace ResourceShareStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        ResourceShareStatus GetResourceShareStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ResourceShareStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ResourceShareStatus::ACTIVE;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResourceShareStatus::FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResourceShareStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ResourceShareStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceShareStatus>(hashCode);
          }

          return ResourceShareStatus::NOT_SET;
        }

        Aws::String GetNameForResourceShareStatus(ResourceShareStatus enumValue)
        {
          switch(enumValue)
          {
          case ResourceShareStatus::PENDING:
            return "PENDING";
          case ResourceShareStatus::ACTIVE:
            return "ACTIVE";
          case ResourceShareStatus::FAILED:
            return "FAILED";
          case ResourceShareStatus::DELETING:
            return "DELETING";
          case ResourceShareStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceShareStatusMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
