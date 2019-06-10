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

#include <aws/codecommit/model/MergeOptionTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace MergeOptionTypeEnumMapper
      {

        static const int FAST_FORWARD_MERGE_HASH = HashingUtils::HashString("FAST_FORWARD_MERGE");
        static const int SQUASH_MERGE_HASH = HashingUtils::HashString("SQUASH_MERGE");
        static const int THREE_WAY_MERGE_HASH = HashingUtils::HashString("THREE_WAY_MERGE");


        MergeOptionTypeEnum GetMergeOptionTypeEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAST_FORWARD_MERGE_HASH)
          {
            return MergeOptionTypeEnum::FAST_FORWARD_MERGE;
          }
          else if (hashCode == SQUASH_MERGE_HASH)
          {
            return MergeOptionTypeEnum::SQUASH_MERGE;
          }
          else if (hashCode == THREE_WAY_MERGE_HASH)
          {
            return MergeOptionTypeEnum::THREE_WAY_MERGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MergeOptionTypeEnum>(hashCode);
          }

          return MergeOptionTypeEnum::NOT_SET;
        }

        Aws::String GetNameForMergeOptionTypeEnum(MergeOptionTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case MergeOptionTypeEnum::FAST_FORWARD_MERGE:
            return "FAST_FORWARD_MERGE";
          case MergeOptionTypeEnum::SQUASH_MERGE:
            return "SQUASH_MERGE";
          case MergeOptionTypeEnum::THREE_WAY_MERGE:
            return "THREE_WAY_MERGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MergeOptionTypeEnumMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
