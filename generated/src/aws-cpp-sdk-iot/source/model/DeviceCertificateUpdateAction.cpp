/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeviceCertificateUpdateAction.h>
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
      namespace DeviceCertificateUpdateActionMapper
      {

        static const int DEACTIVATE_HASH = HashingUtils::HashString("DEACTIVATE");


        DeviceCertificateUpdateAction GetDeviceCertificateUpdateActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEACTIVATE_HASH)
          {
            return DeviceCertificateUpdateAction::DEACTIVATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeviceCertificateUpdateAction>(hashCode);
          }

          return DeviceCertificateUpdateAction::NOT_SET;
        }

        Aws::String GetNameForDeviceCertificateUpdateAction(DeviceCertificateUpdateAction enumValue)
        {
          switch(enumValue)
          {
          case DeviceCertificateUpdateAction::DEACTIVATE:
            return "DEACTIVATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeviceCertificateUpdateActionMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
