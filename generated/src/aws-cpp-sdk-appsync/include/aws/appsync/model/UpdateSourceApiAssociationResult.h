﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/appsync/model/SourceApiAssociation.h>
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
  class UpdateSourceApiAssociationResult
  {
  public:
    AWS_APPSYNC_API UpdateSourceApiAssociationResult() = default;
    AWS_APPSYNC_API UpdateSourceApiAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSYNC_API UpdateSourceApiAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>SourceApiAssociation</code> object data.</p>
     */
    inline const SourceApiAssociation& GetSourceApiAssociation() const { return m_sourceApiAssociation; }
    template<typename SourceApiAssociationT = SourceApiAssociation>
    void SetSourceApiAssociation(SourceApiAssociationT&& value) { m_sourceApiAssociationHasBeenSet = true; m_sourceApiAssociation = std::forward<SourceApiAssociationT>(value); }
    template<typename SourceApiAssociationT = SourceApiAssociation>
    UpdateSourceApiAssociationResult& WithSourceApiAssociation(SourceApiAssociationT&& value) { SetSourceApiAssociation(std::forward<SourceApiAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateSourceApiAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    SourceApiAssociation m_sourceApiAssociation;
    bool m_sourceApiAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
