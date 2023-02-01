/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/Job.h>
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
namespace drs
{
namespace Model
{
  class StartFailbackLaunchResult
  {
  public:
    AWS_DRS_API StartFailbackLaunchResult();
    AWS_DRS_API StartFailbackLaunchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DRS_API StartFailbackLaunchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The failback launch Job.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>The failback launch Job.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>The failback launch Job.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>The failback launch Job.</p>
     */
    inline StartFailbackLaunchResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>The failback launch Job.</p>
     */
    inline StartFailbackLaunchResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Job m_job;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
