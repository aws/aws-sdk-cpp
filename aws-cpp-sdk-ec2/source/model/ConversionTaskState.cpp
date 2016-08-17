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
#include <aws/ec2/model/ConversionTaskState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace ConversionTaskStateMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int cancelling_HASH = HashingUtils::HashString("cancelling");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int completed_HASH = HashingUtils::HashString("completed");


        ConversionTaskState GetConversionTaskStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return ConversionTaskState::active;
          }
          else if (hashCode == cancelling_HASH)
          {
            return ConversionTaskState::cancelling;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ConversionTaskState::cancelled;
          }
          else if (hashCode == completed_HASH)
          {
            return ConversionTaskState::completed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConversionTaskState>(hashCode);
          }

          return ConversionTaskState::NOT_SET;
        }

        Aws::String GetNameForConversionTaskState(ConversionTaskState enumValue)
        {
          switch(enumValue)
          {
          case ConversionTaskState::active:
            return "active";
          case ConversionTaskState::cancelling:
            return "cancelling";
          case ConversionTaskState::cancelled:
            return "cancelled";
          case ConversionTaskState::completed:
            return "completed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace ConversionTaskStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
