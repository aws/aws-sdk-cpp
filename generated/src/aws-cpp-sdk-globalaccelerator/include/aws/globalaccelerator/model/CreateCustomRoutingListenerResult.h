/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/globalaccelerator/model/CustomRoutingListener.h>
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
  class CreateCustomRoutingListenerResult
  {
  public:
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingListenerResult();
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingListenerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLOBALACCELERATOR_API CreateCustomRoutingListenerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The listener that you've created for a custom routing accelerator.</p>
     */
    inline const CustomRoutingListener& GetListener() const{ return m_listener; }

    /**
     * <p>The listener that you've created for a custom routing accelerator.</p>
     */
    inline void SetListener(const CustomRoutingListener& value) { m_listener = value; }

    /**
     * <p>The listener that you've created for a custom routing accelerator.</p>
     */
    inline void SetListener(CustomRoutingListener&& value) { m_listener = std::move(value); }

    /**
     * <p>The listener that you've created for a custom routing accelerator.</p>
     */
    inline CreateCustomRoutingListenerResult& WithListener(const CustomRoutingListener& value) { SetListener(value); return *this;}

    /**
     * <p>The listener that you've created for a custom routing accelerator.</p>
     */
    inline CreateCustomRoutingListenerResult& WithListener(CustomRoutingListener&& value) { SetListener(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateCustomRoutingListenerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateCustomRoutingListenerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateCustomRoutingListenerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    CustomRoutingListener m_listener;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
