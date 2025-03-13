/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreatePersistentContactAssociationResult
  {
  public:
    AWS_CONNECT_API CreatePersistentContactAssociationResult() = default;
    AWS_CONNECT_API CreatePersistentContactAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreatePersistentContactAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The contactId from which a persistent chat session is started. This field is
     * populated only for persistent chat.</p>
     */
    inline const Aws::String& GetContinuedFromContactId() const { return m_continuedFromContactId; }
    template<typename ContinuedFromContactIdT = Aws::String>
    void SetContinuedFromContactId(ContinuedFromContactIdT&& value) { m_continuedFromContactIdHasBeenSet = true; m_continuedFromContactId = std::forward<ContinuedFromContactIdT>(value); }
    template<typename ContinuedFromContactIdT = Aws::String>
    CreatePersistentContactAssociationResult& WithContinuedFromContactId(ContinuedFromContactIdT&& value) { SetContinuedFromContactId(std::forward<ContinuedFromContactIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreatePersistentContactAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_continuedFromContactId;
    bool m_continuedFromContactIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
