/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/model/Job.h>
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
namespace DeviceFarm
{
namespace Model
{
  /**
   * <p>Represents the result of a get job request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/GetJobResult">AWS
   * API Reference</a></p>
   */
  class GetJobResult
  {
  public:
    AWS_DEVICEFARM_API GetJobResult();
    AWS_DEVICEFARM_API GetJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVICEFARM_API GetJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object that contains information about the requested job.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>An object that contains information about the requested job.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>An object that contains information about the requested job.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>An object that contains information about the requested job.</p>
     */
    inline GetJobResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>An object that contains information about the requested job.</p>
     */
    inline GetJobResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Job m_job;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
