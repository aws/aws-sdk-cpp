/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveStringEmailAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MailManager
  {
    namespace Model
    {
      namespace ArchiveStringEmailAttributeMapper
      {

        static const int TO_HASH = HashingUtils::HashString("TO");
        static const int FROM_HASH = HashingUtils::HashString("FROM");
        static const int CC_HASH = HashingUtils::HashString("CC");
        static const int SUBJECT_HASH = HashingUtils::HashString("SUBJECT");
        static const int ENVELOPE_TO_HASH = HashingUtils::HashString("ENVELOPE_TO");
        static const int ENVELOPE_FROM_HASH = HashingUtils::HashString("ENVELOPE_FROM");


        ArchiveStringEmailAttribute GetArchiveStringEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TO_HASH)
          {
            return ArchiveStringEmailAttribute::TO;
          }
          else if (hashCode == FROM_HASH)
          {
            return ArchiveStringEmailAttribute::FROM;
          }
          else if (hashCode == CC_HASH)
          {
            return ArchiveStringEmailAttribute::CC;
          }
          else if (hashCode == SUBJECT_HASH)
          {
            return ArchiveStringEmailAttribute::SUBJECT;
          }
          else if (hashCode == ENVELOPE_TO_HASH)
          {
            return ArchiveStringEmailAttribute::ENVELOPE_TO;
          }
          else if (hashCode == ENVELOPE_FROM_HASH)
          {
            return ArchiveStringEmailAttribute::ENVELOPE_FROM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchiveStringEmailAttribute>(hashCode);
          }

          return ArchiveStringEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForArchiveStringEmailAttribute(ArchiveStringEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case ArchiveStringEmailAttribute::NOT_SET:
            return {};
          case ArchiveStringEmailAttribute::TO:
            return "TO";
          case ArchiveStringEmailAttribute::FROM:
            return "FROM";
          case ArchiveStringEmailAttribute::CC:
            return "CC";
          case ArchiveStringEmailAttribute::SUBJECT:
            return "SUBJECT";
          case ArchiveStringEmailAttribute::ENVELOPE_TO:
            return "ENVELOPE_TO";
          case ArchiveStringEmailAttribute::ENVELOPE_FROM:
            return "ENVELOPE_FROM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchiveStringEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
