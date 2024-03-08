/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ParticipantCapabilities.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about the capabilities enabled for participants of the
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AllowedCapabilities">AWS
   * API Reference</a></p>
   */
  class AllowedCapabilities
  {
  public:
    AWS_CONNECT_API AllowedCapabilities();
    AWS_CONNECT_API AllowedCapabilities(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API AllowedCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the customer's video sharing capabilities.</p>
     */
    inline const ParticipantCapabilities& GetCustomer() const{ return m_customer; }

    /**
     * <p>Information about the customer's video sharing capabilities.</p>
     */
    inline bool CustomerHasBeenSet() const { return m_customerHasBeenSet; }

    /**
     * <p>Information about the customer's video sharing capabilities.</p>
     */
    inline void SetCustomer(const ParticipantCapabilities& value) { m_customerHasBeenSet = true; m_customer = value; }

    /**
     * <p>Information about the customer's video sharing capabilities.</p>
     */
    inline void SetCustomer(ParticipantCapabilities&& value) { m_customerHasBeenSet = true; m_customer = std::move(value); }

    /**
     * <p>Information about the customer's video sharing capabilities.</p>
     */
    inline AllowedCapabilities& WithCustomer(const ParticipantCapabilities& value) { SetCustomer(value); return *this;}

    /**
     * <p>Information about the customer's video sharing capabilities.</p>
     */
    inline AllowedCapabilities& WithCustomer(ParticipantCapabilities&& value) { SetCustomer(std::move(value)); return *this;}


    /**
     * <p>Information about the agent's video sharing capabilities.</p>
     */
    inline const ParticipantCapabilities& GetAgent() const{ return m_agent; }

    /**
     * <p>Information about the agent's video sharing capabilities.</p>
     */
    inline bool AgentHasBeenSet() const { return m_agentHasBeenSet; }

    /**
     * <p>Information about the agent's video sharing capabilities.</p>
     */
    inline void SetAgent(const ParticipantCapabilities& value) { m_agentHasBeenSet = true; m_agent = value; }

    /**
     * <p>Information about the agent's video sharing capabilities.</p>
     */
    inline void SetAgent(ParticipantCapabilities&& value) { m_agentHasBeenSet = true; m_agent = std::move(value); }

    /**
     * <p>Information about the agent's video sharing capabilities.</p>
     */
    inline AllowedCapabilities& WithAgent(const ParticipantCapabilities& value) { SetAgent(value); return *this;}

    /**
     * <p>Information about the agent's video sharing capabilities.</p>
     */
    inline AllowedCapabilities& WithAgent(ParticipantCapabilities&& value) { SetAgent(std::move(value)); return *this;}

  private:

    ParticipantCapabilities m_customer;
    bool m_customerHasBeenSet = false;

    ParticipantCapabilities m_agent;
    bool m_agentHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
