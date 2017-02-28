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
#include <aws/mturk-requester/model/NotifyWorkersFailureCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MTurk
  {
    namespace Model
    {
      namespace NotifyWorkersFailureCodeMapper
      {

        static const int SoftFailure_HASH = HashingUtils::HashString("SoftFailure");
        static const int HardFailure_HASH = HashingUtils::HashString("HardFailure");


        NotifyWorkersFailureCode GetNotifyWorkersFailureCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SoftFailure_HASH)
          {
            return NotifyWorkersFailureCode::SoftFailure;
          }
          else if (hashCode == HardFailure_HASH)
          {
            return NotifyWorkersFailureCode::HardFailure;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotifyWorkersFailureCode>(hashCode);
          }

          return NotifyWorkersFailureCode::NOT_SET;
        }

        Aws::String GetNameForNotifyWorkersFailureCode(NotifyWorkersFailureCode enumValue)
        {
          switch(enumValue)
          {
          case NotifyWorkersFailureCode::SoftFailure:
            return "SoftFailure";
          case NotifyWorkersFailureCode::HardFailure:
            return "HardFailure";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace NotifyWorkersFailureCodeMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
