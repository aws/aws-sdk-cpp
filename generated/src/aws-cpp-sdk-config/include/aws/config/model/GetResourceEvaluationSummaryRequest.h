/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ConfigService
{
namespace Model
{

  /**
   */
  class GetResourceEvaluationSummaryRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceEvaluationSummary"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const { return m_resourceEvaluationId; }
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }
    template<typename ResourceEvaluationIdT = Aws::String>
    void SetResourceEvaluationId(ResourceEvaluationIdT&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::forward<ResourceEvaluationIdT>(value); }
    template<typename ResourceEvaluationIdT = Aws::String>
    GetResourceEvaluationSummaryRequest& WithResourceEvaluationId(ResourceEvaluationIdT&& value) { SetResourceEvaluationId(std::forward<ResourceEvaluationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
