/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/InternalAccessType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AccessAnalyzer
  {
    namespace Model
    {
      namespace InternalAccessTypeMapper
      {

        static const int INTRA_ACCOUNT_HASH = HashingUtils::HashString("INTRA_ACCOUNT");
        static const int INTRA_ORG_HASH = HashingUtils::HashString("INTRA_ORG");


        InternalAccessType GetInternalAccessTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INTRA_ACCOUNT_HASH)
          {
            return InternalAccessType::INTRA_ACCOUNT;
          }
          else if (hashCode == INTRA_ORG_HASH)
          {
            return InternalAccessType::INTRA_ORG;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InternalAccessType>(hashCode);
          }

          return InternalAccessType::NOT_SET;
        }

        Aws::String GetNameForInternalAccessType(InternalAccessType enumValue)
        {
          switch(enumValue)
          {
          case InternalAccessType::NOT_SET:
            return {};
          case InternalAccessType::INTRA_ACCOUNT:
            return "INTRA_ACCOUNT";
          case InternalAccessType::INTRA_ORG:
            return "INTRA_ORG";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InternalAccessTypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
