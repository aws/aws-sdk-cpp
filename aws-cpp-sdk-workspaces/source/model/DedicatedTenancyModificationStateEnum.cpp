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

#include <aws/workspaces/model/DedicatedTenancyModificationStateEnum.h>
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
      namespace DedicatedTenancyModificationStateEnumMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        DedicatedTenancyModificationStateEnum GetDedicatedTenancyModificationStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return DedicatedTenancyModificationStateEnum::PENDING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return DedicatedTenancyModificationStateEnum::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DedicatedTenancyModificationStateEnum::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DedicatedTenancyModificationStateEnum>(hashCode);
          }

          return DedicatedTenancyModificationStateEnum::NOT_SET;
        }

        Aws::String GetNameForDedicatedTenancyModificationStateEnum(DedicatedTenancyModificationStateEnum enumValue)
        {
          switch(enumValue)
          {
          case DedicatedTenancyModificationStateEnum::PENDING:
            return "PENDING";
          case DedicatedTenancyModificationStateEnum::COMPLETED:
            return "COMPLETED";
          case DedicatedTenancyModificationStateEnum::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DedicatedTenancyModificationStateEnumMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
