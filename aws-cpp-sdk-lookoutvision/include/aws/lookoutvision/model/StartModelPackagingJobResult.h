/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
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
namespace LookoutforVision
{
namespace Model
{
  class StartModelPackagingJobResult
  {
  public:
    AWS_LOOKOUTFORVISION_API StartModelPackagingJobResult();
    AWS_LOOKOUTFORVISION_API StartModelPackagingJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API StartModelPackagingJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The job name for the model packaging job. If you don't supply a job name in
     * the <code>JobName</code> input parameter, the service creates a job name for
     * you. </p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The job name for the model packaging job. If you don't supply a job name in
     * the <code>JobName</code> input parameter, the service creates a job name for
     * you. </p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The job name for the model packaging job. If you don't supply a job name in
     * the <code>JobName</code> input parameter, the service creates a job name for
     * you. </p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The job name for the model packaging job. If you don't supply a job name in
     * the <code>JobName</code> input parameter, the service creates a job name for
     * you. </p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The job name for the model packaging job. If you don't supply a job name in
     * the <code>JobName</code> input parameter, the service creates a job name for
     * you. </p>
     */
    inline StartModelPackagingJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The job name for the model packaging job. If you don't supply a job name in
     * the <code>JobName</code> input parameter, the service creates a job name for
     * you. </p>
     */
    inline StartModelPackagingJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The job name for the model packaging job. If you don't supply a job name in
     * the <code>JobName</code> input parameter, the service creates a job name for
     * you. </p>
     */
    inline StartModelPackagingJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}

  private:

    Aws::String m_jobName;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
