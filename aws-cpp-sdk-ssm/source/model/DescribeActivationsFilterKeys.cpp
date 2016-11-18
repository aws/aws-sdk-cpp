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
#include <aws/ssm/model/DescribeActivationsFilterKeys.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace DescribeActivationsFilterKeysMapper
      {

        static const int ActivationIds_HASH = HashingUtils::HashString("ActivationIds");
        static const int DefaultInstanceName_HASH = HashingUtils::HashString("DefaultInstanceName");
        static const int IamRole_HASH = HashingUtils::HashString("IamRole");


        DescribeActivationsFilterKeys GetDescribeActivationsFilterKeysForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ActivationIds_HASH)
          {
            return DescribeActivationsFilterKeys::ActivationIds;
          }
          else if (hashCode == DefaultInstanceName_HASH)
          {
            return DescribeActivationsFilterKeys::DefaultInstanceName;
          }
          else if (hashCode == IamRole_HASH)
          {
            return DescribeActivationsFilterKeys::IamRole;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DescribeActivationsFilterKeys>(hashCode);
          }

          return DescribeActivationsFilterKeys::NOT_SET;
        }

        Aws::String GetNameForDescribeActivationsFilterKeys(DescribeActivationsFilterKeys enumValue)
        {
          switch(enumValue)
          {
          case DescribeActivationsFilterKeys::ActivationIds:
            return "ActivationIds";
          case DescribeActivationsFilterKeys::DefaultInstanceName:
            return "DefaultInstanceName";
          case DescribeActivationsFilterKeys::IamRole:
            return "IamRole";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace DescribeActivationsFilterKeysMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
