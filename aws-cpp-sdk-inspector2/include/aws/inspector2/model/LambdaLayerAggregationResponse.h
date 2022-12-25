/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/model/SeverityCounts.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>A response that contains the results of an AWS Lambda function layer finding
   * aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaLayerAggregationResponse">AWS
   * API Reference</a></p>
   */
  class LambdaLayerAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API LambdaLayerAggregationResponse();
    AWS_INSPECTOR2_API LambdaLayerAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaLayerAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The account ID of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline LambdaLayerAggregationResponse& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline LambdaLayerAggregationResponse& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The names of the AWS Lambda functions associated with the layers.</p>
     */
    inline LambdaLayerAggregationResponse& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline const Aws::String& GetLayerArn() const{ return m_layerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline bool LayerArnHasBeenSet() const { return m_layerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline void SetLayerArn(const Aws::String& value) { m_layerArnHasBeenSet = true; m_layerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline void SetLayerArn(Aws::String&& value) { m_layerArnHasBeenSet = true; m_layerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline void SetLayerArn(const char* value) { m_layerArnHasBeenSet = true; m_layerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithLayerArn(const Aws::String& value) { SetLayerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithLayerArn(Aws::String&& value) { SetLayerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithLayerArn(const char* value) { SetLayerArn(value); return *this;}


    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The Resource ID of the AWS Lambda function layer.</p>
     */
    inline LambdaLayerAggregationResponse& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    
    inline LambdaLayerAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    
    inline LambdaLayerAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_layerArn;
    bool m_layerArnHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
