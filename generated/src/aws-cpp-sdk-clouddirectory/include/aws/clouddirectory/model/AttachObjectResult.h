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
  class AttachObjectResult
  {
  public:
    AWS_CLOUDDIRECTORY_API AttachObjectResult() = default;
    AWS_CLOUDDIRECTORY_API AttachObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API AttachObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The attached <code>ObjectIdentifier</code>, which is the child
     * <code>ObjectIdentifier</code>.</p>
     */
    inline const Aws::String& GetAttachedObjectIdentifier() const { return m_attachedObjectIdentifier; }
    template<typename AttachedObjectIdentifierT = Aws::String>
    void SetAttachedObjectIdentifier(AttachedObjectIdentifierT&& value) { m_attachedObjectIdentifierHasBeenSet = true; m_attachedObjectIdentifier = std::forward<AttachedObjectIdentifierT>(value); }
    template<typename AttachedObjectIdentifierT = Aws::String>
    AttachObjectResult& WithAttachedObjectIdentifier(AttachedObjectIdentifierT&& value) { SetAttachedObjectIdentifier(std::forward<AttachedObjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AttachObjectResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachedObjectIdentifier;
    bool m_attachedObjectIdentifierHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
