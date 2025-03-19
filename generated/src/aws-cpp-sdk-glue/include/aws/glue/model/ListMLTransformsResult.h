/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class ListMLTransformsResult
  {
  public:
    AWS_GLUE_API ListMLTransformsResult() = default;
    AWS_GLUE_API ListMLTransformsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API ListMLTransformsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifiers of all the machine learning transforms in the account, or the
     * machine learning transforms with the specified tags.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransformIds() const { return m_transformIds; }
    template<typename TransformIdsT = Aws::Vector<Aws::String>>
    void SetTransformIds(TransformIdsT&& value) { m_transformIdsHasBeenSet = true; m_transformIds = std::forward<TransformIdsT>(value); }
    template<typename TransformIdsT = Aws::Vector<Aws::String>>
    ListMLTransformsResult& WithTransformIds(TransformIdsT&& value) { SetTransformIds(std::forward<TransformIdsT>(value)); return *this;}
    template<typename TransformIdsT = Aws::String>
    ListMLTransformsResult& AddTransformIds(TransformIdsT&& value) { m_transformIdsHasBeenSet = true; m_transformIds.emplace_back(std::forward<TransformIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A continuation token, if the returned list does not contain the last metric
     * available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMLTransformsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMLTransformsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_transformIds;
    bool m_transformIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
