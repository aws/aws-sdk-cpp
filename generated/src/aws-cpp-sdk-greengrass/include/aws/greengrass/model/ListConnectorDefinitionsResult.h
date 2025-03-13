/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DefinitionInformation.h>
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
namespace Greengrass
{
namespace Model
{
  class ListConnectorDefinitionsResult
  {
  public:
    AWS_GREENGRASS_API ListConnectorDefinitionsResult() = default;
    AWS_GREENGRASS_API ListConnectorDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListConnectorDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * Information about a definition.
     */
    inline const Aws::Vector<DefinitionInformation>& GetDefinitions() const { return m_definitions; }
    template<typename DefinitionsT = Aws::Vector<DefinitionInformation>>
    void SetDefinitions(DefinitionsT&& value) { m_definitionsHasBeenSet = true; m_definitions = std::forward<DefinitionsT>(value); }
    template<typename DefinitionsT = Aws::Vector<DefinitionInformation>>
    ListConnectorDefinitionsResult& WithDefinitions(DefinitionsT&& value) { SetDefinitions(std::forward<DefinitionsT>(value)); return *this;}
    template<typename DefinitionsT = DefinitionInformation>
    ListConnectorDefinitionsResult& AddDefinitions(DefinitionsT&& value) { m_definitionsHasBeenSet = true; m_definitions.emplace_back(std::forward<DefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListConnectorDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListConnectorDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DefinitionInformation> m_definitions;
    bool m_definitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
