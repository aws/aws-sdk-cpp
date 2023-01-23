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
    AWS_CONFIGSERVICE_API GetResourceEvaluationSummaryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceEvaluationSummary"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline const Aws::String& GetResourceEvaluationId() const{ return m_resourceEvaluationId; }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline bool ResourceEvaluationIdHasBeenSet() const { return m_resourceEvaluationIdHasBeenSet; }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline void SetResourceEvaluationId(const Aws::String& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = value; }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline void SetResourceEvaluationId(Aws::String&& value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId = std::move(value); }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline void SetResourceEvaluationId(const char* value) { m_resourceEvaluationIdHasBeenSet = true; m_resourceEvaluationId.assign(value); }

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryRequest& WithResourceEvaluationId(const Aws::String& value) { SetResourceEvaluationId(value); return *this;}

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryRequest& WithResourceEvaluationId(Aws::String&& value) { SetResourceEvaluationId(std::move(value)); return *this;}

    /**
     * <p>The unique <code>ResourceEvaluationId</code> of Amazon Web Services resource
     * execution for which you want to retrieve the evaluation summary.</p>
     */
    inline GetResourceEvaluationSummaryRequest& WithResourceEvaluationId(const char* value) { SetResourceEvaluationId(value); return *this;}

  private:

    Aws::String m_resourceEvaluationId;
    bool m_resourceEvaluationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
