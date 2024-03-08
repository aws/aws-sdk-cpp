/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/ParameterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GlueDataBrew
  {
    namespace Model
    {
      namespace ParameterTypeMapper
      {

        static const int Datetime_HASH = HashingUtils::HashString("Datetime");
        static const int Number_HASH = HashingUtils::HashString("Number");
        static const int String_HASH = HashingUtils::HashString("String");


        ParameterType GetParameterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Datetime_HASH)
          {
            return ParameterType::Datetime;
          }
          else if (hashCode == Number_HASH)
          {
            return ParameterType::Number;
          }
          else if (hashCode == String_HASH)
          {
            return ParameterType::String;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParameterType>(hashCode);
          }

          return ParameterType::NOT_SET;
        }

        Aws::String GetNameForParameterType(ParameterType enumValue)
        {
          switch(enumValue)
          {
          case ParameterType::NOT_SET:
            return {};
          case ParameterType::Datetime:
            return "Datetime";
          case ParameterType::Number:
            return "Number";
          case ParameterType::String:
            return "String";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParameterTypeMapper
    } // namespace Model
  } // namespace GlueDataBrew
} // namespace Aws
