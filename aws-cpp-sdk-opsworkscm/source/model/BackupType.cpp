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

#include <aws/opsworkscm/model/BackupType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpsWorksCM
  {
    namespace Model
    {
      namespace BackupTypeMapper
      {

        static const int AUTOMATED_HASH = HashingUtils::HashString("AUTOMATED");
        static const int MANUAL_HASH = HashingUtils::HashString("MANUAL");


        BackupType GetBackupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATED_HASH)
          {
            return BackupType::AUTOMATED;
          }
          else if (hashCode == MANUAL_HASH)
          {
            return BackupType::MANUAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupType>(hashCode);
          }

          return BackupType::NOT_SET;
        }

        Aws::String GetNameForBackupType(BackupType enumValue)
        {
          switch(enumValue)
          {
          case BackupType::AUTOMATED:
            return "AUTOMATED";
          case BackupType::MANUAL:
            return "MANUAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace BackupTypeMapper
    } // namespace Model
  } // namespace OpsWorksCM
} // namespace Aws
