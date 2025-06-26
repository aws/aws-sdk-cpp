/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspacesstreams/model/OriginType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KeyspacesStreams
  {
    namespace Model
    {
      namespace OriginTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int REPLICATION_HASH = HashingUtils::HashString("REPLICATION");
        static const int TTL_HASH = HashingUtils::HashString("TTL");


        OriginType GetOriginTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return OriginType::USER;
          }
          else if (hashCode == REPLICATION_HASH)
          {
            return OriginType::REPLICATION;
          }
          else if (hashCode == TTL_HASH)
          {
            return OriginType::TTL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OriginType>(hashCode);
          }

          return OriginType::NOT_SET;
        }

        Aws::String GetNameForOriginType(OriginType enumValue)
        {
          switch(enumValue)
          {
          case OriginType::NOT_SET:
            return {};
          case OriginType::USER:
            return "USER";
          case OriginType::REPLICATION:
            return "REPLICATION";
          case OriginType::TTL:
            return "TTL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OriginTypeMapper
    } // namespace Model
  } // namespace KeyspacesStreams
} // namespace Aws
