/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/inspector2/model/SeverityCounts.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A response that contains the results of an Amazon Web Services Lambda
   * function finding aggregation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/LambdaFunctionAggregationResponse">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionAggregationResponse
  {
  public:
    AWS_INSPECTOR2_API LambdaFunctionAggregationResponse() = default;
    AWS_INSPECTOR2_API LambdaFunctionAggregationResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API LambdaFunctionAggregationResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource IDs included in the aggregation results.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    LambdaFunctionAggregationResponse& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Lambda function names included in the aggregation
     * results.</p>
     */
    inline const Aws::String& GetFunctionName() const { return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    template<typename FunctionNameT = Aws::String>
    void SetFunctionName(FunctionNameT&& value) { m_functionNameHasBeenSet = true; m_functionName = std::forward<FunctionNameT>(value); }
    template<typename FunctionNameT = Aws::String>
    LambdaFunctionAggregationResponse& WithFunctionName(FunctionNameT&& value) { SetFunctionName(std::forward<FunctionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtimes included in the aggregation results.</p>
     */
    inline const Aws::String& GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    template<typename RuntimeT = Aws::String>
    void SetRuntime(RuntimeT&& value) { m_runtimeHasBeenSet = true; m_runtime = std::forward<RuntimeT>(value); }
    template<typename RuntimeT = Aws::String>
    LambdaFunctionAggregationResponse& WithRuntime(RuntimeT&& value) { SetRuntime(std::forward<RuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags included in the aggregation results.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetLambdaTags() const { return m_lambdaTags; }
    inline bool LambdaTagsHasBeenSet() const { return m_lambdaTagsHasBeenSet; }
    template<typename LambdaTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetLambdaTags(LambdaTagsT&& value) { m_lambdaTagsHasBeenSet = true; m_lambdaTags = std::forward<LambdaTagsT>(value); }
    template<typename LambdaTagsT = Aws::Map<Aws::String, Aws::String>>
    LambdaFunctionAggregationResponse& WithLambdaTags(LambdaTagsT&& value) { SetLambdaTags(std::forward<LambdaTagsT>(value)); return *this;}
    template<typename LambdaTagsKeyT = Aws::String, typename LambdaTagsValueT = Aws::String>
    LambdaFunctionAggregationResponse& AddLambdaTags(LambdaTagsKeyT&& key, LambdaTagsValueT&& value) {
      m_lambdaTagsHasBeenSet = true; m_lambdaTags.emplace(std::forward<LambdaTagsKeyT>(key), std::forward<LambdaTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that owns the Amazon Web Services
     * Lambda function. </p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    LambdaFunctionAggregationResponse& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the counts of aggregated finding per severity.</p>
     */
    inline const SeverityCounts& GetSeverityCounts() const { return m_severityCounts; }
    inline bool SeverityCountsHasBeenSet() const { return m_severityCountsHasBeenSet; }
    template<typename SeverityCountsT = SeverityCounts>
    void SetSeverityCounts(SeverityCountsT&& value) { m_severityCountsHasBeenSet = true; m_severityCounts = std::forward<SeverityCountsT>(value); }
    template<typename SeverityCountsT = SeverityCounts>
    LambdaFunctionAggregationResponse& WithSeverityCounts(SeverityCountsT&& value) { SetSeverityCounts(std::forward<SeverityCountsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the Amazon Web Services Lambda function included in the
     * aggregation results was last changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    LambdaFunctionAggregationResponse& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_lambdaTags;
    bool m_lambdaTagsHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    SeverityCounts m_severityCounts;
    bool m_severityCountsHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
