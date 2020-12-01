/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{
  class AWS_AMPLIFYBACKEND_API RemoveBackendConfigResult
  {
  public:
    RemoveBackendConfigResult();
    RemoveBackendConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RemoveBackendConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline void SetError(const Aws::String& value) { m_error = value; }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline void SetError(const char* value) { m_error.assign(value); }

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline RemoveBackendConfigResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline RemoveBackendConfigResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>If the request failed, this is the returned error.</p>
     */
    inline RemoveBackendConfigResult& WithError(const char* value) { SetError(value); return *this;}

  private:

    Aws::String m_error;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
