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

#include <aws/servicecatalog/model/StackInstanceStatus.h>
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
      namespace StackInstanceStatusMapper
      {

        static const int CURRENT_HASH = HashingUtils::HashString("CURRENT");
        static const int OUTDATED_HASH = HashingUtils::HashString("OUTDATED");
        static const int INOPERABLE_HASH = HashingUtils::HashString("INOPERABLE");


        StackInstanceStatus GetStackInstanceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CURRENT_HASH)
          {
            return StackInstanceStatus::CURRENT;
          }
          else if (hashCode == OUTDATED_HASH)
          {
            return StackInstanceStatus::OUTDATED;
          }
          else if (hashCode == INOPERABLE_HASH)
          {
            return StackInstanceStatus::INOPERABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackInstanceStatus>(hashCode);
          }

          return StackInstanceStatus::NOT_SET;
        }

        Aws::String GetNameForStackInstanceStatus(StackInstanceStatus enumValue)
        {
          switch(enumValue)
          {
          case StackInstanceStatus::CURRENT:
            return "CURRENT";
          case StackInstanceStatus::OUTDATED:
            return "OUTDATED";
          case StackInstanceStatus::INOPERABLE:
            return "INOPERABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackInstanceStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
