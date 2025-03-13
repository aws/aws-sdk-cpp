/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EventSourceName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The name of the event source. This field is required if
   * <code>TriggerEventSource</code> is one of the following values:
   * <code>OnZendeskTicketCreate</code> | <code>OnZendeskTicketStatusUpdate</code> |
   * <code>OnSalesforceCaseCreate</code> | <code>OnContactEvaluationSubmit</code> |
   * <code>OnMetricDataUpdate</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RuleTriggerEventSource">AWS
   * API Reference</a></p>
   */
  class RuleTriggerEventSource
  {
  public:
    AWS_CONNECT_API RuleTriggerEventSource() = default;
    AWS_CONNECT_API RuleTriggerEventSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RuleTriggerEventSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the event source.</p>
     */
    inline EventSourceName GetEventSourceName() const { return m_eventSourceName; }
    inline bool EventSourceNameHasBeenSet() const { return m_eventSourceNameHasBeenSet; }
    inline void SetEventSourceName(EventSourceName value) { m_eventSourceNameHasBeenSet = true; m_eventSourceName = value; }
    inline RuleTriggerEventSource& WithEventSourceName(EventSourceName value) { SetEventSourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the integration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const { return m_integrationAssociationId; }
    inline bool IntegrationAssociationIdHasBeenSet() const { return m_integrationAssociationIdHasBeenSet; }
    template<typename IntegrationAssociationIdT = Aws::String>
    void SetIntegrationAssociationId(IntegrationAssociationIdT&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::forward<IntegrationAssociationIdT>(value); }
    template<typename IntegrationAssociationIdT = Aws::String>
    RuleTriggerEventSource& WithIntegrationAssociationId(IntegrationAssociationIdT&& value) { SetIntegrationAssociationId(std::forward<IntegrationAssociationIdT>(value)); return *this;}
    ///@}
  private:

    EventSourceName m_eventSourceName{EventSourceName::NOT_SET};
    bool m_eventSourceNameHasBeenSet = false;

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
