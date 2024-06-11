/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
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
namespace EMRContainers
{
namespace Model
{
  class CreateManagedEndpointResult
  {
  public:
    AWS_EMRCONTAINERS_API CreateManagedEndpointResult();
    AWS_EMRCONTAINERS_API CreateManagedEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API CreateManagedEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline CreateManagedEndpointResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CreateManagedEndpointResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CreateManagedEndpointResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline CreateManagedEndpointResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateManagedEndpointResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateManagedEndpointResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateManagedEndpointResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateManagedEndpointResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateManagedEndpointResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterId = value; }
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterId = std::move(value); }
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterId.assign(value); }
    inline CreateManagedEndpointResult& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}
    inline CreateManagedEndpointResult& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}
    inline CreateManagedEndpointResult& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateManagedEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateManagedEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateManagedEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_virtualClusterId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
