/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/ActiveDirectoryErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace ActiveDirectoryErrorTypeMapper
      {

        static constexpr uint32_t DOMAIN_NOT_FOUND_HASH = ConstExprHashingUtils::HashString("DOMAIN_NOT_FOUND");
        static constexpr uint32_t INCOMPATIBLE_DOMAIN_MODE_HASH = ConstExprHashingUtils::HashString("INCOMPATIBLE_DOMAIN_MODE");
        static constexpr uint32_t WRONG_VPC_HASH = ConstExprHashingUtils::HashString("WRONG_VPC");
        static constexpr uint32_t INVALID_DOMAIN_STAGE_HASH = ConstExprHashingUtils::HashString("INVALID_DOMAIN_STAGE");


        ActiveDirectoryErrorType GetActiveDirectoryErrorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOMAIN_NOT_FOUND_HASH)
          {
            return ActiveDirectoryErrorType::DOMAIN_NOT_FOUND;
          }
          else if (hashCode == INCOMPATIBLE_DOMAIN_MODE_HASH)
          {
            return ActiveDirectoryErrorType::INCOMPATIBLE_DOMAIN_MODE;
          }
          else if (hashCode == WRONG_VPC_HASH)
          {
            return ActiveDirectoryErrorType::WRONG_VPC;
          }
          else if (hashCode == INVALID_DOMAIN_STAGE_HASH)
          {
            return ActiveDirectoryErrorType::INVALID_DOMAIN_STAGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActiveDirectoryErrorType>(hashCode);
          }

          return ActiveDirectoryErrorType::NOT_SET;
        }

        Aws::String GetNameForActiveDirectoryErrorType(ActiveDirectoryErrorType enumValue)
        {
          switch(enumValue)
          {
          case ActiveDirectoryErrorType::NOT_SET:
            return {};
          case ActiveDirectoryErrorType::DOMAIN_NOT_FOUND:
            return "DOMAIN_NOT_FOUND";
          case ActiveDirectoryErrorType::INCOMPATIBLE_DOMAIN_MODE:
            return "INCOMPATIBLE_DOMAIN_MODE";
          case ActiveDirectoryErrorType::WRONG_VPC:
            return "WRONG_VPC";
          case ActiveDirectoryErrorType::INVALID_DOMAIN_STAGE:
            return "INVALID_DOMAIN_STAGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActiveDirectoryErrorTypeMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
