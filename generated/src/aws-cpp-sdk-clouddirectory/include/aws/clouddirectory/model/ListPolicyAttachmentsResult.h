/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class ListPolicyAttachmentsResult
  {
  public:
    AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsResult() = default;
    AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API ListPolicyAttachmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ObjectIdentifiers</code> to which the policy is attached.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectIdentifiers() const { return m_objectIdentifiers; }
    template<typename ObjectIdentifiersT = Aws::Vector<Aws::String>>
    void SetObjectIdentifiers(ObjectIdentifiersT&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers = std::forward<ObjectIdentifiersT>(value); }
    template<typename ObjectIdentifiersT = Aws::Vector<Aws::String>>
    ListPolicyAttachmentsResult& WithObjectIdentifiers(ObjectIdentifiersT&& value) { SetObjectIdentifiers(std::forward<ObjectIdentifiersT>(value)); return *this;}
    template<typename ObjectIdentifiersT = Aws::String>
    ListPolicyAttachmentsResult& AddObjectIdentifiers(ObjectIdentifiersT&& value) { m_objectIdentifiersHasBeenSet = true; m_objectIdentifiers.emplace_back(std::forward<ObjectIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPolicyAttachmentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPolicyAttachmentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_objectIdentifiers;
    bool m_objectIdentifiersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
