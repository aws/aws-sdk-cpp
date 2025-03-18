/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/EntityRecognizerProperties.h>
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
namespace Comprehend
{
namespace Model
{
  class ListEntityRecognizersResult
  {
  public:
    AWS_COMPREHEND_API ListEntityRecognizersResult() = default;
    AWS_COMPREHEND_API ListEntityRecognizersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COMPREHEND_API ListEntityRecognizersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of properties of an entity recognizer.</p>
     */
    inline const Aws::Vector<EntityRecognizerProperties>& GetEntityRecognizerPropertiesList() const { return m_entityRecognizerPropertiesList; }
    template<typename EntityRecognizerPropertiesListT = Aws::Vector<EntityRecognizerProperties>>
    void SetEntityRecognizerPropertiesList(EntityRecognizerPropertiesListT&& value) { m_entityRecognizerPropertiesListHasBeenSet = true; m_entityRecognizerPropertiesList = std::forward<EntityRecognizerPropertiesListT>(value); }
    template<typename EntityRecognizerPropertiesListT = Aws::Vector<EntityRecognizerProperties>>
    ListEntityRecognizersResult& WithEntityRecognizerPropertiesList(EntityRecognizerPropertiesListT&& value) { SetEntityRecognizerPropertiesList(std::forward<EntityRecognizerPropertiesListT>(value)); return *this;}
    template<typename EntityRecognizerPropertiesListT = EntityRecognizerProperties>
    ListEntityRecognizersResult& AddEntityRecognizerPropertiesList(EntityRecognizerPropertiesListT&& value) { m_entityRecognizerPropertiesListHasBeenSet = true; m_entityRecognizerPropertiesList.emplace_back(std::forward<EntityRecognizerPropertiesListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Identifies the next page of results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEntityRecognizersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEntityRecognizersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EntityRecognizerProperties> m_entityRecognizerPropertiesList;
    bool m_entityRecognizerPropertiesListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
