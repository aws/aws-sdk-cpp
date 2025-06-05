/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
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
namespace KMS
{
namespace Model
{
  class CreateGrantResult
  {
  public:
    AWS_KMS_API CreateGrantResult() = default;
    AWS_KMS_API CreateGrantResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KMS_API CreateGrantResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The grant token.</p> <p>Use a grant token when your permission to call this
     * operation comes from a new grant that has not yet achieved <i>eventual
     * consistency</i>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/grants.html#grant_token">Grant
     * token</a> and <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/using-grant-token.html">Using
     * a grant token</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetGrantToken() const { return m_grantToken; }
    template<typename GrantTokenT = Aws::String>
    void SetGrantToken(GrantTokenT&& value) { m_grantTokenHasBeenSet = true; m_grantToken = std::forward<GrantTokenT>(value); }
    template<typename GrantTokenT = Aws::String>
    CreateGrantResult& WithGrantToken(GrantTokenT&& value) { SetGrantToken(std::forward<GrantTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the grant.</p> <p>You can use the
     * <code>GrantId</code> in a <a>ListGrants</a>, <a>RetireGrant</a>, or
     * <a>RevokeGrant</a> operation.</p>
     */
    inline const Aws::String& GetGrantId() const { return m_grantId; }
    template<typename GrantIdT = Aws::String>
    void SetGrantId(GrantIdT&& value) { m_grantIdHasBeenSet = true; m_grantId = std::forward<GrantIdT>(value); }
    template<typename GrantIdT = Aws::String>
    CreateGrantResult& WithGrantId(GrantIdT&& value) { SetGrantId(std::forward<GrantIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGrantResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_grantToken;
    bool m_grantTokenHasBeenSet = false;

    Aws::String m_grantId;
    bool m_grantIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
