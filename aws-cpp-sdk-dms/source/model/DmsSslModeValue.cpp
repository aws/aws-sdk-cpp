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
#include <aws/dms/model/DmsSslModeValue.h>
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
      namespace DmsSslModeValueMapper
      {

        static const int none_HASH = HashingUtils::HashString("none");
        static const int require_HASH = HashingUtils::HashString("require");
        static const int verify_ca_HASH = HashingUtils::HashString("verify-ca");
        static const int verify_full_HASH = HashingUtils::HashString("verify-full");


        DmsSslModeValue GetDmsSslModeValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == none_HASH)
          {
            return DmsSslModeValue::none;
          }
          else if (hashCode == require_HASH)
          {
            return DmsSslModeValue::require;
          }
          else if (hashCode == verify_ca_HASH)
          {
            return DmsSslModeValue::verify_ca;
          }
          else if (hashCode == verify_full_HASH)
          {
            return DmsSslModeValue::verify_full;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DmsSslModeValue>(hashCode);
          }

          return DmsSslModeValue::NOT_SET;
        }

        Aws::String GetNameForDmsSslModeValue(DmsSslModeValue enumValue)
        {
          switch(enumValue)
          {
          case DmsSslModeValue::none:
            return "none";
          case DmsSslModeValue::require:
            return "require";
          case DmsSslModeValue::verify_ca:
            return "verify-ca";
          case DmsSslModeValue::verify_full:
            return "verify-full";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DmsSslModeValueMapper
    } // namespace Model
  } // namespace DatabaseMigrationService
} // namespace Aws
