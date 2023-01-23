/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CACertificateStatus.h>
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
      namespace CACertificateStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");


        CACertificateStatus GetCACertificateStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return CACertificateStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return CACertificateStatus::INACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CACertificateStatus>(hashCode);
          }

          return CACertificateStatus::NOT_SET;
        }

        Aws::String GetNameForCACertificateStatus(CACertificateStatus enumValue)
        {
          switch(enumValue)
          {
          case CACertificateStatus::ACTIVE:
            return "ACTIVE";
          case CACertificateStatus::INACTIVE:
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

      } // namespace CACertificateStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
