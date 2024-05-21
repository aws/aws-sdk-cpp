/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/ArchiveStringOperator.h>
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
      namespace ArchiveStringOperatorMapper
      {

        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        ArchiveStringOperator GetArchiveStringOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONTAINS_HASH)
          {
            return ArchiveStringOperator::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ArchiveStringOperator>(hashCode);
          }

          return ArchiveStringOperator::NOT_SET;
        }

        Aws::String GetNameForArchiveStringOperator(ArchiveStringOperator enumValue)
        {
          switch(enumValue)
          {
          case ArchiveStringOperator::NOT_SET:
            return {};
          case ArchiveStringOperator::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ArchiveStringOperatorMapper
    } // namespace Model
  } // namespace MailManager
} // namespace Aws
