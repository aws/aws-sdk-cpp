/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/acm/model/RevocationReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace RevocationReasonMapper
      {

        static const int UNSPECIFIED_HASH = HashingUtils::HashString("UNSPECIFIED");
        static const int KEY_COMPROMISE_HASH = HashingUtils::HashString("KEY_COMPROMISE");
        static const int CA_COMPROMISE_HASH = HashingUtils::HashString("CA_COMPROMISE");
        static const int AFFILIATION_CHANGED_HASH = HashingUtils::HashString("AFFILIATION_CHANGED");
        static const int SUPERCEDED_HASH = HashingUtils::HashString("SUPERCEDED");
        static const int CESSATION_OF_OPERATION_HASH = HashingUtils::HashString("CESSATION_OF_OPERATION");
        static const int CERTIFICATE_HOLD_HASH = HashingUtils::HashString("CERTIFICATE_HOLD");
        static const int REMOVE_FROM_CRL_HASH = HashingUtils::HashString("REMOVE_FROM_CRL");
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
          else if (hashCode == CA_COMPROMISE_HASH)
          {
            return RevocationReason::CA_COMPROMISE;
          }
          else if (hashCode == AFFILIATION_CHANGED_HASH)
          {
            return RevocationReason::AFFILIATION_CHANGED;
          }
          else if (hashCode == SUPERCEDED_HASH)
          {
            return RevocationReason::SUPERCEDED;
          }
          else if (hashCode == CESSATION_OF_OPERATION_HASH)
          {
            return RevocationReason::CESSATION_OF_OPERATION;
          }
          else if (hashCode == CERTIFICATE_HOLD_HASH)
          {
            return RevocationReason::CERTIFICATE_HOLD;
          }
          else if (hashCode == REMOVE_FROM_CRL_HASH)
          {
            return RevocationReason::REMOVE_FROM_CRL;
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
          case RevocationReason::CA_COMPROMISE:
            return "CA_COMPROMISE";
          case RevocationReason::AFFILIATION_CHANGED:
            return "AFFILIATION_CHANGED";
          case RevocationReason::SUPERCEDED:
            return "SUPERCEDED";
          case RevocationReason::CESSATION_OF_OPERATION:
            return "CESSATION_OF_OPERATION";
          case RevocationReason::CERTIFICATE_HOLD:
            return "CERTIFICATE_HOLD";
          case RevocationReason::REMOVE_FROM_CRL:
            return "REMOVE_FROM_CRL";
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

            return "";
          }
        }

      } // namespace RevocationReasonMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
