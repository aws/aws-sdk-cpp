/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ServerCertificateStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace ServerCertificateStatusMapper
      {

        static const int INVALID_HASH = HashingUtils::HashString("INVALID");
        static const int VALID_HASH = HashingUtils::HashString("VALID");


        ServerCertificateStatus GetServerCertificateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_HASH)
          {
            return ServerCertificateStatus::INVALID;
          }
          else if (hashCode == VALID_HASH)
          {
            return ServerCertificateStatus::VALID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServerCertificateStatus>(hashCode);
          }

          return ServerCertificateStatus::NOT_SET;
        }

        Aws::String GetNameForServerCertificateStatus(ServerCertificateStatus enumValue)
        {
          switch(enumValue)
          {
          case ServerCertificateStatus::INVALID:
            return "INVALID";
          case ServerCertificateStatus::VALID:
            return "VALID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ServerCertificateStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
