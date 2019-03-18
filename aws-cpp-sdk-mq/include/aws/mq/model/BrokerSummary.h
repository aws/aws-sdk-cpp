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
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/DeploymentMode.h>
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
namespace MQ
{
namespace Model
{

  /**
   * The Amazon Resource Name (ARN) of the broker.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerSummary">AWS
   * API Reference</a></p>
   */
  class AWS_MQ_API BrokerSummary
  {
  public:
    BrokerSummary();
    BrokerSummary(Aws::Utils::Json::JsonView jsonValue);
    BrokerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline bool BrokerArnHasBeenSet() const { return m_brokerArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArnHasBeenSet = true; m_brokerArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArnHasBeenSet = true; m_brokerArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline void SetBrokerArn(const char* value) { m_brokerArnHasBeenSet = true; m_brokerArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline BrokerSummary& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline BrokerSummary& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the broker.
     */
    inline BrokerSummary& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}


    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline BrokerSummary& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline BrokerSummary& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * The unique ID that Amazon MQ generates for the broker.
     */
    inline BrokerSummary& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerName(const Aws::String& value) { m_brokerNameHasBeenSet = true; m_brokerName = value; }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerName(Aws::String&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::move(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline void SetBrokerName(const char* value) { m_brokerNameHasBeenSet = true; m_brokerName.assign(value); }

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline BrokerSummary& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline BrokerSummary& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}

    /**
     * The name of the broker. This value must be unique in your AWS account, 1-50
     * characters long, must contain only letters, numbers, dashes, and underscores,
     * and must not contain whitespaces, brackets, wildcard characters, or special
     * characters.
     */
    inline BrokerSummary& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}


    /**
     * The status of the broker.
     */
    inline const BrokerState& GetBrokerState() const{ return m_brokerState; }

    /**
     * The status of the broker.
     */
    inline bool BrokerStateHasBeenSet() const { return m_brokerStateHasBeenSet; }

    /**
     * The status of the broker.
     */
    inline void SetBrokerState(const BrokerState& value) { m_brokerStateHasBeenSet = true; m_brokerState = value; }

    /**
     * The status of the broker.
     */
    inline void SetBrokerState(BrokerState&& value) { m_brokerStateHasBeenSet = true; m_brokerState = std::move(value); }

    /**
     * The status of the broker.
     */
    inline BrokerSummary& WithBrokerState(const BrokerState& value) { SetBrokerState(value); return *this;}

    /**
     * The status of the broker.
     */
    inline BrokerSummary& WithBrokerState(BrokerState&& value) { SetBrokerState(std::move(value)); return *this;}


    /**
     * The time when the broker was created.
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * The time when the broker was created.
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * The time when the broker was created.
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * The time when the broker was created.
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * The time when the broker was created.
     */
    inline BrokerSummary& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * The time when the broker was created.
     */
    inline BrokerSummary& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * Required. The deployment mode of the broker.
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }

    /**
     * Required. The deployment mode of the broker.
     */
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::move(value); }

    /**
     * Required. The deployment mode of the broker.
     */
    inline BrokerSummary& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}

    /**
     * Required. The deployment mode of the broker.
     */
    inline BrokerSummary& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}


    /**
     * The broker's instance type.
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * The broker's instance type.
     */
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * The broker's instance type.
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * The broker's instance type.
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * The broker's instance type.
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * The broker's instance type.
     */
    inline BrokerSummary& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * The broker's instance type.
     */
    inline BrokerSummary& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * The broker's instance type.
     */
    inline BrokerSummary& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}

  private:

    Aws::String m_brokerArn;
    bool m_brokerArnHasBeenSet;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet;

    BrokerState m_brokerState;
    bool m_brokerStateHasBeenSet;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet;

    DeploymentMode m_deploymentMode;
    bool m_deploymentModeHasBeenSet;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
