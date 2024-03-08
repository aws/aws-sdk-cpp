/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/IssueSubEntity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace IssueSubEntityMapper
      {

        static const int COMMENTS_HASH = HashingUtils::HashString("COMMENTS");
        static const int ATTACHMENTS_HASH = HashingUtils::HashString("ATTACHMENTS");
        static const int WORKLOGS_HASH = HashingUtils::HashString("WORKLOGS");


        IssueSubEntity GetIssueSubEntityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMMENTS_HASH)
          {
            return IssueSubEntity::COMMENTS;
          }
          else if (hashCode == ATTACHMENTS_HASH)
          {
            return IssueSubEntity::ATTACHMENTS;
          }
          else if (hashCode == WORKLOGS_HASH)
          {
            return IssueSubEntity::WORKLOGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IssueSubEntity>(hashCode);
          }

          return IssueSubEntity::NOT_SET;
        }

        Aws::String GetNameForIssueSubEntity(IssueSubEntity enumValue)
        {
          switch(enumValue)
          {
          case IssueSubEntity::NOT_SET:
            return {};
          case IssueSubEntity::COMMENTS:
            return "COMMENTS";
          case IssueSubEntity::ATTACHMENTS:
            return "ATTACHMENTS";
          case IssueSubEntity::WORKLOGS:
            return "WORKLOGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IssueSubEntityMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
