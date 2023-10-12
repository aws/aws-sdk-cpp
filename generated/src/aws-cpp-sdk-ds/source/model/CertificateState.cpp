/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CertificateState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DirectoryService
  {
    namespace Model
    {
      namespace CertificateStateMapper
      {

        static constexpr uint32_t Registering_HASH = ConstExprHashingUtils::HashString("Registering");
        static constexpr uint32_t Registered_HASH = ConstExprHashingUtils::HashString("Registered");
        static constexpr uint32_t RegisterFailed_HASH = ConstExprHashingUtils::HashString("RegisterFailed");
        static constexpr uint32_t Deregistering_HASH = ConstExprHashingUtils::HashString("Deregistering");
        static constexpr uint32_t Deregistered_HASH = ConstExprHashingUtils::HashString("Deregistered");
        static constexpr uint32_t DeregisterFailed_HASH = ConstExprHashingUtils::HashString("DeregisterFailed");


        CertificateState GetCertificateStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Registering_HASH)
          {
            return CertificateState::Registering;
          }
          else if (hashCode == Registered_HASH)
          {
            return CertificateState::Registered;
          }
          else if (hashCode == RegisterFailed_HASH)
          {
            return CertificateState::RegisterFailed;
          }
          else if (hashCode == Deregistering_HASH)
          {
            return CertificateState::Deregistering;
          }
          else if (hashCode == Deregistered_HASH)
          {
            return CertificateState::Deregistered;
          }
          else if (hashCode == DeregisterFailed_HASH)
          {
            return CertificateState::DeregisterFailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CertificateState>(hashCode);
          }

          return CertificateState::NOT_SET;
        }

        Aws::String GetNameForCertificateState(CertificateState enumValue)
        {
          switch(enumValue)
          {
          case CertificateState::NOT_SET:
            return {};
          case CertificateState::Registering:
            return "Registering";
          case CertificateState::Registered:
            return "Registered";
          case CertificateState::RegisterFailed:
            return "RegisterFailed";
          case CertificateState::Deregistering:
            return "Deregistering";
          case CertificateState::Deregistered:
            return "Deregistered";
          case CertificateState::DeregisterFailed:
            return "DeregisterFailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CertificateStateMapper
    } // namespace Model
  } // namespace DirectoryService
} // namespace Aws
