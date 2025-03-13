/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/PublicKey.h>
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
namespace CloudTrail
{
namespace Model
{
  /**
   * <p>Returns the objects or data listed below if successful. Otherwise, returns an
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/ListPublicKeysResponse">AWS
   * API Reference</a></p>
   */
  class ListPublicKeysResult
  {
  public:
    AWS_CLOUDTRAIL_API ListPublicKeysResult() = default;
    AWS_CLOUDTRAIL_API ListPublicKeysResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListPublicKeysResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains an array of PublicKey objects.</p>  <p>The returned public
     * keys may have validity time ranges that overlap.</p> 
     */
    inline const Aws::Vector<PublicKey>& GetPublicKeyList() const { return m_publicKeyList; }
    template<typename PublicKeyListT = Aws::Vector<PublicKey>>
    void SetPublicKeyList(PublicKeyListT&& value) { m_publicKeyListHasBeenSet = true; m_publicKeyList = std::forward<PublicKeyListT>(value); }
    template<typename PublicKeyListT = Aws::Vector<PublicKey>>
    ListPublicKeysResult& WithPublicKeyList(PublicKeyListT&& value) { SetPublicKeyList(std::forward<PublicKeyListT>(value)); return *this;}
    template<typename PublicKeyListT = PublicKey>
    ListPublicKeysResult& AddPublicKeyList(PublicKeyListT&& value) { m_publicKeyListHasBeenSet = true; m_publicKeyList.emplace_back(std::forward<PublicKeyListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPublicKeysResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPublicKeysResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PublicKey> m_publicKeyList;
    bool m_publicKeyListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
