﻿/*
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

#include <aws/waf-regional/model/MatchFieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFRegional
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

            return "";
          }
        }

      } // namespace MatchFieldTypeMapper
    } // namespace Model
  } // namespace WAFRegional
} // namespace Aws
