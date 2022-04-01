/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/FolderName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkMail
  {
    namespace Model
    {
      namespace FolderNameMapper
      {

        static const int INBOX_HASH = HashingUtils::HashString("INBOX");
        static const int DELETED_ITEMS_HASH = HashingUtils::HashString("DELETED_ITEMS");
        static const int SENT_ITEMS_HASH = HashingUtils::HashString("SENT_ITEMS");
        static const int DRAFTS_HASH = HashingUtils::HashString("DRAFTS");
        static const int JUNK_EMAIL_HASH = HashingUtils::HashString("JUNK_EMAIL");


        FolderName GetFolderNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INBOX_HASH)
          {
            return FolderName::INBOX;
          }
          else if (hashCode == DELETED_ITEMS_HASH)
          {
            return FolderName::DELETED_ITEMS;
          }
          else if (hashCode == SENT_ITEMS_HASH)
          {
            return FolderName::SENT_ITEMS;
          }
          else if (hashCode == DRAFTS_HASH)
          {
            return FolderName::DRAFTS;
          }
          else if (hashCode == JUNK_EMAIL_HASH)
          {
            return FolderName::JUNK_EMAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FolderName>(hashCode);
          }

          return FolderName::NOT_SET;
        }

        Aws::String GetNameForFolderName(FolderName enumValue)
        {
          switch(enumValue)
          {
          case FolderName::INBOX:
            return "INBOX";
          case FolderName::DELETED_ITEMS:
            return "DELETED_ITEMS";
          case FolderName::SENT_ITEMS:
            return "SENT_ITEMS";
          case FolderName::DRAFTS:
            return "DRAFTS";
          case FolderName::JUNK_EMAIL:
            return "JUNK_EMAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FolderNameMapper
    } // namespace Model
  } // namespace WorkMail
} // namespace Aws
