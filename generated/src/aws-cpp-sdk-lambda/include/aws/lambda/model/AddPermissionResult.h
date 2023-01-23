/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
  class AddPermissionResult
  {
  public:
    AWS_LAMBDA_API AddPermissionResult();
    AWS_LAMBDA_API AddPermissionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAMBDA_API AddPermissionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The permission statement that's added to the function policy.</p>
     */
    inline const Aws::String& GetStatement() const{ return m_statement; }

    /**
     * <p>The permission statement that's added to the function policy.</p>
     */
    inline void SetStatement(const Aws::String& value) { m_statement = value; }

    /**
     * <p>The permission statement that's added to the function policy.</p>
     */
    inline void SetStatement(Aws::String&& value) { m_statement = std::move(value); }

    /**
     * <p>The permission statement that's added to the function policy.</p>
     */
    inline void SetStatement(const char* value) { m_statement.assign(value); }

    /**
     * <p>The permission statement that's added to the function policy.</p>
     */
    inline AddPermissionResult& WithStatement(const Aws::String& value) { SetStatement(value); return *this;}

    /**
     * <p>The permission statement that's added to the function policy.</p>
     */
    inline AddPermissionResult& WithStatement(Aws::String&& value) { SetStatement(std::move(value)); return *this;}

    /**
     * <p>The permission statement that's added to the function policy.</p>
     */
    inline AddPermissionResult& WithStatement(const char* value) { SetStatement(value); return *this;}

  private:

    Aws::String m_statement;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
