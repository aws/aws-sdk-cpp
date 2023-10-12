/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CertificateType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace CertificateTypeMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t GENERATED_HASH = ConstExprHashingUtils::HashString("GENERATED");


        CertificateType GetCertificateTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return CertificateType::DISABLED;
          }
          else if (hashCode == GENERATED_HASH)
          {
            return CertificateType::GENERATED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateType>(hashCode);
          }

          return CertificateType::NOT_SET;
        }

        Aws::String GetNameForCertificateType(CertificateType enumValue)
        {
          switch(enumValue)
          {
          case CertificateType::NOT_SET:
            return {};
          case CertificateType::DISABLED:
            return "DISABLED";
          case CertificateType::GENERATED:
            return "GENERATED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateTypeMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
