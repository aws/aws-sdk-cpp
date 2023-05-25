/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
