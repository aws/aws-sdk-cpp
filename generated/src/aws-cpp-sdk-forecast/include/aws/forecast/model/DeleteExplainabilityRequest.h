/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class DeleteExplainabilityRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DeleteExplainabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteExplainability"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline bool ExplainabilityArnHasBeenSet() const { return m_explainabilityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline DeleteExplainabilityRequest& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline DeleteExplainabilityRequest& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability resource to delete.</p>
     */
    inline DeleteExplainabilityRequest& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}

  private:

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
