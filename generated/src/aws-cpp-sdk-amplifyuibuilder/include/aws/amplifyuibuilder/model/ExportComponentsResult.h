/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/Component.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{
  class ExportComponentsResult
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ExportComponentsResult() = default;
    AWS_AMPLIFYUIBUILDER_API ExportComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AMPLIFYUIBUILDER_API ExportComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the configuration of the exported components.</p>
     */
    inline const Aws::Vector<Component>& GetEntities() const { return m_entities; }
    template<typename EntitiesT = Aws::Vector<Component>>
    void SetEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities = std::forward<EntitiesT>(value); }
    template<typename EntitiesT = Aws::Vector<Component>>
    ExportComponentsResult& WithEntities(EntitiesT&& value) { SetEntities(std::forward<EntitiesT>(value)); return *this;}
    template<typename EntitiesT = Component>
    ExportComponentsResult& AddEntities(EntitiesT&& value) { m_entitiesHasBeenSet = true; m_entities.emplace_back(std::forward<EntitiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that's included if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ExportComponentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExportComponentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Component> m_entities;
    bool m_entitiesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
