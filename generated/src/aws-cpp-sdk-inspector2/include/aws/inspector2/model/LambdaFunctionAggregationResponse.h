/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A response that contains the results of an AWS Lambda function finding
   * aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaFunctionAggregationResponse">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API LambdaFunctionAggregationResponse();
    AWS_INSPECTOR2_API LambdaFunctionAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaFunctionAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline LambdaFunctionAggregationResponse& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline LambdaFunctionAggregationResponse& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the AWS Lambda function. </p>
     */
    inline LambdaFunctionAggregationResponse& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The AWS Lambda function names included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLambdaTags() const{ return m_lambdaTags; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline bool LambdaTagsHasBeenSet() const { return m_lambdaTagsHasBeenSet; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline void SetLambdaTags(const Aws::Map<Aws::String, Aws::String>& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags = value; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline void SetLambdaTags(Aws::Map<Aws::String, Aws::String>&& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags = std::move(value); }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithLambdaTags(const Aws::Map<Aws::String, Aws::String>& value) { SetLambdaTags(value); return *this;}

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithLambdaTags(Aws::Map<Aws::String, Aws::String>&& value) { SetLambdaTags(std::move(value)); return *this;}

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& AddLambdaTags(const Aws::String& key, const Aws::String& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(key, value); return *this; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& AddLambdaTags(Aws::String&& key, const Aws::String& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& AddLambdaTags(const Aws::String& key, Aws::String&& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& AddLambdaTags(Aws::String&& key, Aws::String&& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& AddLambdaTags(const char* key, Aws::String&& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& AddLambdaTags(Aws::String&& key, const char* value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& AddLambdaTags(const char* key, const char* value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(key, value); return *this; }


    /**
     * <p>The date that the AWS Lambda function included in the aggregation results was
     * last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }

    /**
     * <p>The date that the AWS Lambda function included in the aggregation results was
     * last changed.</p>
     */
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }

    /**
     * <p>The date that the AWS Lambda function included in the aggregation results was
     * last changed.</p>
     */
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }

    /**
     * <p>The date that the AWS Lambda function included in the aggregation results was
     * last changed.</p>
     */
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }

    /**
     * <p>The date that the AWS Lambda function included in the aggregation results was
     * last changed.</p>
     */
    inline LambdaFunctionAggregationResponse& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}

    /**
     * <p>The date that the AWS Lambda function included in the aggregation results was
     * last changed.</p>
     */
    inline LambdaFunctionAggregationResponse& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }

    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}

    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline LambdaFunctionAggregationResponse& WithRuntime(const char* value) { SetRuntime(value); return *this;}


    
    inline const SeverityCounts& GetSeverityCounts() const{ return m_severityCounts; }

    
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }

    
    inline void SetSeverityCounts(const SeverityCounts& value) { m_severityCountsHasBeenSet = true; m_severityCounts = value; }

    
    inline void SetSeverityCounts(SeverityCounts&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::move(value); }

    
    inline LambdaFunctionAggregationResponse& WithSeverityCounts(const SeverityCounts& value) { SetSeverityCounts(value); return *this;}

    
    inline LambdaFunctionAggregationResponse& WithSeverityCounts(SeverityCounts&& value) { SetSeverityCounts(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_lambdaTags;
    bool m_lambdaTagsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
