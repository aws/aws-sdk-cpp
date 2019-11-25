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

#include <aws/ec2/model/UnlimitedSupportedInstanceFamily.h>
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
      namespace UnlimitedSupportedInstanceFamilyMapper
      {

        static const int t2_HASH = HashingUtils::HashString("t2");
        static const int t3_HASH = HashingUtils::HashString("t3");
        static const int t3a_HASH = HashingUtils::HashString("t3a");


        UnlimitedSupportedInstanceFamily GetUnlimitedSupportedInstanceFamilyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == t2_HASH)
          {
            return UnlimitedSupportedInstanceFamily::t2;
          }
          else if (hashCode == t3_HASH)
          {
            return UnlimitedSupportedInstanceFamily::t3;
          }
          else if (hashCode == t3a_HASH)
          {
            return UnlimitedSupportedInstanceFamily::t3a;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UnlimitedSupportedInstanceFamily>(hashCode);
          }

          return UnlimitedSupportedInstanceFamily::NOT_SET;
        }

        Aws::String GetNameForUnlimitedSupportedInstanceFamily(UnlimitedSupportedInstanceFamily enumValue)
        {
          switch(enumValue)
          {
          case UnlimitedSupportedInstanceFamily::t2:
            return "t2";
          case UnlimitedSupportedInstanceFamily::t3:
            return "t3";
          case UnlimitedSupportedInstanceFamily::t3a:
            return "t3a";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UnlimitedSupportedInstanceFamilyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
