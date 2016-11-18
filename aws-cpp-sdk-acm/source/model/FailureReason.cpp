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
#include <aws/acm/model/FailureReason.h>
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
      namespace FailureReasonMapper
      {

        static const int NO_AVAILABLE_CONTACTS_HASH = HashingUtils::HashString("NO_AVAILABLE_CONTACTS");
        static const int ADDITIONAL_VERIFICATION_REQUIRED_HASH = HashingUtils::HashString("ADDITIONAL_VERIFICATION_REQUIRED");
        static const int DOMAIN_NOT_ALLOWED_HASH = HashingUtils::HashString("DOMAIN_NOT_ALLOWED");
        static const int INVALID_PUBLIC_DOMAIN_HASH = HashingUtils::HashString("INVALID_PUBLIC_DOMAIN");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        FailureReason GetFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_AVAILABLE_CONTACTS_HASH)
          {
            return FailureReason::NO_AVAILABLE_CONTACTS;
          }
          else if (hashCode == ADDITIONAL_VERIFICATION_REQUIRED_HASH)
          {
            return FailureReason::ADDITIONAL_VERIFICATION_REQUIRED;
          }
          else if (hashCode == DOMAIN_NOT_ALLOWED_HASH)
          {
            return FailureReason::DOMAIN_NOT_ALLOWED;
          }
          else if (hashCode == INVALID_PUBLIC_DOMAIN_HASH)
          {
            return FailureReason::INVALID_PUBLIC_DOMAIN;
          }
          else if (hashCode == OTHER_HASH)
          {
            return FailureReason::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FailureReason>(hashCode);
          }

          return FailureReason::NOT_SET;
        }

        Aws::String GetNameForFailureReason(FailureReason enumValue)
        {
          switch(enumValue)
          {
          case FailureReason::NO_AVAILABLE_CONTACTS:
            return "NO_AVAILABLE_CONTACTS";
          case FailureReason::ADDITIONAL_VERIFICATION_REQUIRED:
            return "ADDITIONAL_VERIFICATION_REQUIRED";
          case FailureReason::DOMAIN_NOT_ALLOWED:
            return "DOMAIN_NOT_ALLOWED";
          case FailureReason::INVALID_PUBLIC_DOMAIN:
            return "INVALID_PUBLIC_DOMAIN";
          case FailureReason::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FailureReasonMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
