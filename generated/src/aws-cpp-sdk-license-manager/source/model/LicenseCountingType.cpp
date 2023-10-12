/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t vCPU_HASH = ConstExprHashingUtils::HashString("vCPU");
        static constexpr uint32_t Instance_HASH = ConstExprHashingUtils::HashString("Instance");
        static constexpr uint32_t Core_HASH = ConstExprHashingUtils::HashString("Core");
        static constexpr uint32_t Socket_HASH = ConstExprHashingUtils::HashString("Socket");


        LicenseCountingType GetLicenseCountingTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case LicenseCountingType::NOT_SET:
            return {};
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
