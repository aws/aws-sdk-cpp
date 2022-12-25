/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/FunctionConfiguration.h>
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
namespace AppSync
{
namespace Model
{
  class GetFunctionResult
  {
  public:
    AWS_APPSYNC_API GetFunctionResult();
    AWS_APPSYNC_API GetFunctionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetFunctionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline const FunctionConfiguration& GetFunctionConfiguration() const{ return m_functionConfiguration; }

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline void SetFunctionConfiguration(const FunctionConfiguration& value) { m_functionConfiguration = value; }

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline void SetFunctionConfiguration(FunctionConfiguration&& value) { m_functionConfiguration = std::move(value); }

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline GetFunctionResult& WithFunctionConfiguration(const FunctionConfiguration& value) { SetFunctionConfiguration(value); return *this;}

    /**
     * <p>The <code>Function</code> object.</p>
     */
    inline GetFunctionResult& WithFunctionConfiguration(FunctionConfiguration&& value) { SetFunctionConfiguration(std::move(value)); return *this;}

  private:

    FunctionConfiguration m_functionConfiguration;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
