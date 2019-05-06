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
#include <aws/cloud9/Cloud9_EXPORTS.h>
#include <aws/cloud9/Cloud9Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Cloud9
{
namespace Model
{

  /**
   */
  class AWS_CLOUD9_API CreateEnvironmentEC2Request : public Cloud9Request
  {
  public:
    CreateEnvironmentEC2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEnvironmentEC2"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline CreateEnvironmentEC2Request& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline CreateEnvironmentEC2Request& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment to create.</p> <p>This name is visible to other
     * AWS IAM users in the same AWS account.</p>
     */
    inline CreateEnvironmentEC2Request& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The description of the environment to create.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the environment to create.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the environment to create.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the environment to create.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the environment to create.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the environment to create.</p>
     */
    inline CreateEnvironmentEC2Request& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the environment to create.</p>
     */
    inline CreateEnvironmentEC2Request& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the environment to create.</p>
     */
    inline CreateEnvironmentEC2Request& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateEnvironmentEC2Request& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateEnvironmentEC2Request& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive string that helps AWS Cloud9 to ensure this
     * operation completes no more than one time.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Client
     * Tokens</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline CreateEnvironmentEC2Request& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline CreateEnvironmentEC2Request& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline CreateEnvironmentEC2Request& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The type of instance to connect to the environment (for example,
     * <code>t2.micro</code>).</p>
     */
    inline CreateEnvironmentEC2Request& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline CreateEnvironmentEC2Request& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline CreateEnvironmentEC2Request& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet in Amazon VPC that AWS Cloud9 will use to communicate
     * with the Amazon EC2 instance.</p>
     */
    inline CreateEnvironmentEC2Request& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The number of minutes until the running instance is shut down after the
     * environment has last been used.</p>
     */
    inline int GetAutomaticStopTimeMinutes() const{ return m_automaticStopTimeMinutes; }

    /**
     * <p>The number of minutes until the running instance is shut down after the
     * environment has last been used.</p>
     */
    inline bool AutomaticStopTimeMinutesHasBeenSet() const { return m_automaticStopTimeMinutesHasBeenSet; }

    /**
     * <p>The number of minutes until the running instance is shut down after the
     * environment has last been used.</p>
     */
    inline void SetAutomaticStopTimeMinutes(int value) { m_automaticStopTimeMinutesHasBeenSet = true; m_automaticStopTimeMinutes = value; }

    /**
     * <p>The number of minutes until the running instance is shut down after the
     * environment has last been used.</p>
     */
    inline CreateEnvironmentEC2Request& WithAutomaticStopTimeMinutes(int value) { SetAutomaticStopTimeMinutes(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline const Aws::String& GetOwnerArn() const{ return m_ownerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline bool OwnerArnHasBeenSet() const { return m_ownerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline void SetOwnerArn(const Aws::String& value) { m_ownerArnHasBeenSet = true; m_ownerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline void SetOwnerArn(Aws::String&& value) { m_ownerArnHasBeenSet = true; m_ownerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline void SetOwnerArn(const char* value) { m_ownerArnHasBeenSet = true; m_ownerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline CreateEnvironmentEC2Request& WithOwnerArn(const Aws::String& value) { SetOwnerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline CreateEnvironmentEC2Request& WithOwnerArn(Aws::String&& value) { SetOwnerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment owner. This ARN can be the
     * ARN of any AWS IAM principal. If this value is not specified, the ARN defaults
     * to this environment's creator.</p>
     */
    inline CreateEnvironmentEC2Request& WithOwnerArn(const char* value) { SetOwnerArn(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    int m_automaticStopTimeMinutes;
    bool m_automaticStopTimeMinutesHasBeenSet;

    Aws::String m_ownerArn;
    bool m_ownerArnHasBeenSet;
  };

} // namespace Model
} // namespace Cloud9
} // namespace Aws
