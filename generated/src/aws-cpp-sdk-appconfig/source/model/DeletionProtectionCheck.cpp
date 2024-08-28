/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/DeletionProtectionCheck.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace DeletionProtectionCheckMapper
      {

        static const int ACCOUNT_DEFAULT_HASH = HashingUtils::HashString("ACCOUNT_DEFAULT");
        static const int APPLY_HASH = HashingUtils::HashString("APPLY");
        static const int BYPASS_HASH = HashingUtils::HashString("BYPASS");


        DeletionProtectionCheck GetDeletionProtectionCheckForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_DEFAULT_HASH)
          {
            return DeletionProtectionCheck::ACCOUNT_DEFAULT;
          }
          else if (hashCode == APPLY_HASH)
          {
            return DeletionProtectionCheck::APPLY;
          }
          else if (hashCode == BYPASS_HASH)
          {
            return DeletionProtectionCheck::BYPASS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionProtectionCheck>(hashCode);
          }

          return DeletionProtectionCheck::NOT_SET;
        }

        Aws::String GetNameForDeletionProtectionCheck(DeletionProtectionCheck enumValue)
        {
          switch(enumValue)
          {
          case DeletionProtectionCheck::NOT_SET:
            return {};
          case DeletionProtectionCheck::ACCOUNT_DEFAULT:
            return "ACCOUNT_DEFAULT";
          case DeletionProtectionCheck::APPLY:
            return "APPLY";
          case DeletionProtectionCheck::BYPASS:
            return "BYPASS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionProtectionCheckMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
