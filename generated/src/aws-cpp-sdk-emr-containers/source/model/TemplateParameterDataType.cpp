/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/TemplateParameterDataType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace TemplateParameterDataTypeMapper
      {

        static const int NUMBER_HASH = HashingUtils::HashString("NUMBER");
        static const int STRING_HASH = HashingUtils::HashString("STRING");


        TemplateParameterDataType GetTemplateParameterDataTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NUMBER_HASH)
          {
            return TemplateParameterDataType::NUMBER;
          }
          else if (hashCode == STRING_HASH)
          {
            return TemplateParameterDataType::STRING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TemplateParameterDataType>(hashCode);
          }

          return TemplateParameterDataType::NOT_SET;
        }

        Aws::String GetNameForTemplateParameterDataType(TemplateParameterDataType enumValue)
        {
          switch(enumValue)
          {
          case TemplateParameterDataType::NUMBER:
            return "NUMBER";
          case TemplateParameterDataType::STRING:
            return "STRING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TemplateParameterDataTypeMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
