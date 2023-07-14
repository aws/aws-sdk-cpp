/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PrincipalType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace PrincipalTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int ROLE_HASH = HashingUtils::HashString("ROLE");
        static const int GROUP_HASH = HashingUtils::HashString("GROUP");


        PrincipalType GetPrincipalTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return PrincipalType::USER;
          }
          else if (hashCode == ROLE_HASH)
          {
            return PrincipalType::ROLE;
          }
          else if (hashCode == GROUP_HASH)
          {
            return PrincipalType::GROUP;
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
          case PrincipalType::USER:
            return "USER";
          case PrincipalType::ROLE:
            return "ROLE";
          case PrincipalType::GROUP:
            return "GROUP";
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
  } // namespace Glue
} // namespace Aws
