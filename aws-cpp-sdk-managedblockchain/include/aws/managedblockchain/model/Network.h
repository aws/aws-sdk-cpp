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

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/Framework.h>
#include <aws/managedblockchain/model/NetworkFrameworkAttributes.h>
#include <aws/managedblockchain/model/VotingPolicy.h>
#include <aws/managedblockchain/model/NetworkStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ManagedBlockchain
{
namespace Model
{

  /**
   * <p>Network configuration properties.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/managedblockchain-2018-09-24/Network">AWS
   * API Reference</a></p>
   */
  class AWS_MANAGEDBLOCKCHAIN_API Network
  {
  public:
    Network();
    Network(Aws::Utils::Json::JsonView jsonValue);
    Network& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the network.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline Network& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline Network& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the network.</p>
     */
    inline Network& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the network.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the network.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the network.</p>
     */
    inline Network& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline Network& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the network.</p>
     */
    inline Network& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline Network& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline Network& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Attributes of the blockchain framework for the network.</p>
     */
    inline Network& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline bool FrameworkHasBeenSet() const { return m_frameworkHasBeenSet; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline void SetFramework(const Framework& value) { m_frameworkHasBeenSet = true; m_framework = value; }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline void SetFramework(Framework&& value) { m_frameworkHasBeenSet = true; m_framework = std::move(value); }

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline Network& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p>The blockchain framework that the network uses.</p>
     */
    inline Network& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}


    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline const Aws::String& GetFrameworkVersion() const{ return m_frameworkVersion; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline bool FrameworkVersionHasBeenSet() const { return m_frameworkVersionHasBeenSet; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(const Aws::String& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = value; }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(Aws::String&& value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion = std::move(value); }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkVersion(const char* value) { m_frameworkVersionHasBeenSet = true; m_frameworkVersion.assign(value); }

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline Network& WithFrameworkVersion(const Aws::String& value) { SetFrameworkVersion(value); return *this;}

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline Network& WithFrameworkVersion(Aws::String&& value) { SetFrameworkVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the blockchain framework that the network uses.</p>
     */
    inline Network& WithFrameworkVersion(const char* value) { SetFrameworkVersion(value); return *this;}


    /**
     * <p>Attributes of the blockchain framework that the network uses.</p>
     */
    inline const NetworkFrameworkAttributes& GetFrameworkAttributes() const{ return m_frameworkAttributes; }

    /**
     * <p>Attributes of the blockchain framework that the network uses.</p>
     */
    inline bool FrameworkAttributesHasBeenSet() const { return m_frameworkAttributesHasBeenSet; }

    /**
     * <p>Attributes of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkAttributes(const NetworkFrameworkAttributes& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = value; }

    /**
     * <p>Attributes of the blockchain framework that the network uses.</p>
     */
    inline void SetFrameworkAttributes(NetworkFrameworkAttributes&& value) { m_frameworkAttributesHasBeenSet = true; m_frameworkAttributes = std::move(value); }

    /**
     * <p>Attributes of the blockchain framework that the network uses.</p>
     */
    inline Network& WithFrameworkAttributes(const NetworkFrameworkAttributes& value) { SetFrameworkAttributes(value); return *this;}

    /**
     * <p>Attributes of the blockchain framework that the network uses.</p>
     */
    inline Network& WithFrameworkAttributes(NetworkFrameworkAttributes&& value) { SetFrameworkAttributes(std::move(value)); return *this;}


    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline const Aws::String& GetVpcEndpointServiceName() const{ return m_vpcEndpointServiceName; }

    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline bool VpcEndpointServiceNameHasBeenSet() const { return m_vpcEndpointServiceNameHasBeenSet; }

    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline void SetVpcEndpointServiceName(const Aws::String& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = value; }

    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline void SetVpcEndpointServiceName(Aws::String&& value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName = std::move(value); }

    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline void SetVpcEndpointServiceName(const char* value) { m_vpcEndpointServiceNameHasBeenSet = true; m_vpcEndpointServiceName.assign(value); }

    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline Network& WithVpcEndpointServiceName(const Aws::String& value) { SetVpcEndpointServiceName(value); return *this;}

    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline Network& WithVpcEndpointServiceName(Aws::String&& value) { SetVpcEndpointServiceName(std::move(value)); return *this;}

    /**
     * <p>The VPC endpoint service name of the VPC endpoint service of the network.
     * Members use the VPC endpoint service name to create a VPC endpoint to access
     * network resources.</p>
     */
    inline Network& WithVpcEndpointServiceName(const char* value) { SetVpcEndpointServiceName(value); return *this;}


    /**
     * <p>The voting rules for the network to decide if a proposal is accepted.</p>
     */
    inline const VotingPolicy& GetVotingPolicy() const{ return m_votingPolicy; }

    /**
     * <p>The voting rules for the network to decide if a proposal is accepted.</p>
     */
    inline bool VotingPolicyHasBeenSet() const { return m_votingPolicyHasBeenSet; }

    /**
     * <p>The voting rules for the network to decide if a proposal is accepted.</p>
     */
    inline void SetVotingPolicy(const VotingPolicy& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = value; }

    /**
     * <p>The voting rules for the network to decide if a proposal is accepted.</p>
     */
    inline void SetVotingPolicy(VotingPolicy&& value) { m_votingPolicyHasBeenSet = true; m_votingPolicy = std::move(value); }

    /**
     * <p>The voting rules for the network to decide if a proposal is accepted.</p>
     */
    inline Network& WithVotingPolicy(const VotingPolicy& value) { SetVotingPolicy(value); return *this;}

    /**
     * <p>The voting rules for the network to decide if a proposal is accepted.</p>
     */
    inline Network& WithVotingPolicy(VotingPolicy&& value) { SetVotingPolicy(std::move(value)); return *this;}


    /**
     * <p>The current status of the network.</p>
     */
    inline const NetworkStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the network.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the network.</p>
     */
    inline void SetStatus(const NetworkStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the network.</p>
     */
    inline void SetStatus(NetworkStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the network.</p>
     */
    inline Network& WithStatus(const NetworkStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the network.</p>
     */
    inline Network& WithStatus(NetworkStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the network was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline Network& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that the network was created.</p>
     */
    inline Network& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Framework m_framework;
    bool m_frameworkHasBeenSet;

    Aws::String m_frameworkVersion;
    bool m_frameworkVersionHasBeenSet;

    NetworkFrameworkAttributes m_frameworkAttributes;
    bool m_frameworkAttributesHasBeenSet;

    Aws::String m_vpcEndpointServiceName;
    bool m_vpcEndpointServiceNameHasBeenSet;

    VotingPolicy m_votingPolicy;
    bool m_votingPolicyHasBeenSet;

    NetworkStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
