/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/MailFrom.h>
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
      namespace MailFromMapper
      {

        static const int REPLACE_HASH = HashingUtils::HashString("REPLACE");
        static const int PRESERVE_HASH = HashingUtils::HashString("PRESERVE");


        MailFrom GetMailFromForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REPLACE_HASH)
          {
            return MailFrom::REPLACE;
          }
          else if (hashCode == PRESERVE_HASH)
          {
            return MailFrom::PRESERVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MailFrom>(hashCode);
          }

          return MailFrom::NOT_SET;
        }

        Aws::String GetNameForMailFrom(MailFrom enumValue)
        {
          switch(enumValue)
          {
          case MailFrom::NOT_SET:
            return {};
          case MailFrom::REPLACE:
            return "REPLACE";
          case MailFrom::PRESERVE:
            return "PRESERVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MailFromMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
