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
#include <aws/ecr/model/TagStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECR
  {
    namespace Model
    {
      namespace TagStatusMapper
      {

        static const int TAGGED_HASH = HashingUtils::HashString("TAGGED");
        static const int UNTAGGED_HASH = HashingUtils::HashString("UNTAGGED");


        TagStatus GetTagStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TAGGED_HASH)
          {
            return TagStatus::TAGGED;
          }
          else if (hashCode == UNTAGGED_HASH)
          {
            return TagStatus::UNTAGGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TagStatus>(hashCode);
          }

          return TagStatus::NOT_SET;
        }

        Aws::String GetNameForTagStatus(TagStatus enumValue)
        {
          switch(enumValue)
          {
          case TagStatus::TAGGED:
            return "TAGGED";
          case TagStatus::UNTAGGED:
            return "UNTAGGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TagStatusMapper
    } // namespace Model
  } // namespace ECR
} // namespace Aws
