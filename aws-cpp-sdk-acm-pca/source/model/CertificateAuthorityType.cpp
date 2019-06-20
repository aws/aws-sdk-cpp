/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/acm-pca/model/CertificateAuthorityType.h>
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
      namespace CertificateAuthorityTypeMapper
      {

        static const int ROOT_HASH = HashingUtils::HashString("ROOT");
        static const int SUBORDINATE_HASH = HashingUtils::HashString("SUBORDINATE");


        CertificateAuthorityType GetCertificateAuthorityTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ROOT_HASH)
          {
            return CertificateAuthorityType::ROOT;
          }
          else if (hashCode == SUBORDINATE_HASH)
          {
            return CertificateAuthorityType::SUBORDINATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateAuthorityType>(hashCode);
          }

          return CertificateAuthorityType::NOT_SET;
        }

        Aws::String GetNameForCertificateAuthorityType(CertificateAuthorityType enumValue)
        {
          switch(enumValue)
          {
          case CertificateAuthorityType::ROOT:
            return "ROOT";
          case CertificateAuthorityType::SUBORDINATE:
            return "SUBORDINATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateAuthorityTypeMapper
    } // namespace Model
  } // namespace ACMPCA
} // namespace Aws
