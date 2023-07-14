/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/Fault.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace FaultMapper
      {

        static const int Client_HASH = HashingUtils::HashString("Client");
        static const int Server_HASH = HashingUtils::HashString("Server");
        static const int Unknown_HASH = HashingUtils::HashString("Unknown");


        Fault GetFaultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Client_HASH)
          {
            return Fault::Client;
          }
          else if (hashCode == Server_HASH)
          {
            return Fault::Server;
          }
          else if (hashCode == Unknown_HASH)
          {
            return Fault::Unknown;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Fault>(hashCode);
          }

          return Fault::NOT_SET;
        }

        Aws::String GetNameForFault(Fault enumValue)
        {
          switch(enumValue)
          {
          case Fault::Client:
            return "Client";
          case Fault::Server:
            return "Server";
          case Fault::Unknown:
            return "Unknown";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FaultMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
