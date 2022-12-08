/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/Service.h>
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
namespace AppRunner
{
namespace Model
{
  class UpdateServiceResult
  {
  public:
    AWS_APPRUNNER_API UpdateServiceResult();
    AWS_APPRUNNER_API UpdateServiceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPRUNNER_API UpdateServiceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of the App Runner service updated by this request. All
     * configuration values in the returned <code>Service</code> structure reflect
     * configuration changes that are being applied by this request.</p>
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * <p>A description of the App Runner service updated by this request. All
     * configuration values in the returned <code>Service</code> structure reflect
     * configuration changes that are being applied by this request.</p>
     */
    inline void SetService(const Service& value) { m_service = value; }

    /**
     * <p>A description of the App Runner service updated by this request. All
     * configuration values in the returned <code>Service</code> structure reflect
     * configuration changes that are being applied by this request.</p>
     */
    inline void SetService(Service&& value) { m_service = std::move(value); }

    /**
     * <p>A description of the App Runner service updated by this request. All
     * configuration values in the returned <code>Service</code> structure reflect
     * configuration changes that are being applied by this request.</p>
     */
    inline UpdateServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * <p>A description of the App Runner service updated by this request. All
     * configuration values in the returned <code>Service</code> structure reflect
     * configuration changes that are being applied by this request.</p>
     */
    inline UpdateServiceResult& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }

    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }

    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }

    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline UpdateServiceResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline UpdateServiceResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the asynchronous operation that this request started. You
     * can use it combined with the <a>ListOperations</a> call to track the operation's
     * progress.</p>
     */
    inline UpdateServiceResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}

  private:

    Service m_service;

    Aws::String m_operationId;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
