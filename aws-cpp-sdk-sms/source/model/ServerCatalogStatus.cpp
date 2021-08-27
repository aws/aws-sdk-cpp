/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sms/model/ServerCatalogStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SMS
  {
    namespace Model
    {
      namespace ServerCatalogStatusMapper
      {

        static const int NOT_IMPORTED_HASH = HashingUtils::HashString("NOT_IMPORTED");
        static const int IMPORTING_HASH = HashingUtils::HashString("IMPORTING");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");


        ServerCatalogStatus GetServerCatalogStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_IMPORTED_HASH)
          {
            return ServerCatalogStatus::NOT_IMPORTED;
          }
          else if (hashCode == IMPORTING_HASH)
          {
            return ServerCatalogStatus::IMPORTING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ServerCatalogStatus::AVAILABLE;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ServerCatalogStatus::DELETED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ServerCatalogStatus::EXPIRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerCatalogStatus>(hashCode);
          }

          return ServerCatalogStatus::NOT_SET;
        }

        Aws::String GetNameForServerCatalogStatus(ServerCatalogStatus enumValue)
        {
          switch(enumValue)
          {
          case ServerCatalogStatus::NOT_IMPORTED:
            return "NOT_IMPORTED";
          case ServerCatalogStatus::IMPORTING:
            return "IMPORTING";
          case ServerCatalogStatus::AVAILABLE:
            return "AVAILABLE";
          case ServerCatalogStatus::DELETED:
            return "DELETED";
          case ServerCatalogStatus::EXPIRED:
            return "EXPIRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerCatalogStatusMapper
    } // namespace Model
  } // namespace SMS
} // namespace Aws
