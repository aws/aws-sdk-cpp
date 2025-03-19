/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CustomEntityType.h>
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
  class ListCustomEntityTypesResult
  {
  public:
    AWS_GLUE_API ListCustomEntityTypesResult() = default;
    AWS_GLUE_API ListCustomEntityTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListCustomEntityTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>CustomEntityType</code> objects representing custom
     * patterns.</p>
     */
    inline const Aws::Vector<CustomEntityType>& GetCustomEntityTypes() const { return m_customEntityTypes; }
    template<typename CustomEntityTypesT = Aws::Vector<CustomEntityType>>
    void SetCustomEntityTypes(CustomEntityTypesT&& value) { m_customEntityTypesHasBeenSet = true; m_customEntityTypes = std::forward<CustomEntityTypesT>(value); }
    template<typename CustomEntityTypesT = Aws::Vector<CustomEntityType>>
    ListCustomEntityTypesResult& WithCustomEntityTypes(CustomEntityTypesT&& value) { SetCustomEntityTypes(std::forward<CustomEntityTypesT>(value)); return *this;}
    template<typename CustomEntityTypesT = CustomEntityType>
    ListCustomEntityTypesResult& AddCustomEntityTypes(CustomEntityTypesT&& value) { m_customEntityTypesHasBeenSet = true; m_customEntityTypes.emplace_back(std::forward<CustomEntityTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token, if more results are available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomEntityTypesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomEntityTypesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CustomEntityType> m_customEntityTypes;
    bool m_customEntityTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
