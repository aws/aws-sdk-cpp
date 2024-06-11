/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/config/ConfigServiceRequest.h>
#include <aws/config/model/ResourceDetails.h>
#include <aws/config/model/EvaluationContext.h>
#include <aws/config/model/EvaluationMode.h>
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
  class StartResourceEvaluationRequest : public ConfigServiceRequest
  {
  public:
    AWS_CONFIGSERVICE_API StartResourceEvaluationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartResourceEvaluation"; }

    AWS_CONFIGSERVICE_API Aws::String SerializePayload() const override;

    AWS_CONFIGSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Returns a <code>ResourceDetails</code> object.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }
    inline bool ResourceDetailsHasBeenSet() const { return m_resourceDetailsHasBeenSet; }
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = value; }
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::move(value); }
    inline StartResourceEvaluationRequest& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}
    inline StartResourceEvaluationRequest& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an <code>EvaluationContext</code> object.</p>
     */
    inline const EvaluationContext& GetEvaluationContext() const{ return m_evaluationContext; }
    inline bool EvaluationContextHasBeenSet() const { return m_evaluationContextHasBeenSet; }
    inline void SetEvaluationContext(const EvaluationContext& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = value; }
    inline void SetEvaluationContext(EvaluationContext&& value) { m_evaluationContextHasBeenSet = true; m_evaluationContext = std::move(value); }
    inline StartResourceEvaluationRequest& WithEvaluationContext(const EvaluationContext& value) { SetEvaluationContext(value); return *this;}
    inline StartResourceEvaluationRequest& WithEvaluationContext(EvaluationContext&& value) { SetEvaluationContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode of an evaluation. The valid values for this API are
     * <code>DETECTIVE</code> and <code>PROACTIVE</code>.</p>
     */
    inline const EvaluationMode& GetEvaluationMode() const{ return m_evaluationMode; }
    inline bool EvaluationModeHasBeenSet() const { return m_evaluationModeHasBeenSet; }
    inline void SetEvaluationMode(const EvaluationMode& value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = value; }
    inline void SetEvaluationMode(EvaluationMode&& value) { m_evaluationModeHasBeenSet = true; m_evaluationMode = std::move(value); }
    inline StartResourceEvaluationRequest& WithEvaluationMode(const EvaluationMode& value) { SetEvaluationMode(value); return *this;}
    inline StartResourceEvaluationRequest& WithEvaluationMode(EvaluationMode&& value) { SetEvaluationMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout for an evaluation. The default is 900 seconds. You cannot specify
     * a number greater than 3600. If you specify 0, Config uses the default.</p>
     */
    inline int GetEvaluationTimeout() const{ return m_evaluationTimeout; }
    inline bool EvaluationTimeoutHasBeenSet() const { return m_evaluationTimeoutHasBeenSet; }
    inline void SetEvaluationTimeout(int value) { m_evaluationTimeoutHasBeenSet = true; m_evaluationTimeout = value; }
    inline StartResourceEvaluationRequest& WithEvaluationTimeout(int value) { SetEvaluationTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A client token is a unique, case-sensitive string of up to 64 ASCII
     * characters. To make an idempotent API request using one of these actions,
     * specify a client token in the request.</p>  <p>Avoid reusing the same
     * client token for other API requests. If you retry a request that completed
     * successfully using the same client token and the same parameters, the retry
     * succeeds without performing any further actions. If you retry a successful
     * request using the same client token, but one or more of the parameters are
     * different, other than the Region or Availability Zone, the retry fails with an
     * IdempotentParameterMismatch error.</p> 
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline StartResourceEvaluationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline StartResourceEvaluationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline StartResourceEvaluationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    EvaluationContext m_evaluationContext;
    bool m_evaluationContextHasBeenSet = false;

    EvaluationMode m_evaluationMode;
    bool m_evaluationModeHasBeenSet = false;

    int m_evaluationTimeout;
    bool m_evaluationTimeoutHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
