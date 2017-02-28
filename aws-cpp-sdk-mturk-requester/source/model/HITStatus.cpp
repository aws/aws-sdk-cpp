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
#include <aws/mturk-requester/model/HITStatus.h>
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
      namespace HITStatusMapper
      {

        static const int Assignable_HASH = HashingUtils::HashString("Assignable");
        static const int Unassignable_HASH = HashingUtils::HashString("Unassignable");
        static const int Reviewable_HASH = HashingUtils::HashString("Reviewable");
        static const int Reviewing_HASH = HashingUtils::HashString("Reviewing");
        static const int Disposed_HASH = HashingUtils::HashString("Disposed");


        HITStatus GetHITStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Assignable_HASH)
          {
            return HITStatus::Assignable;
          }
          else if (hashCode == Unassignable_HASH)
          {
            return HITStatus::Unassignable;
          }
          else if (hashCode == Reviewable_HASH)
          {
            return HITStatus::Reviewable;
          }
          else if (hashCode == Reviewing_HASH)
          {
            return HITStatus::Reviewing;
          }
          else if (hashCode == Disposed_HASH)
          {
            return HITStatus::Disposed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HITStatus>(hashCode);
          }

          return HITStatus::NOT_SET;
        }

        Aws::String GetNameForHITStatus(HITStatus enumValue)
        {
          switch(enumValue)
          {
          case HITStatus::Assignable:
            return "Assignable";
          case HITStatus::Unassignable:
            return "Unassignable";
          case HITStatus::Reviewable:
            return "Reviewable";
          case HITStatus::Reviewing:
            return "Reviewing";
          case HITStatus::Disposed:
            return "Disposed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace HITStatusMapper
    } // namespace Model
  } // namespace MTurk
} // namespace Aws
