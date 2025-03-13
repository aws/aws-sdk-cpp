/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
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
namespace finspace
{
namespace Model
{
  class GetKxConnectionStringResult
  {
  public:
    AWS_FINSPACE_API GetKxConnectionStringResult() = default;
    AWS_FINSPACE_API GetKxConnectionStringResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API GetKxConnectionStringResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The signed connection string that you can use to connect to clusters.</p>
     */
    inline const Aws::String& GetSignedConnectionString() const { return m_signedConnectionString; }
    template<typename SignedConnectionStringT = Aws::String>
    void SetSignedConnectionString(SignedConnectionStringT&& value) { m_signedConnectionStringHasBeenSet = true; m_signedConnectionString = std::forward<SignedConnectionStringT>(value); }
    template<typename SignedConnectionStringT = Aws::String>
    GetKxConnectionStringResult& WithSignedConnectionString(SignedConnectionStringT&& value) { SetSignedConnectionString(std::forward<SignedConnectionStringT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetKxConnectionStringResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_signedConnectionString;
    bool m_signedConnectionStringHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
