/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/model/MigrationTypeValue.h>
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
      namespace MigrationTypeValueMapper
      {

        static const int full_load_HASH = HashingUtils::HashString("full-load");
        static const int cdc_HASH = HashingUtils::HashString("cdc");
        static const int full_load_and_cdc_HASH = HashingUtils::HashString("full-load-and-cdc");


        MigrationTypeValue GetMigrationTypeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == full_load_HASH)
          {
            return MigrationTypeValue::full_load;
          }
          else if (hashCode == cdc_HASH)
          {
            return MigrationTypeValue::cdc;
          }
          else if (hashCode == full_load_and_cdc_HASH)
          {
            return MigrationTypeValue::full_load_and_cdc;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MigrationTypeValue>(hashCode);
          }

          return MigrationTypeValue::NOT_SET;
        }

        Aws::String GetNameForMigrationTypeValue(MigrationTypeValue enumValue)
        {
          switch(enumValue)
          {
          case MigrationTypeValue::full_load:
            return "full-load";
          case MigrationTypeValue::cdc:
            return "cdc";
          case MigrationTypeValue::full_load_and_cdc:
            return "full-load-and-cdc";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MigrationTypeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
