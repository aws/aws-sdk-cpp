/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/AlternateContactType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Account
  {
    namespace Model
    {
      namespace AlternateContactTypeMapper
      {

        static const int BILLING_HASH = HashingUtils::HashString("BILLING");
        static const int OPERATIONS_HASH = HashingUtils::HashString("OPERATIONS");
        static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");


        AlternateContactType GetAlternateContactTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BILLING_HASH)
          {
            return AlternateContactType::BILLING;
          }
          else if (hashCode == OPERATIONS_HASH)
          {
            return AlternateContactType::OPERATIONS;
          }
          else if (hashCode == SECURITY_HASH)
          {
            return AlternateContactType::SECURITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AlternateContactType>(hashCode);
          }

          return AlternateContactType::NOT_SET;
        }

        Aws::String GetNameForAlternateContactType(AlternateContactType enumValue)
        {
          switch(enumValue)
          {
          case AlternateContactType::NOT_SET:
            return {};
          case AlternateContactType::BILLING:
            return "BILLING";
          case AlternateContactType::OPERATIONS:
            return "OPERATIONS";
          case AlternateContactType::SECURITY:
            return "SECURITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AlternateContactTypeMapper
    } // namespace Model
  } // namespace Account
} // namespace Aws
