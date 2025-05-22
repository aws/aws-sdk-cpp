/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MacModificationTaskType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace MacModificationTaskTypeMapper
      {

        static const int sip_modification_HASH = HashingUtils::HashString("sip-modification");
        static const int volume_ownership_delegation_HASH = HashingUtils::HashString("volume-ownership-delegation");


        MacModificationTaskType GetMacModificationTaskTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == sip_modification_HASH)
          {
            return MacModificationTaskType::sip_modification;
          }
          else if (hashCode == volume_ownership_delegation_HASH)
          {
            return MacModificationTaskType::volume_ownership_delegation;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MacModificationTaskType>(hashCode);
          }

          return MacModificationTaskType::NOT_SET;
        }

        Aws::String GetNameForMacModificationTaskType(MacModificationTaskType enumValue)
        {
          switch(enumValue)
          {
          case MacModificationTaskType::NOT_SET:
            return {};
          case MacModificationTaskType::sip_modification:
            return "sip-modification";
          case MacModificationTaskType::volume_ownership_delegation:
            return "volume-ownership-delegation";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MacModificationTaskTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
