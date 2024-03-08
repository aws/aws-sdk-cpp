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

        static const int EKS_ANYWHERE_HASH = HashingUtils::HashString("EKS_ANYWHERE");
        static const int ANTHOS_HASH = HashingUtils::HashString("ANTHOS");
        static const int GKE_HASH = HashingUtils::HashString("GKE");
        static const int AKS_HASH = HashingUtils::HashString("AKS");
        static const int OPENSHIFT_HASH = HashingUtils::HashString("OPENSHIFT");
        static const int TANZU_HASH = HashingUtils::HashString("TANZU");
        static const int RANCHER_HASH = HashingUtils::HashString("RANCHER");
        static const int EC2_HASH = HashingUtils::HashString("EC2");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        ConnectorConfigProvider GetConnectorConfigProviderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
