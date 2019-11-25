/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
