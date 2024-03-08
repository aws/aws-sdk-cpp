/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/IdentityProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace IdentityProviderMapper
      {

        static const int AWS_Marketplace_HASH = HashingUtils::HashString("AWS_Marketplace");
        static const int GitHub_HASH = HashingUtils::HashString("GitHub");
        static const int Bitbucket_HASH = HashingUtils::HashString("Bitbucket");


        IdentityProvider GetIdentityProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AWS_Marketplace_HASH)
          {
            return IdentityProvider::AWS_Marketplace;
          }
          else if (hashCode == GitHub_HASH)
          {
            return IdentityProvider::GitHub;
          }
          else if (hashCode == Bitbucket_HASH)
          {
            return IdentityProvider::Bitbucket;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IdentityProvider>(hashCode);
          }

          return IdentityProvider::NOT_SET;
        }

        Aws::String GetNameForIdentityProvider(IdentityProvider enumValue)
        {
          switch(enumValue)
          {
          case IdentityProvider::NOT_SET:
            return {};
          case IdentityProvider::AWS_Marketplace:
            return "AWS_Marketplace";
          case IdentityProvider::GitHub:
            return "GitHub";
          case IdentityProvider::Bitbucket:
            return "Bitbucket";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IdentityProviderMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
