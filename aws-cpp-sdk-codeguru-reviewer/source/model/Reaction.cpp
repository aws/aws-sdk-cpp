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

#include <aws/codeguru-reviewer/model/Reaction.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace ReactionMapper
      {

        static const int ThumbsUp_HASH = HashingUtils::HashString("ThumbsUp");
        static const int ThumbsDown_HASH = HashingUtils::HashString("ThumbsDown");


        Reaction GetReactionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ThumbsUp_HASH)
          {
            return Reaction::ThumbsUp;
          }
          else if (hashCode == ThumbsDown_HASH)
          {
            return Reaction::ThumbsDown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Reaction>(hashCode);
          }

          return Reaction::NOT_SET;
        }

        Aws::String GetNameForReaction(Reaction enumValue)
        {
          switch(enumValue)
          {
          case Reaction::ThumbsUp:
            return "ThumbsUp";
          case Reaction::ThumbsDown:
            return "ThumbsDown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReactionMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
