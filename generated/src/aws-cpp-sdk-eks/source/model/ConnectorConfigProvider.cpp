/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/ConnectorConfigProvider.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EKS
  {
    namespace Model
    {
      namespace ConnectorConfigProviderMapper
      {

        static constexpr uint32_t EKS_ANYWHERE_HASH = ConstExprHashingUtils::HashString("EKS_ANYWHERE");
        static constexpr uint32_t ANTHOS_HASH = ConstExprHashingUtils::HashString("ANTHOS");
        static constexpr uint32_t GKE_HASH = ConstExprHashingUtils::HashString("GKE");
        static constexpr uint32_t AKS_HASH = ConstExprHashingUtils::HashString("AKS");
        static constexpr uint32_t OPENSHIFT_HASH = ConstExprHashingUtils::HashString("OPENSHIFT");
        static constexpr uint32_t TANZU_HASH = ConstExprHashingUtils::HashString("TANZU");
        static constexpr uint32_t RANCHER_HASH = ConstExprHashingUtils::HashString("RANCHER");
        static constexpr uint32_t EC2_HASH = ConstExprHashingUtils::HashString("EC2");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        ConnectorConfigProvider GetConnectorConfigProviderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EKS_ANYWHERE_HASH)
          {
            return ConnectorConfigProvider::EKS_ANYWHERE;
          }
          else if (hashCode == ANTHOS_HASH)
          {
            return ConnectorConfigProvider::ANTHOS;
          }
          else if (hashCode == GKE_HASH)
          {
            return ConnectorConfigProvider::GKE;
          }
          else if (hashCode == AKS_HASH)
          {
            return ConnectorConfigProvider::AKS;
          }
          else if (hashCode == OPENSHIFT_HASH)
          {
            return ConnectorConfigProvider::OPENSHIFT;
          }
          else if (hashCode == TANZU_HASH)
          {
            return ConnectorConfigProvider::TANZU;
          }
          else if (hashCode == RANCHER_HASH)
          {
            return ConnectorConfigProvider::RANCHER;
          }
          else if (hashCode == EC2_HASH)
          {
            return ConnectorConfigProvider::EC2;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ConnectorConfigProvider::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConnectorConfigProvider>(hashCode);
          }

          return ConnectorConfigProvider::NOT_SET;
        }

        Aws::String GetNameForConnectorConfigProvider(ConnectorConfigProvider enumValue)
        {
          switch(enumValue)
          {
          case ConnectorConfigProvider::NOT_SET:
            return {};
          case ConnectorConfigProvider::EKS_ANYWHERE:
            return "EKS_ANYWHERE";
          case ConnectorConfigProvider::ANTHOS:
            return "ANTHOS";
          case ConnectorConfigProvider::GKE:
            return "GKE";
          case ConnectorConfigProvider::AKS:
            return "AKS";
          case ConnectorConfigProvider::OPENSHIFT:
            return "OPENSHIFT";
          case ConnectorConfigProvider::TANZU:
            return "TANZU";
          case ConnectorConfigProvider::RANCHER:
            return "RANCHER";
          case ConnectorConfigProvider::EC2:
            return "EC2";
          case ConnectorConfigProvider::OTHER:
            return "OTHER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConnectorConfigProviderMapper
    } // namespace Model
  } // namespace EKS
} // namespace Aws
