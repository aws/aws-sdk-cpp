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
  class DeleteWorkflowResult
  {
  public:
    AWS_GLUE_API DeleteWorkflowResult();
    AWS_GLUE_API DeleteWorkflowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API DeleteWorkflowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Name of the workflow specified in input.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of the workflow specified in input.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Name of the workflow specified in input.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Name of the workflow specified in input.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Name of the workflow specified in input.</p>
     */
    inline DeleteWorkflowResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of the workflow specified in input.</p>
     */
    inline DeleteWorkflowResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of the workflow specified in input.</p>
     */
    inline DeleteWorkflowResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
