/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/CharLengthSemantics.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace CharLengthSemanticsMapper
      {

        static const int default__HASH = HashingUtils::HashString("default");
        static const int char__HASH = HashingUtils::HashString("char");
        static const int byte_HASH = HashingUtils::HashString("byte");


        CharLengthSemantics GetCharLengthSemanticsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == default__HASH)
          {
            return CharLengthSemantics::default_;
          }
          else if (hashCode == char__HASH)
          {
            return CharLengthSemantics::char_;
          }
          else if (hashCode == byte_HASH)
          {
            return CharLengthSemantics::byte;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CharLengthSemantics>(hashCode);
          }

          return CharLengthSemantics::NOT_SET;
        }

        Aws::String GetNameForCharLengthSemantics(CharLengthSemantics enumValue)
        {
          switch(enumValue)
          {
          case CharLengthSemantics::default_:
            return "default";
          case CharLengthSemantics::char_:
            return "char";
          case CharLengthSemantics::byte:
            return "byte";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CharLengthSemanticsMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
