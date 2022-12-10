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
  class CancelJobRunResult
  {
  public:
    AWS_EMRCONTAINERS_API CancelJobRunResult();
    AWS_EMRCONTAINERS_API CancelJobRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API CancelJobRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline CancelJobRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline CancelJobRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The output contains the ID of the cancelled job run.</p>
     */
    inline CancelJobRunResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The output contains the virtual cluster ID for which the job run is
     * cancelled.</p>
     */
    inline const Aws::String& GetVirtualClusterId() const{ return m_virtualClusterId; }

    /**
     * <p>The output contains the virtual cluster ID for which the job run is
     * cancelled.</p>
     */
    inline void SetVirtualClusterId(const Aws::String& value) { m_virtualClusterId = value; }

    /**
     * <p>The output contains the virtual cluster ID for which the job run is
     * cancelled.</p>
     */
    inline void SetVirtualClusterId(Aws::String&& value) { m_virtualClusterId = std::move(value); }

    /**
     * <p>The output contains the virtual cluster ID for which the job run is
     * cancelled.</p>
     */
    inline void SetVirtualClusterId(const char* value) { m_virtualClusterId.assign(value); }

    /**
     * <p>The output contains the virtual cluster ID for which the job run is
     * cancelled.</p>
     */
    inline CancelJobRunResult& WithVirtualClusterId(const Aws::String& value) { SetVirtualClusterId(value); return *this;}

    /**
     * <p>The output contains the virtual cluster ID for which the job run is
     * cancelled.</p>
     */
    inline CancelJobRunResult& WithVirtualClusterId(Aws::String&& value) { SetVirtualClusterId(std::move(value)); return *this;}

    /**
     * <p>The output contains the virtual cluster ID for which the job run is
     * cancelled.</p>
     */
    inline CancelJobRunResult& WithVirtualClusterId(const char* value) { SetVirtualClusterId(value); return *this;}

  private:

    Aws::String m_id;

    Aws::String m_virtualClusterId;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
