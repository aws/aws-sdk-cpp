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


    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The output contains the ID of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The output contains the name of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The output contains the ARN of the managed endpoint.</p>
     */
    inline CreateManagedEndpointResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterId = value; }

    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterId = std::move(value); }

    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterId.assign(value); }

    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline CreateManagedEndpointResult& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline CreateManagedEndpointResult& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The output contains the ID of the virtual cluster.</p>
     */
    inline CreateManagedEndpointResult& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;

    Aws::String m_virtualClusterId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
