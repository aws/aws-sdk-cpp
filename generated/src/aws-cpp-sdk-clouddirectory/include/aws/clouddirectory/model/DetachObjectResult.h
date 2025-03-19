/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class DetachObjectResult
  {
  public:
    AWS_CLOUDDIRECTORY_API DetachObjectResult() = default;
    AWS_CLOUDDIRECTORY_API DetachObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API DetachObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ObjectIdentifier</code> that was detached from the object.</p>
     */
    inline const Aws::String& GetDetachedObjectIdentifier() const { return m_detachedObjectIdentifier; }
    template<typename DetachedObjectIdentifierT = Aws::String>
    void SetDetachedObjectIdentifier(DetachedObjectIdentifierT&& value) { m_detachedObjectIdentifierHasBeenSet = true; m_detachedObjectIdentifier = std::forward<DetachedObjectIdentifierT>(value); }
    template<typename DetachedObjectIdentifierT = Aws::String>
    DetachObjectResult& WithDetachedObjectIdentifier(DetachedObjectIdentifierT&& value) { SetDetachedObjectIdentifier(std::forward<DetachedObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetachObjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detachedObjectIdentifier;
    bool m_detachedObjectIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
