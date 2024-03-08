/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/LogAnomalyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DevOpsGuru
  {
    namespace Model
    {
      namespace LogAnomalyTypeMapper
      {

        static const int KEYWORD_HASH = HashingUtils::HashString("KEYWORD");
        static const int KEYWORD_TOKEN_HASH = HashingUtils::HashString("KEYWORD_TOKEN");
        static const int FORMAT_HASH = HashingUtils::HashString("FORMAT");
        static const int HTTP_CODE_HASH = HashingUtils::HashString("HTTP_CODE");
        static const int BLOCK_FORMAT_HASH = HashingUtils::HashString("BLOCK_FORMAT");
        static const int NUMERICAL_POINT_HASH = HashingUtils::HashString("NUMERICAL_POINT");
        static const int NUMERICAL_NAN_HASH = HashingUtils::HashString("NUMERICAL_NAN");
        static const int NEW_FIELD_NAME_HASH = HashingUtils::HashString("NEW_FIELD_NAME");


        LogAnomalyType GetLogAnomalyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KEYWORD_HASH)
          {
            return LogAnomalyType::KEYWORD;
          }
          else if (hashCode == KEYWORD_TOKEN_HASH)
          {
            return LogAnomalyType::KEYWORD_TOKEN;
          }
          else if (hashCode == FORMAT_HASH)
          {
            return LogAnomalyType::FORMAT;
          }
          else if (hashCode == HTTP_CODE_HASH)
          {
            return LogAnomalyType::HTTP_CODE;
          }
          else if (hashCode == BLOCK_FORMAT_HASH)
          {
            return LogAnomalyType::BLOCK_FORMAT;
          }
          else if (hashCode == NUMERICAL_POINT_HASH)
          {
            return LogAnomalyType::NUMERICAL_POINT;
          }
          else if (hashCode == NUMERICAL_NAN_HASH)
          {
            return LogAnomalyType::NUMERICAL_NAN;
          }
          else if (hashCode == NEW_FIELD_NAME_HASH)
          {
            return LogAnomalyType::NEW_FIELD_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogAnomalyType>(hashCode);
          }

          return LogAnomalyType::NOT_SET;
        }

        Aws::String GetNameForLogAnomalyType(LogAnomalyType enumValue)
        {
          switch(enumValue)
          {
          case LogAnomalyType::NOT_SET:
            return {};
          case LogAnomalyType::KEYWORD:
            return "KEYWORD";
          case LogAnomalyType::KEYWORD_TOKEN:
            return "KEYWORD_TOKEN";
          case LogAnomalyType::FORMAT:
            return "FORMAT";
          case LogAnomalyType::HTTP_CODE:
            return "HTTP_CODE";
          case LogAnomalyType::BLOCK_FORMAT:
            return "BLOCK_FORMAT";
          case LogAnomalyType::NUMERICAL_POINT:
            return "NUMERICAL_POINT";
          case LogAnomalyType::NUMERICAL_NAN:
            return "NUMERICAL_NAN";
          case LogAnomalyType::NEW_FIELD_NAME:
            return "NEW_FIELD_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogAnomalyTypeMapper
    } // namespace Model
  } // namespace DevOpsGuru
} // namespace Aws
