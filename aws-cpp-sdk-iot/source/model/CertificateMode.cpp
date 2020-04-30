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

#include <aws/iot/model/CertificateMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace CertificateModeMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int SNI_ONLY_HASH = HashingUtils::HashString("SNI_ONLY");


        CertificateMode GetCertificateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return CertificateMode::DEFAULT;
          }
          else if (hashCode == SNI_ONLY_HASH)
          {
            return CertificateMode::SNI_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateMode>(hashCode);
          }

          return CertificateMode::NOT_SET;
        }

        Aws::String GetNameForCertificateMode(CertificateMode enumValue)
        {
          switch(enumValue)
          {
          case CertificateMode::DEFAULT:
            return "DEFAULT";
          case CertificateMode::SNI_ONLY:
            return "SNI_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateModeMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
