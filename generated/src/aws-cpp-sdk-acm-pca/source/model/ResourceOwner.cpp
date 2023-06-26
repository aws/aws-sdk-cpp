/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/ResourceOwner.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace ResourceOwnerMapper
      {

        static const int SELF_HASH = HashingUtils::HashString("SELF");
        static const int OTHER_ACCOUNTS_HASH = HashingUtils::HashString("OTHER_ACCOUNTS");


        ResourceOwner GetResourceOwnerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_HASH)
          {
            return ResourceOwner::SELF;
          }
          else if (hashCode == OTHER_ACCOUNTS_HASH)
          {
            return ResourceOwner::OTHER_ACCOUNTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResourceOwner>(hashCode);
          }

          return ResourceOwner::NOT_SET;
        }

        Aws::String GetNameForResourceOwner(ResourceOwner enumValue)
        {
          switch(enumValue)
          {
          case ResourceOwner::SELF:
            return "SELF";
          case ResourceOwner::OTHER_ACCOUNTS:
            return "OTHER_ACCOUNTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResourceOwnerMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
