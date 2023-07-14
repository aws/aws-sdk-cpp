/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/SmoothGroupCertificateMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace SmoothGroupCertificateModeMapper
      {

        static const int SELF_SIGNED_HASH = HashingUtils::HashString("SELF_SIGNED");
        static const int VERIFY_AUTHENTICITY_HASH = HashingUtils::HashString("VERIFY_AUTHENTICITY");


        SmoothGroupCertificateMode GetSmoothGroupCertificateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SELF_SIGNED_HASH)
          {
            return SmoothGroupCertificateMode::SELF_SIGNED;
          }
          else if (hashCode == VERIFY_AUTHENTICITY_HASH)
          {
            return SmoothGroupCertificateMode::VERIFY_AUTHENTICITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SmoothGroupCertificateMode>(hashCode);
          }

          return SmoothGroupCertificateMode::NOT_SET;
        }

        Aws::String GetNameForSmoothGroupCertificateMode(SmoothGroupCertificateMode enumValue)
        {
          switch(enumValue)
          {
          case SmoothGroupCertificateMode::SELF_SIGNED:
            return "SELF_SIGNED";
          case SmoothGroupCertificateMode::VERIFY_AUTHENTICITY:
            return "VERIFY_AUTHENTICITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SmoothGroupCertificateModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
