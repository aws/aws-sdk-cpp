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

#include <aws/ec2/model/FpgaImageStateCode.h>
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
      namespace FpgaImageStateCodeMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int unavailable_HASH = HashingUtils::HashString("unavailable");


        FpgaImageStateCode GetFpgaImageStateCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return FpgaImageStateCode::pending;
          }
          else if (hashCode == failed_HASH)
          {
            return FpgaImageStateCode::failed;
          }
          else if (hashCode == available_HASH)
          {
            return FpgaImageStateCode::available;
          }
          else if (hashCode == unavailable_HASH)
          {
            return FpgaImageStateCode::unavailable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FpgaImageStateCode>(hashCode);
          }

          return FpgaImageStateCode::NOT_SET;
        }

        Aws::String GetNameForFpgaImageStateCode(FpgaImageStateCode enumValue)
        {
          switch(enumValue)
          {
          case FpgaImageStateCode::pending:
            return "pending";
          case FpgaImageStateCode::failed:
            return "failed";
          case FpgaImageStateCode::available:
            return "available";
          case FpgaImageStateCode::unavailable:
            return "unavailable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FpgaImageStateCodeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
