/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetWorkflowRunPropertiesResult
  {
  public:
    AWS_GLUE_API GetWorkflowRunPropertiesResult();
    AWS_GLUE_API GetWorkflowRunPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetWorkflowRunPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRunProperties() const{ return m_runProperties; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline void SetRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { m_runProperties = value; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline void SetRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { m_runProperties = std::move(value); }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& WithRunProperties(const Aws::Map<Aws::String, Aws::String>& value) { SetRunProperties(value); return *this;}

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& WithRunProperties(Aws::Map<Aws::String, Aws::String>&& value) { SetRunProperties(std::move(value)); return *this;}

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& AddRunProperties(const Aws::String& key, const Aws::String& value) { m_runProperties.emplace(key, value); return *this; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& AddRunProperties(Aws::String&& key, const Aws::String& value) { m_runProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& AddRunProperties(const Aws::String& key, Aws::String&& value) { m_runProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& AddRunProperties(Aws::String&& key, Aws::String&& value) { m_runProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& AddRunProperties(const char* key, Aws::String&& value) { m_runProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& AddRunProperties(Aws::String&& key, const char* value) { m_runProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline GetWorkflowRunPropertiesResult& AddRunProperties(const char* key, const char* value) { m_runProperties.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_runProperties;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
