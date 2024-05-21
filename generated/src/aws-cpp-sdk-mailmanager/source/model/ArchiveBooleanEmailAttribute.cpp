/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveBooleanEmailAttribute.h>
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
      namespace ArchiveBooleanEmailAttributeMapper
      {

        static const int HAS_ATTACHMENTS_HASH = HashingUtils::HashString("HAS_ATTACHMENTS");


        ArchiveBooleanEmailAttribute GetArchiveBooleanEmailAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HAS_ATTACHMENTS_HASH)
          {
            return ArchiveBooleanEmailAttribute::HAS_ATTACHMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchiveBooleanEmailAttribute>(hashCode);
          }

          return ArchiveBooleanEmailAttribute::NOT_SET;
        }

        Aws::String GetNameForArchiveBooleanEmailAttribute(ArchiveBooleanEmailAttribute enumValue)
        {
          switch(enumValue)
          {
          case ArchiveBooleanEmailAttribute::NOT_SET:
            return {};
          case ArchiveBooleanEmailAttribute::HAS_ATTACHMENTS:
            return "HAS_ATTACHMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchiveBooleanEmailAttributeMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
