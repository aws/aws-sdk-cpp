/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{
  class CreateRelatedItemResult
  {
  public:
    AWS_CONNECTCASES_API CreateRelatedItemResult() = default;
    AWS_CONNECTCASES_API CreateRelatedItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateRelatedItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the related item.</p>
     */
    inline const Aws::String& GetRelatedItemArn() const { return m_relatedItemArn; }
    template<typename RelatedItemArnT = Aws::String>
    void SetRelatedItemArn(RelatedItemArnT&& value) { m_relatedItemArnHasBeenSet = true; m_relatedItemArn = std::forward<RelatedItemArnT>(value); }
    template<typename RelatedItemArnT = Aws::String>
    CreateRelatedItemResult& WithRelatedItemArn(RelatedItemArnT&& value) { SetRelatedItemArn(std::forward<RelatedItemArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the related item.</p>
     */
    inline const Aws::String& GetRelatedItemId() const { return m_relatedItemId; }
    template<typename RelatedItemIdT = Aws::String>
    void SetRelatedItemId(RelatedItemIdT&& value) { m_relatedItemIdHasBeenSet = true; m_relatedItemId = std::forward<RelatedItemIdT>(value); }
    template<typename RelatedItemIdT = Aws::String>
    CreateRelatedItemResult& WithRelatedItemId(RelatedItemIdT&& value) { SetRelatedItemId(std::forward<RelatedItemIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateRelatedItemResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_relatedItemArn;
    bool m_relatedItemArnHasBeenSet = false;

    Aws::String m_relatedItemId;
    bool m_relatedItemIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
