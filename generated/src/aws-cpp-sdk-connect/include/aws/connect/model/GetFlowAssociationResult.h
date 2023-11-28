/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/FlowAssociationResourceType.h>
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
namespace Connect
{
namespace Model
{
  class GetFlowAssociationResult
  {
  public:
    AWS_CONNECT_API GetFlowAssociationResult();
    AWS_CONNECT_API GetFlowAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API GetFlowAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * <p>The identifier of the resource.</p>
     */
    inline GetFlowAssociationResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline GetFlowAssociationResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the resource.</p>
     */
    inline GetFlowAssociationResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowId() const{ return m_flowId; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetFlowId(const Aws::String& value) { m_flowId = value; }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetFlowId(Aws::String&& value) { m_flowId = std::move(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline void SetFlowId(const char* value) { m_flowId.assign(value); }

    /**
     * <p>The identifier of the flow.</p>
     */
    inline GetFlowAssociationResult& WithFlowId(const Aws::String& value) { SetFlowId(value); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline GetFlowAssociationResult& WithFlowId(Aws::String&& value) { SetFlowId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the flow.</p>
     */
    inline GetFlowAssociationResult& WithFlowId(const char* value) { SetFlowId(value); return *this;}


    /**
     * <p>A valid resource type.</p>
     */
    inline const FlowAssociationResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>A valid resource type.</p>
     */
    inline void SetResourceType(const FlowAssociationResourceType& value) { m_resourceType = value; }

    /**
     * <p>A valid resource type.</p>
     */
    inline void SetResourceType(FlowAssociationResourceType&& value) { m_resourceType = std::move(value); }

    /**
     * <p>A valid resource type.</p>
     */
    inline GetFlowAssociationResult& WithResourceType(const FlowAssociationResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>A valid resource type.</p>
     */
    inline GetFlowAssociationResult& WithResourceType(FlowAssociationResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFlowAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFlowAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFlowAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_resourceId;

    Aws::String m_flowId;

    FlowAssociationResourceType m_resourceType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
