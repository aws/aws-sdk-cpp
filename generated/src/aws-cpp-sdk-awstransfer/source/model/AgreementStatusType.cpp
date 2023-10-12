/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/AgreementStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace AgreementStatusTypeMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");


        AgreementStatusType GetAgreementStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return AgreementStatusType::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return AgreementStatusType::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AgreementStatusType>(hashCode);
          }

          return AgreementStatusType::NOT_SET;
        }

        Aws::String GetNameForAgreementStatusType(AgreementStatusType enumValue)
        {
          switch(enumValue)
          {
          case AgreementStatusType::NOT_SET:
            return {};
          case AgreementStatusType::ACTIVE:
            return "ACTIVE";
          case AgreementStatusType::INACTIVE:
            return "INACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AgreementStatusTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
