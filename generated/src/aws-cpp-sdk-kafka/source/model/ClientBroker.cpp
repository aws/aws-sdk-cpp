/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClientBroker.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Kafka
  {
    namespace Model
    {
      namespace ClientBrokerMapper
      {

        static const int TLS_HASH = HashingUtils::HashString("TLS");
        static const int TLS_PLAINTEXT_HASH = HashingUtils::HashString("TLS_PLAINTEXT");
        static const int PLAINTEXT_HASH = HashingUtils::HashString("PLAINTEXT");


        ClientBroker GetClientBrokerForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TLS_HASH)
          {
            return ClientBroker::TLS;
          }
          else if (hashCode == TLS_PLAINTEXT_HASH)
          {
            return ClientBroker::TLS_PLAINTEXT;
          }
          else if (hashCode == PLAINTEXT_HASH)
          {
            return ClientBroker::PLAINTEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClientBroker>(hashCode);
          }

          return ClientBroker::NOT_SET;
        }

        Aws::String GetNameForClientBroker(ClientBroker enumValue)
        {
          switch(enumValue)
          {
          case ClientBroker::TLS:
            return "TLS";
          case ClientBroker::TLS_PLAINTEXT:
            return "TLS_PLAINTEXT";
          case ClientBroker::PLAINTEXT:
            return "PLAINTEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClientBrokerMapper
    } // namespace Model
  } // namespace Kafka
} // namespace Aws
