/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Job.h>
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
namespace Glue
{
namespace Model
{
  class GetJobResult
  {
  public:
    AWS_GLUE_API GetJobResult();
    AWS_GLUE_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested job definition.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>The requested job definition.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>The requested job definition.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>The requested job definition.</p>
     */
    inline GetJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>The requested job definition.</p>
     */
    inline GetJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Job m_job;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
