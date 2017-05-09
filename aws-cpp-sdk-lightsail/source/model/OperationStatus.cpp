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

#include <aws/lightsail/model/OperationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Lightsail
  {
    namespace Model
    {
      namespace OperationStatusMapper
      {

        static const int NotStarted_HASH = HashingUtils::HashString("NotStarted");
        static const int Started_HASH = HashingUtils::HashString("Started");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Completed_HASH = HashingUtils::HashString("Completed");


        OperationStatus GetOperationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NotStarted_HASH)
          {
            return OperationStatus::NotStarted;
          }
          else if (hashCode == Started_HASH)
          {
            return OperationStatus::Started;
          }
          else if (hashCode == Failed_HASH)
          {
            return OperationStatus::Failed;
          }
          else if (hashCode == Completed_HASH)
          {
            return OperationStatus::Completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OperationStatus>(hashCode);
          }

          return OperationStatus::NOT_SET;
        }

        Aws::String GetNameForOperationStatus(OperationStatus enumValue)
        {
          switch(enumValue)
          {
          case OperationStatus::NotStarted:
            return "NotStarted";
          case OperationStatus::Started:
            return "Started";
          case OperationStatus::Failed:
            return "Failed";
          case OperationStatus::Completed:
            return "Completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace OperationStatusMapper
    } // namespace Model
  } // namespace Lightsail
} // namespace Aws
