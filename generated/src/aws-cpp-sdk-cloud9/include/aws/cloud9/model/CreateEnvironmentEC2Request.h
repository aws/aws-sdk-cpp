/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/Cloud9Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloud9/model/ConnectionType.h>
#include <aws/cloud9/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Cloud9
{
namespace Model
{

  /**
   */
  class CreateEnvironmentEC2Request : public Cloud9Request
  {
  public:
    AWS_CLOUD9_API CreateEnvironmentEC2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentEC2"; }

    AWS_CLOUD9_API Aws::String SerializePayload() const override;

    AWS_CLOUD9_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * IAM users in the same Amazon Web Services account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateEnvironmentEC2Request& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the environment to create.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEnvironmentEC2Request& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive string that helps Cloud9 to ensure this operation
     * completes no more than one time.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateEnvironmentEC2Request& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    CreateEnvironmentEC2Request& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet in Amazon VPC that Cloud9 will use to communicate with
     * the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    CreateEnvironmentEC2Request& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Amazon Machine Image (AMI) that's used to create the
     * EC2 instance. To choose an AMI for the instance, you must specify a valid AMI
     * alias or a valid Amazon EC2 Systems Manager (SSM) path.</p> <p/> <p>We recommend
     * using Amazon Linux 2023 as the AMI to create your environment as it is fully
     * supported.</p> <p>From December 16, 2024, Ubuntu 18.04 will be removed from the
     * list of available <code>imageIds</code> for Cloud9. This change is necessary as
     * Ubuntu 18.04 has ended standard support on May 31, 2023. This change will only
     * affect direct API consumers, and not Cloud9 console users.</p> <p>Since Ubuntu
     * 18.04 has ended standard support as of May 31, 2023, we recommend you choose
     * Ubuntu 22.04.</p> <p> <b>AMI aliases </b> </p> <ul> <li> <p>Amazon Linux 2:
     * <code>amazonlinux-2-x86_64</code> </p> </li> <li> <p>Amazon Linux 2023
     * (recommended): <code>amazonlinux-2023-x86_64</code> </p> </li> <li> <p>Ubuntu
     * 18.04: <code>ubuntu-18.04-x86_64</code> </p> </li> <li> <p>Ubuntu 22.04:
     * <code>ubuntu-22.04-x86_64</code> </p> </li> </ul> <p> <b>SSM paths</b> </p> <ul>
     * <li> <p>Amazon Linux 2:
     * <code>resolve:ssm:/aws/service/cloud9/amis/amazonlinux-2-x86_64</code> </p>
     * </li> <li> <p>Amazon Linux 2023 (recommended):
     * <code>resolve:ssm:/aws/service/cloud9/amis/amazonlinux-2023-x86_64</code> </p>
     * </li> <li> <p>Ubuntu 18.04:
     * <code>resolve:ssm:/aws/service/cloud9/amis/ubuntu-18.04-x86_64</code> </p> </li>
     * <li> <p>Ubuntu 22.04:
     * <code>resolve:ssm:/aws/service/cloud9/amis/ubuntu-22.04-x86_64</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    CreateEnvironmentEC2Request& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of minutes until the running instance is shut down after the
     * environment has last been used.</p>
     */
    inline int GetAutomaticStopTimeMinutes() const { return m_automaticStopTimeMinutes; }
    inline bool AutomaticStopTimeMinutesHasBeenSet() const { return m_automaticStopTimeMinutesHasBeenSet; }
    inline void SetAutomaticStopTimeMinutes(int value) { m_automaticStopTimeMinutesHasBeenSet = true; m_automaticStopTimeMinutes = value; }
    inline CreateEnvironmentEC2Request& WithAutomaticStopTimeMinutes(int value) { SetAutomaticStopTimeMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any IAM principal. If this value is not specified, the ARN defaults to
     * this environment's creator.</p>
     */
    inline const Aws::String& GetOwnerArn() const { return m_ownerArn; }
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }
    template<typename OwnerArnT = Aws::String>
    void SetOwnerArn(OwnerArnT&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::forward<OwnerArnT>(value); }
    template<typename OwnerArnT = Aws::String>
    CreateEnvironmentEC2Request& WithOwnerArn(OwnerArnT&& value) { SetOwnerArn(std::forward<OwnerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs that will be associated with the new Cloud9
     * development environment.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateEnvironmentEC2Request& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateEnvironmentEC2Request& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The connection type used for connecting to an Amazon EC2 environment. Valid
     * values are <code>CONNECT_SSH</code> (default) and <code>CONNECT_SSM</code>
     * (connected through Amazon EC2 Systems Manager).</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/cloud9/latest/user-guide/ec2-ssm.html">Accessing
     * no-ingress EC2 instances with Amazon EC2 Systems Manager</a> in the <i>Cloud9
     * User Guide</i>.</p>
     */
    inline ConnectionType GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    inline void SetConnectionType(ConnectionType value) { m_connectionTypeHasBeenSet = true; m_connectionType = value; }
    inline CreateEnvironmentEC2Request& WithConnectionType(ConnectionType value) { SetConnectionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateEnvironmentEC2Request& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;

    int m_automaticStopTimeMinutes{0};
    bool m_automaticStopTimeMinutesHasBeenSet = false;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ConnectionType m_connectionType{ConnectionType::NOT_SET};
    bool m_connectionTypeHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
