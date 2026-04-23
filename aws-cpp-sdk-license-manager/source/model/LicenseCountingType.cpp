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

#include <aws/license-manager/model/LicenseCountingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace LicenseCountingTypeMapper
      {

        static const int vCPU_HASH = HashingUtils::HashString("vCPU");
        static const int Instance_HASH = HashingUtils::HashString("Instance");
        static const int Core_HASH = HashingUtils::HashString("Core");
        static const int Socket_HASH = HashingUtils::HashString("Socket");


        LicenseCountingType GetLicenseCountingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == vCPU_HASH)
          {
            return LicenseCountingType::vCPU;
          }
          else if (hashCode == Instance_HASH)
          {
            return LicenseCountingType::Instance;
          }
          else if (hashCode == Core_HASH)
          {
            return LicenseCountingType::Core;
          }
          else if (hashCode == Socket_HASH)
          {
            return LicenseCountingType::Socket;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LicenseCountingType>(hashCode);
          }

          return LicenseCountingType::NOT_SET;
        }

        Aws::String GetNameForLicenseCountingType(LicenseCountingType enumValue)
        {
          switch(enumValue)
          {
          case LicenseCountingType::vCPU:
            return "vCPU";
          case LicenseCountingType::Instance:
            return "Instance";
          case LicenseCountingType::Core:
            return "Core";
          case LicenseCountingType::Socket:
            return "Socket";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LicenseCountingTypeMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
