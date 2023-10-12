/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CACertificateUpdateAction.h>
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
      namespace CACertificateUpdateActionMapper
      {

        static constexpr uint32_t DEACTIVATE_HASH = ConstExprHashingUtils::HashString("DEACTIVATE");


        CACertificateUpdateAction GetCACertificateUpdateActionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEACTIVATE_HASH)
          {
            return CACertificateUpdateAction::DEACTIVATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CACertificateUpdateAction>(hashCode);
          }

          return CACertificateUpdateAction::NOT_SET;
        }

        Aws::String GetNameForCACertificateUpdateAction(CACertificateUpdateAction enumValue)
        {
          switch(enumValue)
          {
          case CACertificateUpdateAction::NOT_SET:
            return {};
          case CACertificateUpdateAction::DEACTIVATE:
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

      } // namespace CACertificateUpdateActionMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
