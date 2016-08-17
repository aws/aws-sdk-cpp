/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

            return "";
          }
        }

      } // namespace FaultMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
