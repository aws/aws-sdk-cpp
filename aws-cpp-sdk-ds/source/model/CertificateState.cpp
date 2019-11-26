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

        static const int Registering_HASH = HashingUtils::HashString("Registering");
        static const int Registered_HASH = HashingUtils::HashString("Registered");
        static const int RegisterFailed_HASH = HashingUtils::HashString("RegisterFailed");
        static const int Deregistering_HASH = HashingUtils::HashString("Deregistering");
        static const int Deregistered_HASH = HashingUtils::HashString("Deregistered");
        static const int DeregisterFailed_HASH = HashingUtils::HashString("DeregisterFailed");


        CertificateState GetCertificateStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
