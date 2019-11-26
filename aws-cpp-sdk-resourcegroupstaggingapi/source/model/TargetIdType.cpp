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

#include <aws/resourcegroupstaggingapi/model/TargetIdType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ResourceGroupsTaggingAPI
  {
    namespace Model
    {
      namespace TargetIdTypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int OU_HASH = HashingUtils::HashString("OU");
        static const int ROOT_HASH = HashingUtils::HashString("ROOT");


        TargetIdType GetTargetIdTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return TargetIdType::ACCOUNT;
          }
          else if (hashCode == OU_HASH)
          {
            return TargetIdType::OU;
          }
          else if (hashCode == ROOT_HASH)
          {
            return TargetIdType::ROOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetIdType>(hashCode);
          }

          return TargetIdType::NOT_SET;
        }

        Aws::String GetNameForTargetIdType(TargetIdType enumValue)
        {
          switch(enumValue)
          {
          case TargetIdType::ACCOUNT:
            return "ACCOUNT";
          case TargetIdType::OU:
            return "OU";
          case TargetIdType::ROOT:
            return "ROOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetIdTypeMapper
    } // namespace Model
  } // namespace ResourceGroupsTaggingAPI
} // namespace Aws
