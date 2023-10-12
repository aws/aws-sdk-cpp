/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TaskTemplateFieldType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace TaskTemplateFieldTypeMapper
      {

        static constexpr uint32_t NAME_HASH = ConstExprHashingUtils::HashString("NAME");
        static constexpr uint32_t DESCRIPTION_HASH = ConstExprHashingUtils::HashString("DESCRIPTION");
        static constexpr uint32_t SCHEDULED_TIME_HASH = ConstExprHashingUtils::HashString("SCHEDULED_TIME");
        static constexpr uint32_t QUICK_CONNECT_HASH = ConstExprHashingUtils::HashString("QUICK_CONNECT");
        static constexpr uint32_t URL_HASH = ConstExprHashingUtils::HashString("URL");
        static constexpr uint32_t NUMBER_HASH = ConstExprHashingUtils::HashString("NUMBER");
        static constexpr uint32_t TEXT_HASH = ConstExprHashingUtils::HashString("TEXT");
        static constexpr uint32_t TEXT_AREA_HASH = ConstExprHashingUtils::HashString("TEXT_AREA");
        static constexpr uint32_t DATE_TIME_HASH = ConstExprHashingUtils::HashString("DATE_TIME");
        static constexpr uint32_t BOOLEAN_HASH = ConstExprHashingUtils::HashString("BOOLEAN");
        static constexpr uint32_t SINGLE_SELECT_HASH = ConstExprHashingUtils::HashString("SINGLE_SELECT");
        static constexpr uint32_t EMAIL_HASH = ConstExprHashingUtils::HashString("EMAIL");


        TaskTemplateFieldType GetTaskTemplateFieldTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return TaskTemplateFieldType::NAME;
          }
          else if (hashCode == DESCRIPTION_HASH)
          {
            return TaskTemplateFieldType::DESCRIPTION;
          }
          else if (hashCode == SCHEDULED_TIME_HASH)
          {
            return TaskTemplateFieldType::SCHEDULED_TIME;
          }
          else if (hashCode == QUICK_CONNECT_HASH)
          {
            return TaskTemplateFieldType::QUICK_CONNECT;
          }
          else if (hashCode == URL_HASH)
          {
            return TaskTemplateFieldType::URL;
          }
          else if (hashCode == NUMBER_HASH)
          {
            return TaskTemplateFieldType::NUMBER;
          }
          else if (hashCode == TEXT_HASH)
          {
            return TaskTemplateFieldType::TEXT;
          }
          else if (hashCode == TEXT_AREA_HASH)
          {
            return TaskTemplateFieldType::TEXT_AREA;
          }
          else if (hashCode == DATE_TIME_HASH)
          {
            return TaskTemplateFieldType::DATE_TIME;
          }
          else if (hashCode == BOOLEAN_HASH)
          {
            return TaskTemplateFieldType::BOOLEAN;
          }
          else if (hashCode == SINGLE_SELECT_HASH)
          {
            return TaskTemplateFieldType::SINGLE_SELECT;
          }
          else if (hashCode == EMAIL_HASH)
          {
            return TaskTemplateFieldType::EMAIL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskTemplateFieldType>(hashCode);
          }

          return TaskTemplateFieldType::NOT_SET;
        }

        Aws::String GetNameForTaskTemplateFieldType(TaskTemplateFieldType enumValue)
        {
          switch(enumValue)
          {
          case TaskTemplateFieldType::NOT_SET:
            return {};
          case TaskTemplateFieldType::NAME:
            return "NAME";
          case TaskTemplateFieldType::DESCRIPTION:
            return "DESCRIPTION";
          case TaskTemplateFieldType::SCHEDULED_TIME:
            return "SCHEDULED_TIME";
          case TaskTemplateFieldType::QUICK_CONNECT:
            return "QUICK_CONNECT";
          case TaskTemplateFieldType::URL:
            return "URL";
          case TaskTemplateFieldType::NUMBER:
            return "NUMBER";
          case TaskTemplateFieldType::TEXT:
            return "TEXT";
          case TaskTemplateFieldType::TEXT_AREA:
            return "TEXT_AREA";
          case TaskTemplateFieldType::DATE_TIME:
            return "DATE_TIME";
          case TaskTemplateFieldType::BOOLEAN:
            return "BOOLEAN";
          case TaskTemplateFieldType::SINGLE_SELECT:
            return "SINGLE_SELECT";
          case TaskTemplateFieldType::EMAIL:
            return "EMAIL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskTemplateFieldTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
