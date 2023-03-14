/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/Listener.h>
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
namespace GlobalAccelerator
{
namespace Model
{
  class CreateListenerResult
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateListenerResult();
    AWS_GLOBALACCELERATOR_API CreateListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API CreateListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The listener that you've created.</p>
     */
    inline const Listener& GetListener() const{ return m_listener; }

    /**
     * <p>The listener that you've created.</p>
     */
    inline void SetListener(const Listener& value) { m_listener = value; }

    /**
     * <p>The listener that you've created.</p>
     */
    inline void SetListener(Listener&& value) { m_listener = std::move(value); }

    /**
     * <p>The listener that you've created.</p>
     */
    inline CreateListenerResult& WithListener(const Listener& value) { SetListener(value); return *this;}

    /**
     * <p>The listener that you've created.</p>
     */
    inline CreateListenerResult& WithListener(Listener&& value) { SetListener(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateListenerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateListenerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateListenerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Listener m_listener;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
