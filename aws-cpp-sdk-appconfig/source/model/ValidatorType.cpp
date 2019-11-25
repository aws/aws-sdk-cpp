/*
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

#include <aws/appconfig/model/ValidatorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppConfig
  {
    namespace Model
    {
      namespace ValidatorTypeMapper
      {

        static const int JSON_SCHEMA_HASH = HashingUtils::HashString("JSON_SCHEMA");
        static const int LAMBDA_HASH = HashingUtils::HashString("LAMBDA");


        ValidatorType GetValidatorTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JSON_SCHEMA_HASH)
          {
            return ValidatorType::JSON_SCHEMA;
          }
          else if (hashCode == LAMBDA_HASH)
          {
            return ValidatorType::LAMBDA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidatorType>(hashCode);
          }

          return ValidatorType::NOT_SET;
        }

        Aws::String GetNameForValidatorType(ValidatorType enumValue)
        {
          switch(enumValue)
          {
          case ValidatorType::JSON_SCHEMA:
            return "JSON_SCHEMA";
          case ValidatorType::LAMBDA:
            return "LAMBDA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidatorTypeMapper
    } // namespace Model
  } // namespace AppConfig
} // namespace Aws
