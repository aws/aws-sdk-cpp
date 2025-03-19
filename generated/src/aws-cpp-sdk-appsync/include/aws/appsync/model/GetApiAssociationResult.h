/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/ApiAssociation.h>
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
namespace AppSync
{
namespace Model
{
  class GetApiAssociationResult
  {
  public:
    AWS_APPSYNC_API GetApiAssociationResult() = default;
    AWS_APPSYNC_API GetApiAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API GetApiAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>ApiAssociation</code> object.</p>
     */
    inline const ApiAssociation& GetApiAssociation() const { return m_apiAssociation; }
    template<typename ApiAssociationT = ApiAssociation>
    void SetApiAssociation(ApiAssociationT&& value) { m_apiAssociationHasBeenSet = true; m_apiAssociation = std::forward<ApiAssociationT>(value); }
    template<typename ApiAssociationT = ApiAssociation>
    GetApiAssociationResult& WithApiAssociation(ApiAssociationT&& value) { SetApiAssociation(std::forward<ApiAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApiAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApiAssociation m_apiAssociation;
    bool m_apiAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
