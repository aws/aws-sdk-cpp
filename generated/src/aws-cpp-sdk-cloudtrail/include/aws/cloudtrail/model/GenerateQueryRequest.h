/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class GenerateQueryRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API GenerateQueryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateQuery"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The ARN (or ID suffix of the ARN) of the event data store that you want to
     * query. You can only specify one event data store. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEventDataStores() const { return m_eventDataStores; }
    inline bool EventDataStoresHasBeenSet() const { return m_eventDataStoresHasBeenSet; }
    template<typename EventDataStoresT = Aws::Vector<Aws::String>>
    void SetEventDataStores(EventDataStoresT&& value) { m_eventDataStoresHasBeenSet = true; m_eventDataStores = std::forward<EventDataStoresT>(value); }
    template<typename EventDataStoresT = Aws::Vector<Aws::String>>
    GenerateQueryRequest& WithEventDataStores(EventDataStoresT&& value) { SetEventDataStores(std::forward<EventDataStoresT>(value)); return *this;}
    template<typename EventDataStoresT = Aws::String>
    GenerateQueryRequest& AddEventDataStores(EventDataStoresT&& value) { m_eventDataStoresHasBeenSet = true; m_eventDataStores.emplace_back(std::forward<EventDataStoresT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The prompt that you want to use to generate the query. The prompt must be in
     * English. For example prompts, see <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/lake-query-generator.html#lake-query-generator-examples">Example
     * prompts</a> in the <i>CloudTrail </i> user guide. </p>
     */
    inline const Aws::String& GetPrompt() const { return m_prompt; }
    inline bool PromptHasBeenSet() const { return m_promptHasBeenSet; }
    template<typename PromptT = Aws::String>
    void SetPrompt(PromptT&& value) { m_promptHasBeenSet = true; m_prompt = std::forward<PromptT>(value); }
    template<typename PromptT = Aws::String>
    GenerateQueryRequest& WithPrompt(PromptT&& value) { SetPrompt(std::forward<PromptT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_eventDataStores;
    bool m_eventDataStoresHasBeenSet = false;

    Aws::String m_prompt;
    bool m_promptHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
