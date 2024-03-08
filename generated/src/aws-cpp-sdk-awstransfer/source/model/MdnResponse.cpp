/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/MdnResponse.h>
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
      namespace MdnResponseMapper
      {

        static const int SYNC_HASH = HashingUtils::HashString("SYNC");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        MdnResponse GetMdnResponseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNC_HASH)
          {
            return MdnResponse::SYNC;
          }
          else if (hashCode == NONE_HASH)
          {
            return MdnResponse::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MdnResponse>(hashCode);
          }

          return MdnResponse::NOT_SET;
        }

        Aws::String GetNameForMdnResponse(MdnResponse enumValue)
        {
          switch(enumValue)
          {
          case MdnResponse::NOT_SET:
            return {};
          case MdnResponse::SYNC:
            return "SYNC";
          case MdnResponse::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MdnResponseMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
