/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mq/model/BrokerState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mq/model/DeploymentMode.h>
#include <aws/mq/model/EngineType.h>
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
   * <p>Returns information about all brokers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mq-2017-11-27/BrokerSummary">AWS
   * API Reference</a></p>
   */
  class BrokerSummary
  {
  public:
    AWS_MQ_API BrokerSummary();
    AWS_MQ_API BrokerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API BrokerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MQ_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetBrokerArn() const{ return m_brokerArn; }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline bool BrokerArnHasBeenSet() const { return m_brokerArnHasBeenSet; }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(const Aws::String& value) { m_brokerArnHasBeenSet = true; m_brokerArn = value; }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(Aws::String&& value) { m_brokerArnHasBeenSet = true; m_brokerArn = std::move(value); }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline void SetBrokerArn(const char* value) { m_brokerArnHasBeenSet = true; m_brokerArn.assign(value); }

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline BrokerSummary& WithBrokerArn(const Aws::String& value) { SetBrokerArn(value); return *this;}

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline BrokerSummary& WithBrokerArn(Aws::String&& value) { SetBrokerArn(std::move(value)); return *this;}

    /**
     * <p>The broker's Amazon Resource Name (ARN).</p>
     */
    inline BrokerSummary& WithBrokerArn(const char* value) { SetBrokerArn(value); return *this;}


    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline bool BrokerIdHasBeenSet() const { return m_brokerIdHasBeenSet; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerIdHasBeenSet = true; m_brokerId = value; }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerIdHasBeenSet = true; m_brokerId = std::move(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerIdHasBeenSet = true; m_brokerId.assign(value); }

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline BrokerSummary& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline BrokerSummary& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline BrokerSummary& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline const Aws::String& GetBrokerName() const{ return m_brokerName; }

    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline bool BrokerNameHasBeenSet() const { return m_brokerNameHasBeenSet; }

    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline void SetBrokerName(const Aws::String& value) { m_brokerNameHasBeenSet = true; m_brokerName = value; }

    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline void SetBrokerName(Aws::String&& value) { m_brokerNameHasBeenSet = true; m_brokerName = std::move(value); }

    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline void SetBrokerName(const char* value) { m_brokerNameHasBeenSet = true; m_brokerName.assign(value); }

    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline BrokerSummary& WithBrokerName(const Aws::String& value) { SetBrokerName(value); return *this;}

    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline BrokerSummary& WithBrokerName(Aws::String&& value) { SetBrokerName(std::move(value)); return *this;}

    /**
     * <p>The broker's name. This value is unique in your AWS account, 1-50 characters
     * long, and containing only letters, numbers, dashes, and underscores, and must
     * not contain white spaces, brackets, wildcard characters, or special
     * characters.</p>
     */
    inline BrokerSummary& WithBrokerName(const char* value) { SetBrokerName(value); return *this;}


    /**
     * <p>The broker's status.</p>
     */
    inline const BrokerState& GetBrokerState() const{ return m_brokerState; }

    /**
     * <p>The broker's status.</p>
     */
    inline bool BrokerStateHasBeenSet() const { return m_brokerStateHasBeenSet; }

    /**
     * <p>The broker's status.</p>
     */
    inline void SetBrokerState(const BrokerState& value) { m_brokerStateHasBeenSet = true; m_brokerState = value; }

    /**
     * <p>The broker's status.</p>
     */
    inline void SetBrokerState(BrokerState&& value) { m_brokerStateHasBeenSet = true; m_brokerState = std::move(value); }

    /**
     * <p>The broker's status.</p>
     */
    inline BrokerSummary& WithBrokerState(const BrokerState& value) { SetBrokerState(value); return *this;}

    /**
     * <p>The broker's status.</p>
     */
    inline BrokerSummary& WithBrokerState(BrokerState&& value) { SetBrokerState(std::move(value)); return *this;}


    /**
     * <p>The time when the broker was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p>The time when the broker was created.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The time when the broker was created.</p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The time when the broker was created.</p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p>The time when the broker was created.</p>
     */
    inline BrokerSummary& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p>The time when the broker was created.</p>
     */
    inline BrokerSummary& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p>The broker's deployment mode.</p>
     */
    inline const DeploymentMode& GetDeploymentMode() const{ return m_deploymentMode; }

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline bool DeploymentModeHasBeenSet() const { return m_deploymentModeHasBeenSet; }

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline void SetDeploymentMode(const DeploymentMode& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = value; }

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline void SetDeploymentMode(DeploymentMode&& value) { m_deploymentModeHasBeenSet = true; m_deploymentMode = std::move(value); }

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline BrokerSummary& WithDeploymentMode(const DeploymentMode& value) { SetDeploymentMode(value); return *this;}

    /**
     * <p>The broker's deployment mode.</p>
     */
    inline BrokerSummary& WithDeploymentMode(DeploymentMode&& value) { SetDeploymentMode(std::move(value)); return *this;}


    /**
     * <p>The type of broker engine.</p>
     */
    inline const EngineType& GetEngineType() const{ return m_engineType; }

    /**
     * <p>The type of broker engine.</p>
     */
    inline bool EngineTypeHasBeenSet() const { return m_engineTypeHasBeenSet; }

    /**
     * <p>The type of broker engine.</p>
     */
    inline void SetEngineType(const EngineType& value) { m_engineTypeHasBeenSet = true; m_engineType = value; }

    /**
     * <p>The type of broker engine.</p>
     */
    inline void SetEngineType(EngineType&& value) { m_engineTypeHasBeenSet = true; m_engineType = std::move(value); }

    /**
     * <p>The type of broker engine.</p>
     */
    inline BrokerSummary& WithEngineType(const EngineType& value) { SetEngineType(value); return *this;}

    /**
     * <p>The type of broker engine.</p>
     */
    inline BrokerSummary& WithEngineType(EngineType&& value) { SetEngineType(std::move(value)); return *this;}


    /**
     * <p>The broker's instance type.</p>
     */
    inline const Aws::String& GetHostInstanceType() const{ return m_hostInstanceType; }

    /**
     * <p>The broker's instance type.</p>
     */
    inline bool HostInstanceTypeHasBeenSet() const { return m_hostInstanceTypeHasBeenSet; }

    /**
     * <p>The broker's instance type.</p>
     */
    inline void SetHostInstanceType(const Aws::String& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = value; }

    /**
     * <p>The broker's instance type.</p>
     */
    inline void SetHostInstanceType(Aws::String&& value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType = std::move(value); }

    /**
     * <p>The broker's instance type.</p>
     */
    inline void SetHostInstanceType(const char* value) { m_hostInstanceTypeHasBeenSet = true; m_hostInstanceType.assign(value); }

    /**
     * <p>The broker's instance type.</p>
     */
    inline BrokerSummary& WithHostInstanceType(const Aws::String& value) { SetHostInstanceType(value); return *this;}

    /**
     * <p>The broker's instance type.</p>
     */
    inline BrokerSummary& WithHostInstanceType(Aws::String&& value) { SetHostInstanceType(std::move(value)); return *this;}

    /**
     * <p>The broker's instance type.</p>
     */
    inline BrokerSummary& WithHostInstanceType(const char* value) { SetHostInstanceType(value); return *this;}

  private:

    Aws::String m_brokerArn;
    bool m_brokerArnHasBeenSet = false;

    Aws::String m_brokerId;
    bool m_brokerIdHasBeenSet = false;

    Aws::String m_brokerName;
    bool m_brokerNameHasBeenSet = false;

    BrokerState m_brokerState;
    bool m_brokerStateHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    DeploymentMode m_deploymentMode;
    bool m_deploymentModeHasBeenSet = false;

    EngineType m_engineType;
    bool m_engineTypeHasBeenSet = false;

    Aws::String m_hostInstanceType;
    bool m_hostInstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
