/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/RegistrationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace RegistrationStatusMapper
      {

        static constexpr uint32_t Registered_HASH = ConstExprHashingUtils::HashString("Registered");
        static constexpr uint32_t Deregistered_HASH = ConstExprHashingUtils::HashString("Deregistered");


        RegistrationStatus GetRegistrationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Registered_HASH)
          {
            return RegistrationStatus::Registered;
          }
          else if (hashCode == Deregistered_HASH)
          {
            return RegistrationStatus::Deregistered;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RegistrationStatus>(hashCode);
          }

          return RegistrationStatus::NOT_SET;
        }

        Aws::String GetNameForRegistrationStatus(RegistrationStatus enumValue)
        {
          switch(enumValue)
          {
          case RegistrationStatus::NOT_SET:
            return {};
          case RegistrationStatus::Registered:
            return "Registered";
          case RegistrationStatus::Deregistered:
            return "Deregistered";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RegistrationStatusMapper
    } // namespace Model
  } // namespace CodeDeploy
} // namespace Aws
