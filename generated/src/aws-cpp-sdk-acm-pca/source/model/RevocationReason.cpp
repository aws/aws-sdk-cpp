/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/RevocationReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACMPCA
  {
    namespace Model
    {
      namespace RevocationReasonMapper
      {

        static constexpr uint32_t UNSPECIFIED_HASH = ConstExprHashingUtils::HashString("UNSPECIFIED");
        static constexpr uint32_t KEY_COMPROMISE_HASH = ConstExprHashingUtils::HashString("KEY_COMPROMISE");
        static constexpr uint32_t CERTIFICATE_AUTHORITY_COMPROMISE_HASH = ConstExprHashingUtils::HashString("CERTIFICATE_AUTHORITY_COMPROMISE");
        static constexpr uint32_t AFFILIATION_CHANGED_HASH = ConstExprHashingUtils::HashString("AFFILIATION_CHANGED");
        static constexpr uint32_t SUPERSEDED_HASH = ConstExprHashingUtils::HashString("SUPERSEDED");
        static constexpr uint32_t CESSATION_OF_OPERATION_HASH = ConstExprHashingUtils::HashString("CESSATION_OF_OPERATION");
        static constexpr uint32_t PRIVILEGE_WITHDRAWN_HASH = ConstExprHashingUtils::HashString("PRIVILEGE_WITHDRAWN");
        static constexpr uint32_t A_A_COMPROMISE_HASH = ConstExprHashingUtils::HashString("A_A_COMPROMISE");


        RevocationReason GetRevocationReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNSPECIFIED_HASH)
          {
            return RevocationReason::UNSPECIFIED;
          }
          else if (hashCode == KEY_COMPROMISE_HASH)
          {
            return RevocationReason::KEY_COMPROMISE;
          }
          else if (hashCode == CERTIFICATE_AUTHORITY_COMPROMISE_HASH)
          {
            return RevocationReason::CERTIFICATE_AUTHORITY_COMPROMISE;
          }
          else if (hashCode == AFFILIATION_CHANGED_HASH)
          {
            return RevocationReason::AFFILIATION_CHANGED;
          }
          else if (hashCode == SUPERSEDED_HASH)
          {
            return RevocationReason::SUPERSEDED;
          }
          else if (hashCode == CESSATION_OF_OPERATION_HASH)
          {
            return RevocationReason::CESSATION_OF_OPERATION;
          }
          else if (hashCode == PRIVILEGE_WITHDRAWN_HASH)
          {
            return RevocationReason::PRIVILEGE_WITHDRAWN;
          }
          else if (hashCode == A_A_COMPROMISE_HASH)
          {
            return RevocationReason::A_A_COMPROMISE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RevocationReason>(hashCode);
          }

          return RevocationReason::NOT_SET;
        }

        Aws::String GetNameForRevocationReason(RevocationReason enumValue)
        {
          switch(enumValue)
          {
          case RevocationReason::NOT_SET:
            return {};
          case RevocationReason::UNSPECIFIED:
            return "UNSPECIFIED";
          case RevocationReason::KEY_COMPROMISE:
            return "KEY_COMPROMISE";
          case RevocationReason::CERTIFICATE_AUTHORITY_COMPROMISE:
            return "CERTIFICATE_AUTHORITY_COMPROMISE";
          case RevocationReason::AFFILIATION_CHANGED:
            return "AFFILIATION_CHANGED";
          case RevocationReason::SUPERSEDED:
            return "SUPERSEDED";
          case RevocationReason::CESSATION_OF_OPERATION:
            return "CESSATION_OF_OPERATION";
          case RevocationReason::PRIVILEGE_WITHDRAWN:
            return "PRIVILEGE_WITHDRAWN";
          case RevocationReason::A_A_COMPROMISE:
            return "A_A_COMPROMISE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RevocationReasonMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
