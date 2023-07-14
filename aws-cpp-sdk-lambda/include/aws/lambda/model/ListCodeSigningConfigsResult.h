﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/model/CodeSigningConfig.h>
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
  class AWS_LAMBDA_API ListCodeSigningConfigsResult
  {
  public:
    ListCodeSigningConfigsResult();
    ListCodeSigningConfigsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListCodeSigningConfigsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextMarker() const{ return m_nextMarker; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const Aws::String& value) { m_nextMarker = value; }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(Aws::String&& value) { m_nextMarker = std::move(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline void SetNextMarker(const char* value) { m_nextMarker.assign(value); }

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListCodeSigningConfigsResult& WithNextMarker(const Aws::String& value) { SetNextMarker(value); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListCodeSigningConfigsResult& WithNextMarker(Aws::String&& value) { SetNextMarker(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline ListCodeSigningConfigsResult& WithNextMarker(const char* value) { SetNextMarker(value); return *this;}


    /**
     * <p>The code signing configurations</p>
     */
    inline const Aws::Vector<CodeSigningConfig>& GetCodeSigningConfigs() const{ return m_codeSigningConfigs; }

    /**
     * <p>The code signing configurations</p>
     */
    inline void SetCodeSigningConfigs(const Aws::Vector<CodeSigningConfig>& value) { m_codeSigningConfigs = value; }

    /**
     * <p>The code signing configurations</p>
     */
    inline void SetCodeSigningConfigs(Aws::Vector<CodeSigningConfig>&& value) { m_codeSigningConfigs = std::move(value); }

    /**
     * <p>The code signing configurations</p>
     */
    inline ListCodeSigningConfigsResult& WithCodeSigningConfigs(const Aws::Vector<CodeSigningConfig>& value) { SetCodeSigningConfigs(value); return *this;}

    /**
     * <p>The code signing configurations</p>
     */
    inline ListCodeSigningConfigsResult& WithCodeSigningConfigs(Aws::Vector<CodeSigningConfig>&& value) { SetCodeSigningConfigs(std::move(value)); return *this;}

    /**
     * <p>The code signing configurations</p>
     */
    inline ListCodeSigningConfigsResult& AddCodeSigningConfigs(const CodeSigningConfig& value) { m_codeSigningConfigs.push_back(value); return *this; }

    /**
     * <p>The code signing configurations</p>
     */
    inline ListCodeSigningConfigsResult& AddCodeSigningConfigs(CodeSigningConfig&& value) { m_codeSigningConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextMarker;

    Aws::Vector<CodeSigningConfig> m_codeSigningConfigs;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
