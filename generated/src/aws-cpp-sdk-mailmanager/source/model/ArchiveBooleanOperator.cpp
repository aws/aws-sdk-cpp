/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveBooleanOperator.h>
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
      namespace ArchiveBooleanOperatorMapper
      {

        static const int IS_TRUE_HASH = HashingUtils::HashString("IS_TRUE");
        static const int IS_FALSE_HASH = HashingUtils::HashString("IS_FALSE");


        ArchiveBooleanOperator GetArchiveBooleanOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IS_TRUE_HASH)
          {
            return ArchiveBooleanOperator::IS_TRUE;
          }
          else if (hashCode == IS_FALSE_HASH)
          {
            return ArchiveBooleanOperator::IS_FALSE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchiveBooleanOperator>(hashCode);
          }

          return ArchiveBooleanOperator::NOT_SET;
        }

        Aws::String GetNameForArchiveBooleanOperator(ArchiveBooleanOperator enumValue)
        {
          switch(enumValue)
          {
          case ArchiveBooleanOperator::NOT_SET:
            return {};
          case ArchiveBooleanOperator::IS_TRUE:
            return "IS_TRUE";
          case ArchiveBooleanOperator::IS_FALSE:
            return "IS_FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchiveBooleanOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
