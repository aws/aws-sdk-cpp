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

        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");
        static const int KEY_COMPROMISE_HASH = HashingUtils::HashString("KEY_COMPROMISE");
        static const int CERTIFICATE_AUTHORITY_COMPROMISE_HASH = HashingUtils::HashString("CERTIFICATE_AUTHORITY_COMPROMISE");
        static const int AFFILIATION_CHANGED_HASH = HashingUtils::HashString("AFFILIATION_CHANGED");
        static const int SUPERSEDED_HASH = HashingUtils::HashString("SUPERSEDED");
        static const int CESSATION_OF_OPERATION_HASH = HashingUtils::HashString("CESSATION_OF_OPERATION");
        static const int PRIVILEGE_WITHDRAWN_HASH = HashingUtils::HashString("PRIVILEGE_WITHDRAWN");
        static const int A_A_COMPROMISE_HASH = HashingUtils::HashString("A_A_COMPROMISE");


        RevocationReason GetRevocationReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
