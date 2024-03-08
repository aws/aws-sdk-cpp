/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/PolicyQualifierId.h>
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
      namespace PolicyQualifierIdMapper
      {

        static const int CPS_HASH = HashingUtils::HashString("CPS");


        PolicyQualifierId GetPolicyQualifierIdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CPS_HASH)
          {
            return PolicyQualifierId::CPS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PolicyQualifierId>(hashCode);
          }

          return PolicyQualifierId::NOT_SET;
        }

        Aws::String GetNameForPolicyQualifierId(PolicyQualifierId enumValue)
        {
          switch(enumValue)
          {
          case PolicyQualifierId::NOT_SET:
            return {};
          case PolicyQualifierId::CPS:
            return "CPS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PolicyQualifierIdMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
