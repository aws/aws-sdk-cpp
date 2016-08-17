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
#include <aws/redshift/model/TableRestoreStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace TableRestoreStatusTypeMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        TableRestoreStatusType GetTableRestoreStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return TableRestoreStatusType::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return TableRestoreStatusType::IN_PROGRESS;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return TableRestoreStatusType::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TableRestoreStatusType::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return TableRestoreStatusType::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TableRestoreStatusType>(hashCode);
          }

          return TableRestoreStatusType::NOT_SET;
        }

        Aws::String GetNameForTableRestoreStatusType(TableRestoreStatusType enumValue)
        {
          switch(enumValue)
          {
          case TableRestoreStatusType::PENDING:
            return "PENDING";
          case TableRestoreStatusType::IN_PROGRESS:
            return "IN_PROGRESS";
          case TableRestoreStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case TableRestoreStatusType::FAILED:
            return "FAILED";
          case TableRestoreStatusType::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TableRestoreStatusTypeMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
