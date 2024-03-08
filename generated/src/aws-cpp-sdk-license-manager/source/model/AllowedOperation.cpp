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

        static const int CreateGrant_HASH = HashingUtils::HashString("CreateGrant");
        static const int CheckoutLicense_HASH = HashingUtils::HashString("CheckoutLicense");
        static const int CheckoutBorrowLicense_HASH = HashingUtils::HashString("CheckoutBorrowLicense");
        static const int CheckInLicense_HASH = HashingUtils::HashString("CheckInLicense");
        static const int ExtendConsumptionLicense_HASH = HashingUtils::HashString("ExtendConsumptionLicense");
        static const int ListPurchasedLicenses_HASH = HashingUtils::HashString("ListPurchasedLicenses");
        static const int CreateToken_HASH = HashingUtils::HashString("CreateToken");


        AllowedOperation GetAllowedOperationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
