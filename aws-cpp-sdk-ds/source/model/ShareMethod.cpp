/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ShareMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace ShareMethodMapper
      {

        static const int ORGANIZATIONS_HASH = HashingUtils::HashString("ORGANIZATIONS");
        static const int HANDSHAKE_HASH = HashingUtils::HashString("HANDSHAKE");


        ShareMethod GetShareMethodForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ORGANIZATIONS_HASH)
          {
            return ShareMethod::ORGANIZATIONS;
          }
          else if (hashCode == HANDSHAKE_HASH)
          {
            return ShareMethod::HANDSHAKE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShareMethod>(hashCode);
          }

          return ShareMethod::NOT_SET;
        }

        Aws::String GetNameForShareMethod(ShareMethod enumValue)
        {
          switch(enumValue)
          {
          case ShareMethod::ORGANIZATIONS:
            return "ORGANIZATIONS";
          case ShareMethod::HANDSHAKE:
            return "HANDSHAKE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShareMethodMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
