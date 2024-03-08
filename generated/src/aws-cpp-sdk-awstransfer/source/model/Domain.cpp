/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/Domain.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace DomainMapper
      {

        static const int S3_HASH = HashingUtils::HashString("S3");
        static const int EFS_HASH = HashingUtils::HashString("EFS");


        Domain GetDomainForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == S3_HASH)
          {
            return Domain::S3;
          }
          else if (hashCode == EFS_HASH)
          {
            return Domain::EFS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Domain>(hashCode);
          }

          return Domain::NOT_SET;
        }

        Aws::String GetNameForDomain(Domain enumValue)
        {
          switch(enumValue)
          {
          case Domain::NOT_SET:
            return {};
          case Domain::S3:
            return "S3";
          case Domain::EFS:
            return "EFS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DomainMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
