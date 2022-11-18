/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/EventSourcesConfig.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class AWS_DEVOPSGURU_API UpdateEventSourcesConfigRequest : public DevOpsGuruRequest
  {
  public:
    UpdateEventSourcesConfigRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<UpdateEventSourcesConfigRequest> Clone() const
    {
      return Aws::MakeUnique<UpdateEventSourcesConfigRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEventSourcesConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Configuration information about the integration of DevOps Guru as the
     * Consumer via EventBridge with another AWS Service.</p>
     */
    inline const EventSourcesConfig& GetEventSources() const{ return m_eventSources; }

    /**
     * <p>Configuration information about the integration of DevOps Guru as the
     * Consumer via EventBridge with another AWS Service.</p>
     */
    inline bool EventSourcesHasBeenSet() const { return m_eventSourcesHasBeenSet; }

    /**
     * <p>Configuration information about the integration of DevOps Guru as the
     * Consumer via EventBridge with another AWS Service.</p>
     */
    inline void SetEventSources(const EventSourcesConfig& value) { m_eventSourcesHasBeenSet = true; m_eventSources = value; }

    /**
     * <p>Configuration information about the integration of DevOps Guru as the
     * Consumer via EventBridge with another AWS Service.</p>
     */
    inline void SetEventSources(EventSourcesConfig&& value) { m_eventSourcesHasBeenSet = true; m_eventSources = std::move(value); }

    /**
     * <p>Configuration information about the integration of DevOps Guru as the
     * Consumer via EventBridge with another AWS Service.</p>
     */
    inline UpdateEventSourcesConfigRequest& WithEventSources(const EventSourcesConfig& value) { SetEventSources(value); return *this;}

    /**
     * <p>Configuration information about the integration of DevOps Guru as the
     * Consumer via EventBridge with another AWS Service.</p>
     */
    inline UpdateEventSourcesConfigRequest& WithEventSources(EventSourcesConfig&& value) { SetEventSources(std::move(value)); return *this;}

  private:

    EventSourcesConfig m_eventSources;
    bool m_eventSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
