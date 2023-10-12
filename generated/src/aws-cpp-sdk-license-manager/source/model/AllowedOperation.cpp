/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/AllowedOperation.h>
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
      namespace AllowedOperationMapper
      {

        static constexpr uint32_t CreateGrant_HASH = ConstExprHashingUtils::HashString("CreateGrant");
        static constexpr uint32_t CheckoutLicense_HASH = ConstExprHashingUtils::HashString("CheckoutLicense");
        static constexpr uint32_t CheckoutBorrowLicense_HASH = ConstExprHashingUtils::HashString("CheckoutBorrowLicense");
        static constexpr uint32_t CheckInLicense_HASH = ConstExprHashingUtils::HashString("CheckInLicense");
        static constexpr uint32_t ExtendConsumptionLicense_HASH = ConstExprHashingUtils::HashString("ExtendConsumptionLicense");
        static constexpr uint32_t ListPurchasedLicenses_HASH = ConstExprHashingUtils::HashString("ListPurchasedLicenses");
        static constexpr uint32_t CreateToken_HASH = ConstExprHashingUtils::HashString("CreateToken");


        AllowedOperation GetAllowedOperationForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CreateGrant_HASH)
          {
            return AllowedOperation::CreateGrant;
          }
          else if (hashCode == CheckoutLicense_HASH)
          {
            return AllowedOperation::CheckoutLicense;
          }
          else if (hashCode == CheckoutBorrowLicense_HASH)
          {
            return AllowedOperation::CheckoutBorrowLicense;
          }
          else if (hashCode == CheckInLicense_HASH)
          {
            return AllowedOperation::CheckInLicense;
          }
          else if (hashCode == ExtendConsumptionLicense_HASH)
          {
            return AllowedOperation::ExtendConsumptionLicense;
          }
          else if (hashCode == ListPurchasedLicenses_HASH)
          {
            return AllowedOperation::ListPurchasedLicenses;
          }
          else if (hashCode == CreateToken_HASH)
          {
            return AllowedOperation::CreateToken;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowedOperation>(hashCode);
          }

          return AllowedOperation::NOT_SET;
        }

        Aws::String GetNameForAllowedOperation(AllowedOperation enumValue)
        {
          switch(enumValue)
          {
          case AllowedOperation::NOT_SET:
            return {};
          case AllowedOperation::CreateGrant:
            return "CreateGrant";
          case AllowedOperation::CheckoutLicense:
            return "CheckoutLicense";
          case AllowedOperation::CheckoutBorrowLicense:
            return "CheckoutBorrowLicense";
          case AllowedOperation::CheckInLicense:
            return "CheckInLicense";
          case AllowedOperation::ExtendConsumptionLicense:
            return "ExtendConsumptionLicense";
          case AllowedOperation::ListPurchasedLicenses:
            return "ListPurchasedLicenses";
          case AllowedOperation::CreateToken:
            return "CreateToken";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowedOperationMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
