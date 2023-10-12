/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/NniPartnerType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectConnect
  {
    namespace Model
    {
      namespace NniPartnerTypeMapper
      {

        static constexpr uint32_t v1_HASH = ConstExprHashingUtils::HashString("v1");
        static constexpr uint32_t v2_HASH = ConstExprHashingUtils::HashString("v2");
        static constexpr uint32_t nonPartner_HASH = ConstExprHashingUtils::HashString("nonPartner");


        NniPartnerType GetNniPartnerTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == v1_HASH)
          {
            return NniPartnerType::v1;
          }
          else if (hashCode == v2_HASH)
          {
            return NniPartnerType::v2;
          }
          else if (hashCode == nonPartner_HASH)
          {
            return NniPartnerType::nonPartner;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NniPartnerType>(hashCode);
          }

          return NniPartnerType::NOT_SET;
        }

        Aws::String GetNameForNniPartnerType(NniPartnerType enumValue)
        {
          switch(enumValue)
          {
          case NniPartnerType::NOT_SET:
            return {};
          case NniPartnerType::v1:
            return "v1";
          case NniPartnerType::v2:
            return "v2";
          case NniPartnerType::nonPartner:
            return "nonPartner";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NniPartnerTypeMapper
    } // namespace Model
  } // namespace DirectConnect
} // namespace Aws
