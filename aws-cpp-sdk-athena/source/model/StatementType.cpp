/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/StatementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace StatementTypeMapper
      {

        static const int DDL_HASH = HashingUtils::HashString("DDL");
        static const int DML_HASH = HashingUtils::HashString("DML");
        static const int UTILITY_HASH = HashingUtils::HashString("UTILITY");


        StatementType GetStatementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DDL_HASH)
          {
            return StatementType::DDL;
          }
          else if (hashCode == DML_HASH)
          {
            return StatementType::DML;
          }
          else if (hashCode == UTILITY_HASH)
          {
            return StatementType::UTILITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StatementType>(hashCode);
          }

          return StatementType::NOT_SET;
        }

        Aws::String GetNameForStatementType(StatementType enumValue)
        {
          switch(enumValue)
          {
          case StatementType::DDL:
            return "DDL";
          case StatementType::DML:
            return "DML";
          case StatementType::UTILITY:
            return "UTILITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StatementTypeMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
