/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/FunctionConfiguration.h>
#include <aws/lambda/model/FunctionCodeLocation.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lambda/model/TagsError.h>
#include <aws/lambda/model/Concurrency.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{
  class GetFunctionResult
  {
  public:
    AWS_LAMBDA_API GetFunctionResult() = default;
    AWS_LAMBDA_API GetFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API GetFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The configuration of the function or version.</p>
     */
    inline const FunctionConfiguration& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = FunctionConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = FunctionConfiguration>
    GetFunctionResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment package of the function or version.</p>
     */
    inline const FunctionCodeLocation& GetCode() const { return m_code; }
    template<typename CodeT = FunctionCodeLocation>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = FunctionCodeLocation>
    GetFunctionResult& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/tagging.html">tags</a>.
     * Lambda returns tag data only if you have explicit allow permissions for <a
     * href="https://docs.aws.amazon.com/lambda/latest/api/API_ListTags.html">lambda:ListTags</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetFunctionResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetFunctionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object that contains details about an error related to retrieving
     * tags.</p>
     */
    inline const TagsError& GetTagsError() const { return m_tagsError; }
    template<typename TagsErrorT = TagsError>
    void SetTagsError(TagsErrorT&& value) { m_tagsErrorHasBeenSet = true; m_tagsError = std::forward<TagsErrorT>(value); }
    template<typename TagsErrorT = TagsError>
    GetFunctionResult& WithTagsError(TagsErrorT&& value) { SetTagsError(std::forward<TagsErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's <a
     * href="https://docs.aws.amazon.com/lambda/latest/dg/concurrent-executions.html">reserved
     * concurrency</a>.</p>
     */
    inline const Concurrency& GetConcurrency() const { return m_concurrency; }
    template<typename ConcurrencyT = Concurrency>
    void SetConcurrency(ConcurrencyT&& value) { m_concurrencyHasBeenSet = true; m_concurrency = std::forward<ConcurrencyT>(value); }
    template<typename ConcurrencyT = Concurrency>
    GetFunctionResult& WithConcurrency(ConcurrencyT&& value) { SetConcurrency(std::forward<ConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFunctionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FunctionConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    FunctionCodeLocation m_code;
    bool m_codeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TagsError m_tagsError;
    bool m_tagsErrorHasBeenSet = false;

    Concurrency m_concurrency;
    bool m_concurrencyHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
