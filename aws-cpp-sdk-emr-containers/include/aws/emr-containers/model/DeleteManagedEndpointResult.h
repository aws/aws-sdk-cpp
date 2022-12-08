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
  class DeleteManagedEndpointResult
  {
  public:
    AWS_EMRCONTAINERS_API DeleteManagedEndpointResult();
    AWS_EMRCONTAINERS_API DeleteManagedEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DeleteManagedEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output displays the ID of the managed endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The output displays the ID of the managed endpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The output displays the ID of the managed endpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The output displays the ID of the managed endpoint.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The output displays the ID of the managed endpoint.</p>
     */
    inline DeleteManagedEndpointResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The output displays the ID of the managed endpoint.</p>
     */
    inline DeleteManagedEndpointResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The output displays the ID of the managed endpoint.</p>
     */
    inline DeleteManagedEndpointResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The output displays the ID of the endpoint's virtual cluster.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The output displays the ID of the endpoint's virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterId = value; }

    /**
     * <p>The output displays the ID of the endpoint's virtual cluster.</p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterId = std::move(value); }

    /**
     * <p>The output displays the ID of the endpoint's virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterId.assign(value); }

    /**
     * <p>The output displays the ID of the endpoint's virtual cluster.</p>
     */
    inline DeleteManagedEndpointResult& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The output displays the ID of the endpoint's virtual cluster.</p>
     */
    inline DeleteManagedEndpointResult& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The output displays the ID of the endpoint's virtual cluster.</p>
     */
    inline DeleteManagedEndpointResult& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_virtualClusterId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
