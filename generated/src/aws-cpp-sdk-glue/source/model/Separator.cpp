/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Separator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace SeparatorMapper
      {

        static const int comma_HASH = HashingUtils::HashString("comma");
        static const int ctrla_HASH = HashingUtils::HashString("ctrla");
        static const int pipe_HASH = HashingUtils::HashString("pipe");
        static const int semicolon_HASH = HashingUtils::HashString("semicolon");
        static const int tab_HASH = HashingUtils::HashString("tab");


        Separator GetSeparatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == comma_HASH)
          {
            return Separator::comma;
          }
          else if (hashCode == ctrla_HASH)
          {
            return Separator::ctrla;
          }
          else if (hashCode == pipe_HASH)
          {
            return Separator::pipe;
          }
          else if (hashCode == semicolon_HASH)
          {
            return Separator::semicolon;
          }
          else if (hashCode == tab_HASH)
          {
            return Separator::tab;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Separator>(hashCode);
          }

          return Separator::NOT_SET;
        }

        Aws::String GetNameForSeparator(Separator enumValue)
        {
          switch(enumValue)
          {
          case Separator::NOT_SET:
            return {};
          case Separator::comma:
            return "comma";
          case Separator::ctrla:
            return "ctrla";
          case Separator::pipe:
            return "pipe";
          case Separator::semicolon:
            return "semicolon";
          case Separator::tab:
            return "tab";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SeparatorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
