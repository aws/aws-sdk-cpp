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

#include <aws/eks/model/UpdateParamType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace UpdateParamTypeMapper
      {

        static const int Version_HASH = HashingUtils::HashString("Version");
        static const int PlatformVersion_HASH = HashingUtils::HashString("PlatformVersion");


        UpdateParamType GetUpdateParamTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Version_HASH)
          {
            return UpdateParamType::Version;
          }
          else if (hashCode == PlatformVersion_HASH)
          {
            return UpdateParamType::PlatformVersion;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<UpdateParamType>(hashCode);
          }

          return UpdateParamType::NOT_SET;
        }

        Aws::String GetNameForUpdateParamType(UpdateParamType enumValue)
        {
          switch(enumValue)
          {
          case UpdateParamType::Version:
            return "Version";
          case UpdateParamType::PlatformVersion:
            return "PlatformVersion";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace UpdateParamTypeMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
