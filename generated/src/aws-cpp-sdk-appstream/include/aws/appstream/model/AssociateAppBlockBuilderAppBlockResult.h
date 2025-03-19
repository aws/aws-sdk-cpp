/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/AppBlockBuilderAppBlockAssociation.h>
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
namespace AppStream
{
namespace Model
{
  class AssociateAppBlockBuilderAppBlockResult
  {
  public:
    AWS_APPSTREAM_API AssociateAppBlockBuilderAppBlockResult() = default;
    AWS_APPSTREAM_API AssociateAppBlockBuilderAppBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API AssociateAppBlockBuilderAppBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of app block builders associated with app blocks.</p>
     */
    inline const AppBlockBuilderAppBlockAssociation& GetAppBlockBuilderAppBlockAssociation() const { return m_appBlockBuilderAppBlockAssociation; }
    template<typename AppBlockBuilderAppBlockAssociationT = AppBlockBuilderAppBlockAssociation>
    void SetAppBlockBuilderAppBlockAssociation(AppBlockBuilderAppBlockAssociationT&& value) { m_appBlockBuilderAppBlockAssociationHasBeenSet = true; m_appBlockBuilderAppBlockAssociation = std::forward<AppBlockBuilderAppBlockAssociationT>(value); }
    template<typename AppBlockBuilderAppBlockAssociationT = AppBlockBuilderAppBlockAssociation>
    AssociateAppBlockBuilderAppBlockResult& WithAppBlockBuilderAppBlockAssociation(AppBlockBuilderAppBlockAssociationT&& value) { SetAppBlockBuilderAppBlockAssociation(std::forward<AppBlockBuilderAppBlockAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateAppBlockBuilderAppBlockResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AppBlockBuilderAppBlockAssociation m_appBlockBuilderAppBlockAssociation;
    bool m_appBlockBuilderAppBlockAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
