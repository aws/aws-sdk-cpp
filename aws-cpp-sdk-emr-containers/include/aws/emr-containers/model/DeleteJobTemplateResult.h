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
  class DeleteJobTemplateResult
  {
  public:
    AWS_EMRCONTAINERS_API DeleteJobTemplateResult();
    AWS_EMRCONTAINERS_API DeleteJobTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMRCONTAINERS_API DeleteJobTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>This output contains the ID of the job template that was deleted.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>This output contains the ID of the job template that was deleted.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>This output contains the ID of the job template that was deleted.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>This output contains the ID of the job template that was deleted.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>This output contains the ID of the job template that was deleted.</p>
     */
    inline DeleteJobTemplateResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>This output contains the ID of the job template that was deleted.</p>
     */
    inline DeleteJobTemplateResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>This output contains the ID of the job template that was deleted.</p>
     */
    inline DeleteJobTemplateResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
