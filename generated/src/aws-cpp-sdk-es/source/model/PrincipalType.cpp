/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/PrincipalType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ElasticsearchService
  {
    namespace Model
    {
      namespace PrincipalTypeMapper
      {

        static constexpr uint32_t AWS_ACCOUNT_HASH = ConstExprHashingUtils::HashString("AWS_ACCOUNT");
        static constexpr uint32_t AWS_SERVICE_HASH = ConstExprHashingUtils::HashString("AWS_SERVICE");


        PrincipalType GetPrincipalTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_ACCOUNT_HASH)
          {
            return PrincipalType::AWS_ACCOUNT;
          }
          else if (hashCode == AWS_SERVICE_HASH)
          {
            return PrincipalType::AWS_SERVICE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PrincipalType>(hashCode);
          }

          return PrincipalType::NOT_SET;
        }

        Aws::String GetNameForPrincipalType(PrincipalType enumValue)
        {
          switch(enumValue)
          {
          case PrincipalType::NOT_SET:
            return {};
          case PrincipalType::AWS_ACCOUNT:
            return "AWS_ACCOUNT";
          case PrincipalType::AWS_SERVICE:
            return "AWS_SERVICE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PrincipalTypeMapper
    } // namespace Model
  } // namespace ElasticsearchService
} // namespace Aws
