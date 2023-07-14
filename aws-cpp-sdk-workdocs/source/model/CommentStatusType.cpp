/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/CommentStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace CommentStatusTypeMapper
      {

        static const int DRAFT_HASH = HashingUtils::HashString("DRAFT");
        static const int PUBLISHED_HASH = HashingUtils::HashString("PUBLISHED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");


        CommentStatusType GetCommentStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DRAFT_HASH)
          {
            return CommentStatusType::DRAFT;
          }
          else if (hashCode == PUBLISHED_HASH)
          {
            return CommentStatusType::PUBLISHED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return CommentStatusType::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CommentStatusType>(hashCode);
          }

          return CommentStatusType::NOT_SET;
        }

        Aws::String GetNameForCommentStatusType(CommentStatusType enumValue)
        {
          switch(enumValue)
          {
          case CommentStatusType::DRAFT:
            return "DRAFT";
          case CommentStatusType::PUBLISHED:
            return "PUBLISHED";
          case CommentStatusType::DELETED:
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

      } // namespace CommentStatusTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
