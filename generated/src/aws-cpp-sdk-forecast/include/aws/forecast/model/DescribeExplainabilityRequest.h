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
  class DescribeExplainabilityRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API DescribeExplainabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExplainability"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline bool ExplainabilityArnHasBeenSet() const { return m_explainabilityArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline DescribeExplainabilityRequest& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline DescribeExplainabilityRequest& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Explaianability to describe.</p>
     */
    inline DescribeExplainabilityRequest& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}

  private:

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
