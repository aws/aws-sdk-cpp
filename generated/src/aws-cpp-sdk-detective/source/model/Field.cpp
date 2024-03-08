/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/Field.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Detective
  {
    namespace Model
    {
      namespace FieldMapper
      {

        static const int SEVERITY_HASH = HashingUtils::HashString("SEVERITY");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int CREATED_TIME_HASH = HashingUtils::HashString("CREATED_TIME");


        Field GetFieldForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEVERITY_HASH)
          {
            return Field::SEVERITY;
          }
          else if (hashCode == STATUS_HASH)
          {
            return Field::STATUS;
          }
          else if (hashCode == CREATED_TIME_HASH)
          {
            return Field::CREATED_TIME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Field>(hashCode);
          }

          return Field::NOT_SET;
        }

        Aws::String GetNameForField(Field enumValue)
        {
          switch(enumValue)
          {
          case Field::NOT_SET:
            return {};
          case Field::SEVERITY:
            return "SEVERITY";
          case Field::STATUS:
            return "STATUS";
          case Field::CREATED_TIME:
            return "CREATED_TIME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FieldMapper
    } // namespace Model
  } // namespace Detective
} // namespace Aws
