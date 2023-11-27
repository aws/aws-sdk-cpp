/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/Type.h>
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
      namespace TypeMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int ORGANIZATION_HASH = HashingUtils::HashString("ORGANIZATION");
        static const int ACCOUNT_UNUSED_ACCESS_HASH = HashingUtils::HashString("ACCOUNT_UNUSED_ACCESS");
        static const int ORGANIZATION_UNUSED_ACCESS_HASH = HashingUtils::HashString("ORGANIZATION_UNUSED_ACCESS");


        Type GetTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return Type::ACCOUNT;
          }
          else if (hashCode == ORGANIZATION_HASH)
          {
            return Type::ORGANIZATION;
          }
          else if (hashCode == ACCOUNT_UNUSED_ACCESS_HASH)
          {
            return Type::ACCOUNT_UNUSED_ACCESS;
          }
          else if (hashCode == ORGANIZATION_UNUSED_ACCESS_HASH)
          {
            return Type::ORGANIZATION_UNUSED_ACCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Type>(hashCode);
          }

          return Type::NOT_SET;
        }

        Aws::String GetNameForType(Type enumValue)
        {
          switch(enumValue)
          {
          case Type::NOT_SET:
            return {};
          case Type::ACCOUNT:
            return "ACCOUNT";
          case Type::ORGANIZATION:
            return "ORGANIZATION";
          case Type::ACCOUNT_UNUSED_ACCESS:
            return "ACCOUNT_UNUSED_ACCESS";
          case Type::ORGANIZATION_UNUSED_ACCESS:
            return "ORGANIZATION_UNUSED_ACCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TypeMapper
    } // namespace Model
  } // namespace AccessAnalyzer
} // namespace Aws
