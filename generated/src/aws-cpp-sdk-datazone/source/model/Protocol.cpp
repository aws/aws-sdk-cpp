/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/Protocol.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace ProtocolMapper
      {

        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
        static const int GLUE_INTERACTIVE_SESSION_HASH = HashingUtils::HashString("GLUE_INTERACTIVE_SESSION");
        static const int HTTPS_HASH = HashingUtils::HashString("HTTPS");
        static const int JDBC_HASH = HashingUtils::HashString("JDBC");
        static const int LIVY_HASH = HashingUtils::HashString("LIVY");
        static const int ODBC_HASH = HashingUtils::HashString("ODBC");
        static const int PRISM_HASH = HashingUtils::HashString("PRISM");


        Protocol GetProtocolForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATHENA_HASH)
          {
            return Protocol::ATHENA;
          }
          else if (hashCode == GLUE_INTERACTIVE_SESSION_HASH)
          {
            return Protocol::GLUE_INTERACTIVE_SESSION;
          }
          else if (hashCode == HTTPS_HASH)
          {
            return Protocol::HTTPS;
          }
          else if (hashCode == JDBC_HASH)
          {
            return Protocol::JDBC;
          }
          else if (hashCode == LIVY_HASH)
          {
            return Protocol::LIVY;
          }
          else if (hashCode == ODBC_HASH)
          {
            return Protocol::ODBC;
          }
          else if (hashCode == PRISM_HASH)
          {
            return Protocol::PRISM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Protocol>(hashCode);
          }

          return Protocol::NOT_SET;
        }

        Aws::String GetNameForProtocol(Protocol enumValue)
        {
          switch(enumValue)
          {
          case Protocol::NOT_SET:
            return {};
          case Protocol::ATHENA:
            return "ATHENA";
          case Protocol::GLUE_INTERACTIVE_SESSION:
            return "GLUE_INTERACTIVE_SESSION";
          case Protocol::HTTPS:
            return "HTTPS";
          case Protocol::JDBC:
            return "JDBC";
          case Protocol::LIVY:
            return "LIVY";
          case Protocol::ODBC:
            return "ODBC";
          case Protocol::PRISM:
            return "PRISM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProtocolMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
