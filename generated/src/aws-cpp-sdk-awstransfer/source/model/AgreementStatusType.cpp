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

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        AgreementStatusType GetAgreementStatusTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
