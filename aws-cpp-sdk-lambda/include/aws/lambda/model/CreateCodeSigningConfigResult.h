﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
  class AWS_LAMBDA_API CreateCodeSigningConfigResult
  {
  public:
    CreateCodeSigningConfigResult();
    CreateCodeSigningConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateCodeSigningConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The code signing configuration.</p>
     */
    inline const CodeSigningConfig& GetCodeSigningConfig() const{ return m_codeSigningConfig; }

    /**
     * <p>The code signing configuration.</p>
     */
    inline void SetCodeSigningConfig(const CodeSigningConfig& value) { m_codeSigningConfig = value; }

    /**
     * <p>The code signing configuration.</p>
     */
    inline void SetCodeSigningConfig(CodeSigningConfig&& value) { m_codeSigningConfig = std::move(value); }

    /**
     * <p>The code signing configuration.</p>
     */
    inline CreateCodeSigningConfigResult& WithCodeSigningConfig(const CodeSigningConfig& value) { SetCodeSigningConfig(value); return *this;}

    /**
     * <p>The code signing configuration.</p>
     */
    inline CreateCodeSigningConfigResult& WithCodeSigningConfig(CodeSigningConfig&& value) { SetCodeSigningConfig(std::move(value)); return *this;}

  private:

    CodeSigningConfig m_codeSigningConfig;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
