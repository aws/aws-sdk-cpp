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

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int DESCRIPTION_HASH = HashingUtils::HashString("DESCRIPTION");
        static const int SCHEDULED_TIME_HASH = HashingUtils::HashString("SCHEDULED_TIME");
        static const int QUICK_CONNECT_HASH = HashingUtils::HashString("QUICK_CONNECT");
        static const int URL_HASH = HashingUtils::HashString("URL");
        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");
        static const int TEXT_AREA_HASH = HashingUtils::HashString("TEXT_AREA");
        static const int DATE_TIME_HASH = HashingUtils::HashString("DATE_TIME");
        static const int BOOLEAN_HASH = HashingUtils::HashString("BOOLEAN");
        static const int SINGLE_SELECT_HASH = HashingUtils::HashString("SINGLE_SELECT");
        static const int EMAIL_HASH = HashingUtils::HashString("EMAIL");


        TaskTemplateFieldType GetTaskTemplateFieldTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
