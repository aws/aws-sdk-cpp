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

#include <aws/dms/model/ReloadOptionValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DatabaseMigrationService
  {
    namespace Model
    {
      namespace ReloadOptionValueMapper
      {

        static const int data_reload_HASH = HashingUtils::HashString("data-reload");
        static const int validate_only_HASH = HashingUtils::HashString("validate-only");


        ReloadOptionValue GetReloadOptionValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == data_reload_HASH)
          {
            return ReloadOptionValue::data_reload;
          }
          else if (hashCode == validate_only_HASH)
          {
            return ReloadOptionValue::validate_only;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReloadOptionValue>(hashCode);
          }

          return ReloadOptionValue::NOT_SET;
        }

        Aws::String GetNameForReloadOptionValue(ReloadOptionValue enumValue)
        {
          switch(enumValue)
          {
          case ReloadOptionValue::data_reload:
            return "data-reload";
          case ReloadOptionValue::validate_only:
            return "validate-only";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReloadOptionValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
