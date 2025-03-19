/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ApplicationFleetAssociation.h>
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
  class AssociateApplicationFleetResult
  {
  public:
    AWS_APPSTREAM_API AssociateApplicationFleetResult() = default;
    AWS_APPSTREAM_API AssociateApplicationFleetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPSTREAM_API AssociateApplicationFleetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If fleet name is specified, this returns the list of applications that are
     * associated to it. If application ARN is specified, this returns the list of
     * fleets to which it is associated.</p>
     */
    inline const ApplicationFleetAssociation& GetApplicationFleetAssociation() const { return m_applicationFleetAssociation; }
    template<typename ApplicationFleetAssociationT = ApplicationFleetAssociation>
    void SetApplicationFleetAssociation(ApplicationFleetAssociationT&& value) { m_applicationFleetAssociationHasBeenSet = true; m_applicationFleetAssociation = std::forward<ApplicationFleetAssociationT>(value); }
    template<typename ApplicationFleetAssociationT = ApplicationFleetAssociation>
    AssociateApplicationFleetResult& WithApplicationFleetAssociation(ApplicationFleetAssociationT&& value) { SetApplicationFleetAssociation(std::forward<ApplicationFleetAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    AssociateApplicationFleetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ApplicationFleetAssociation m_applicationFleetAssociation;
    bool m_applicationFleetAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
