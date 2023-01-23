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
  class CreateVirtualClusterResult
  {
  public:
    AWS_EMRCONTAINERS_API CreateVirtualClusterResult();
    AWS_EMRCONTAINERS_API CreateVirtualClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API CreateVirtualClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output contains the virtual cluster ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>This output contains the virtual cluster ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>This output contains the virtual cluster ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>This output contains the virtual cluster ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>This output contains the virtual cluster ID.</p>
     */
    inline CreateVirtualClusterResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>This output contains the virtual cluster ID.</p>
     */
    inline CreateVirtualClusterResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>This output contains the virtual cluster ID.</p>
     */
    inline CreateVirtualClusterResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>This output contains the name of the virtual cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>This output contains the name of the virtual cluster.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>This output contains the name of the virtual cluster.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>This output contains the name of the virtual cluster.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>This output contains the name of the virtual cluster.</p>
     */
    inline CreateVirtualClusterResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>This output contains the name of the virtual cluster.</p>
     */
    inline CreateVirtualClusterResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>This output contains the name of the virtual cluster.</p>
     */
    inline CreateVirtualClusterResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>This output contains the ARN of virtual cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>This output contains the ARN of virtual cluster.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>This output contains the ARN of virtual cluster.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>This output contains the ARN of virtual cluster.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>This output contains the ARN of virtual cluster.</p>
     */
    inline CreateVirtualClusterResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>This output contains the ARN of virtual cluster.</p>
     */
    inline CreateVirtualClusterResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>This output contains the ARN of virtual cluster.</p>
     */
    inline CreateVirtualClusterResult& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_name;

    Aws::String m_arn;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
