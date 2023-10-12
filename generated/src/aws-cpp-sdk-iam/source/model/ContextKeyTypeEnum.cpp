/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iam/model/ContextKeyTypeEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IAM
  {
    namespace Model
    {
      namespace ContextKeyTypeEnumMapper
      {

        static constexpr uint32_t string_HASH = ConstExprHashingUtils::HashString("string");
        static constexpr uint32_t stringList_HASH = ConstExprHashingUtils::HashString("stringList");
        static constexpr uint32_t numeric_HASH = ConstExprHashingUtils::HashString("numeric");
        static constexpr uint32_t numericList_HASH = ConstExprHashingUtils::HashString("numericList");
        static constexpr uint32_t boolean_HASH = ConstExprHashingUtils::HashString("boolean");
        static constexpr uint32_t booleanList_HASH = ConstExprHashingUtils::HashString("booleanList");
        static constexpr uint32_t ip_HASH = ConstExprHashingUtils::HashString("ip");
        static constexpr uint32_t ipList_HASH = ConstExprHashingUtils::HashString("ipList");
        static constexpr uint32_t binary_HASH = ConstExprHashingUtils::HashString("binary");
        static constexpr uint32_t binaryList_HASH = ConstExprHashingUtils::HashString("binaryList");
        static constexpr uint32_t date_HASH = ConstExprHashingUtils::HashString("date");
        static constexpr uint32_t dateList_HASH = ConstExprHashingUtils::HashString("dateList");


        ContextKeyTypeEnum GetContextKeyTypeEnumForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == string_HASH)
          {
            return ContextKeyTypeEnum::string;
          }
          else if (hashCode == stringList_HASH)
          {
            return ContextKeyTypeEnum::stringList;
          }
          else if (hashCode == numeric_HASH)
          {
            return ContextKeyTypeEnum::numeric;
          }
          else if (hashCode == numericList_HASH)
          {
            return ContextKeyTypeEnum::numericList;
          }
          else if (hashCode == boolean_HASH)
          {
            return ContextKeyTypeEnum::boolean;
          }
          else if (hashCode == booleanList_HASH)
          {
            return ContextKeyTypeEnum::booleanList;
          }
          else if (hashCode == ip_HASH)
          {
            return ContextKeyTypeEnum::ip;
          }
          else if (hashCode == ipList_HASH)
          {
            return ContextKeyTypeEnum::ipList;
          }
          else if (hashCode == binary_HASH)
          {
            return ContextKeyTypeEnum::binary;
          }
          else if (hashCode == binaryList_HASH)
          {
            return ContextKeyTypeEnum::binaryList;
          }
          else if (hashCode == date_HASH)
          {
            return ContextKeyTypeEnum::date;
          }
          else if (hashCode == dateList_HASH)
          {
            return ContextKeyTypeEnum::dateList;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ContextKeyTypeEnum>(hashCode);
          }

          return ContextKeyTypeEnum::NOT_SET;
        }

        Aws::String GetNameForContextKeyTypeEnum(ContextKeyTypeEnum enumValue)
        {
          switch(enumValue)
          {
          case ContextKeyTypeEnum::NOT_SET:
            return {};
          case ContextKeyTypeEnum::string:
            return "string";
          case ContextKeyTypeEnum::stringList:
            return "stringList";
          case ContextKeyTypeEnum::numeric:
            return "numeric";
          case ContextKeyTypeEnum::numericList:
            return "numericList";
          case ContextKeyTypeEnum::boolean:
            return "boolean";
          case ContextKeyTypeEnum::booleanList:
            return "booleanList";
          case ContextKeyTypeEnum::ip:
            return "ip";
          case ContextKeyTypeEnum::ipList:
            return "ipList";
          case ContextKeyTypeEnum::binary:
            return "binary";
          case ContextKeyTypeEnum::binaryList:
            return "binaryList";
          case ContextKeyTypeEnum::date:
            return "date";
          case ContextKeyTypeEnum::dateList:
            return "dateList";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ContextKeyTypeEnumMapper
    } // namespace Model
  } // namespace IAM
} // namespace Aws
