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
    AWS_GLUE_API GetWorkflowRunPropertiesResult() = default;
    AWS_GLUE_API GetWorkflowRunPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetWorkflowRunPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The workflow run properties which were set during the specified run.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRunProperties() const { return m_runProperties; }
    template<typename RunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    void SetRunProperties(RunPropertiesT&& value) { m_runPropertiesHasBeenSet = true; m_runProperties = std::forward<RunPropertiesT>(value); }
    template<typename RunPropertiesT = Aws::Map<Aws::String, Aws::String>>
    GetWorkflowRunPropertiesResult& WithRunProperties(RunPropertiesT&& value) { SetRunProperties(std::forward<RunPropertiesT>(value)); return *this;}
    template<typename RunPropertiesKeyT = Aws::String, typename RunPropertiesValueT = Aws::String>
    GetWorkflowRunPropertiesResult& AddRunProperties(RunPropertiesKeyT&& key, RunPropertiesValueT&& value) {
      m_runPropertiesHasBeenSet = true; m_runProperties.emplace(std::forward<RunPropertiesKeyT>(key), std::forward<RunPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetWorkflowRunPropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_runProperties;
    bool m_runPropertiesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
