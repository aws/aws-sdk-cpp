/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/MatchFieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAF
  {
    namespace Model
    {
      namespace MatchFieldTypeMapper
      {

        static const int URI_HASH = HashingUtils::HashString("URI");
        static const int QUERY_STRING_HASH = HashingUtils::HashString("QUERY_STRING");
        static const int HEADER_HASH = HashingUtils::HashString("HEADER");
        static const int METHOD_HASH = HashingUtils::HashString("METHOD");
        static const int BODY_HASH = HashingUtils::HashString("BODY");
        static const int SINGLE_QUERY_ARG_HASH = HashingUtils::HashString("SINGLE_QUERY_ARG");
        static const int ALL_QUERY_ARGS_HASH = HashingUtils::HashString("ALL_QUERY_ARGS");


        MatchFieldType GetMatchFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == URI_HASH)
          {
            return MatchFieldType::URI;
          }
          else if (hashCode == QUERY_STRING_HASH)
          {
            return MatchFieldType::QUERY_STRING;
          }
          else if (hashCode == HEADER_HASH)
          {
            return MatchFieldType::HEADER;
          }
          else if (hashCode == METHOD_HASH)
          {
            return MatchFieldType::METHOD;
          }
          else if (hashCode == BODY_HASH)
          {
            return MatchFieldType::BODY;
          }
          else if (hashCode == SINGLE_QUERY_ARG_HASH)
          {
            return MatchFieldType::SINGLE_QUERY_ARG;
          }
          else if (hashCode == ALL_QUERY_ARGS_HASH)
          {
            return MatchFieldType::ALL_QUERY_ARGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MatchFieldType>(hashCode);
          }

          return MatchFieldType::NOT_SET;
        }

        Aws::String GetNameForMatchFieldType(MatchFieldType enumValue)
        {
          switch(enumValue)
          {
          case MatchFieldType::URI:
            return "URI";
          case MatchFieldType::QUERY_STRING:
            return "QUERY_STRING";
          case MatchFieldType::HEADER:
            return "HEADER";
          case MatchFieldType::METHOD:
            return "METHOD";
          case MatchFieldType::BODY:
            return "BODY";
          case MatchFieldType::SINGLE_QUERY_ARG:
            return "SINGLE_QUERY_ARG";
          case MatchFieldType::ALL_QUERY_ARGS:
            return "ALL_QUERY_ARGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MatchFieldTypeMapper
    } // namespace Model
  } // namespace WAF
} // namespace Aws
