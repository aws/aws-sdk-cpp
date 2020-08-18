/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ImportDestinationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SESV2
  {
    namespace Model
    {
      namespace ImportDestinationTypeMapper
      {

        static const int SUPPRESSION_LIST_HASH = HashingUtils::HashString("SUPPRESSION_LIST");


        ImportDestinationType GetImportDestinationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUPPRESSION_LIST_HASH)
          {
            return ImportDestinationType::SUPPRESSION_LIST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImportDestinationType>(hashCode);
          }

          return ImportDestinationType::NOT_SET;
        }

        Aws::String GetNameForImportDestinationType(ImportDestinationType enumValue)
        {
          switch(enumValue)
          {
          case ImportDestinationType::SUPPRESSION_LIST:
            return "SUPPRESSION_LIST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImportDestinationTypeMapper
    } // namespace Model
  } // namespace SESV2
} // namespace Aws
