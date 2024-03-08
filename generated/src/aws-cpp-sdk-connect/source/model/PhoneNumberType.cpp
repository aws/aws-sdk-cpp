/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/PhoneNumberType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace PhoneNumberTypeMapper
      {

        static const int TOLL_FREE_HASH = HashingUtils::HashString("TOLL_FREE");
        static const int DID_HASH = HashingUtils::HashString("DID");
        static const int UIFN_HASH = HashingUtils::HashString("UIFN");
        static const int SHARED_HASH = HashingUtils::HashString("SHARED");
        static const int THIRD_PARTY_TF_HASH = HashingUtils::HashString("THIRD_PARTY_TF");
        static const int THIRD_PARTY_DID_HASH = HashingUtils::HashString("THIRD_PARTY_DID");
        static const int SHORT_CODE_HASH = HashingUtils::HashString("SHORT_CODE");


        PhoneNumberType GetPhoneNumberTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TOLL_FREE_HASH)
          {
            return PhoneNumberType::TOLL_FREE;
          }
          else if (hashCode == DID_HASH)
          {
            return PhoneNumberType::DID;
          }
          else if (hashCode == UIFN_HASH)
          {
            return PhoneNumberType::UIFN;
          }
          else if (hashCode == SHARED_HASH)
          {
            return PhoneNumberType::SHARED;
          }
          else if (hashCode == THIRD_PARTY_TF_HASH)
          {
            return PhoneNumberType::THIRD_PARTY_TF;
          }
          else if (hashCode == THIRD_PARTY_DID_HASH)
          {
            return PhoneNumberType::THIRD_PARTY_DID;
          }
          else if (hashCode == SHORT_CODE_HASH)
          {
            return PhoneNumberType::SHORT_CODE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PhoneNumberType>(hashCode);
          }

          return PhoneNumberType::NOT_SET;
        }

        Aws::String GetNameForPhoneNumberType(PhoneNumberType enumValue)
        {
          switch(enumValue)
          {
          case PhoneNumberType::NOT_SET:
            return {};
          case PhoneNumberType::TOLL_FREE:
            return "TOLL_FREE";
          case PhoneNumberType::DID:
            return "DID";
          case PhoneNumberType::UIFN:
            return "UIFN";
          case PhoneNumberType::SHARED:
            return "SHARED";
          case PhoneNumberType::THIRD_PARTY_TF:
            return "THIRD_PARTY_TF";
          case PhoneNumberType::THIRD_PARTY_DID:
            return "THIRD_PARTY_DID";
          case PhoneNumberType::SHORT_CODE:
            return "SHORT_CODE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PhoneNumberTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
