/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/Job.h>
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
namespace mgn
{
namespace Model
{
  class StartCutoverResult
  {
  public:
    AWS_MGN_API StartCutoverResult();
    AWS_MGN_API StartCutoverResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API StartCutoverResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Start Cutover Job response.</p>
     */
    inline const Job& GetJob() const{ return m_job; }

    /**
     * <p>Start Cutover Job response.</p>
     */
    inline void SetJob(const Job& value) { m_job = value; }

    /**
     * <p>Start Cutover Job response.</p>
     */
    inline void SetJob(Job&& value) { m_job = std::move(value); }

    /**
     * <p>Start Cutover Job response.</p>
     */
    inline StartCutoverResult& WithJob(const Job& value) { SetJob(value); return *this;}

    /**
     * <p>Start Cutover Job response.</p>
     */
    inline StartCutoverResult& WithJob(Job&& value) { SetJob(std::move(value)); return *this;}

  private:

    Job m_job;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
