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
  class CreateLayoutResult
  {
  public:
    AWS_CONNECTCASES_API CreateLayoutResult() = default;
    AWS_CONNECTCASES_API CreateLayoutResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCASES_API CreateLayoutResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the newly created layout.</p>
     */
    inline const Aws::String& GetLayoutArn() const { return m_layoutArn; }
    template<typename LayoutArnT = Aws::String>
    void SetLayoutArn(LayoutArnT&& value) { m_layoutArnHasBeenSet = true; m_layoutArn = std::forward<LayoutArnT>(value); }
    template<typename LayoutArnT = Aws::String>
    CreateLayoutResult& WithLayoutArn(LayoutArnT&& value) { SetLayoutArn(std::forward<LayoutArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the layout.</p>
     */
    inline const Aws::String& GetLayoutId() const { return m_layoutId; }
    template<typename LayoutIdT = Aws::String>
    void SetLayoutId(LayoutIdT&& value) { m_layoutIdHasBeenSet = true; m_layoutId = std::forward<LayoutIdT>(value); }
    template<typename LayoutIdT = Aws::String>
    CreateLayoutResult& WithLayoutId(LayoutIdT&& value) { SetLayoutId(std::forward<LayoutIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateLayoutResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_layoutArn;
    bool m_layoutArnHasBeenSet = false;

    Aws::String m_layoutId;
    bool m_layoutIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
