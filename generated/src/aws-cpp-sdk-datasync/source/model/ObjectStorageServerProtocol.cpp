/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/ObjectStorageServerProtocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace ObjectStorageServerProtocolMapper
      {

        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int HTTP_HASH = HashingUtils::HashString("HTTP");


        ObjectStorageServerProtocol GetObjectStorageServerProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HTTPS_HASH)
          {
            return ObjectStorageServerProtocol::HTTPS;
          }
          else if (hashCode == HTTP_HASH)
          {
            return ObjectStorageServerProtocol::HTTP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ObjectStorageServerProtocol>(hashCode);
          }

          return ObjectStorageServerProtocol::NOT_SET;
        }

        Aws::String GetNameForObjectStorageServerProtocol(ObjectStorageServerProtocol enumValue)
        {
          switch(enumValue)
          {
          case ObjectStorageServerProtocol::HTTPS:
            return "HTTPS";
          case ObjectStorageServerProtocol::HTTP:
            return "HTTP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ObjectStorageServerProtocolMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
