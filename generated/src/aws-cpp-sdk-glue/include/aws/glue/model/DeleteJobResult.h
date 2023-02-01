/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{
  class DeleteJobResult
  {
  public:
    AWS_GLUE_API DeleteJobResult();
    AWS_GLUE_API DeleteJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the job definition that was deleted.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job definition that was deleted.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobName = value; }

    /**
     * <p>The name of the job definition that was deleted.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobName = std::move(value); }

    /**
     * <p>The name of the job definition that was deleted.</p>
     */
    inline void SetJobName(const char* value) { m_jobName.assign(value); }

    /**
     * <p>The name of the job definition that was deleted.</p>
     */
    inline DeleteJobResult& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job definition that was deleted.</p>
     */
    inline DeleteJobResult& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job definition that was deleted.</p>
     */
    inline DeleteJobResult& WithJobName(const char* value) { SetJobName(value); return *this;}

  private:

    Aws::String m_jobName;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
