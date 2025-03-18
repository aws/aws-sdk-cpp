/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appsync/model/AssociationStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an <code>ApiAssociation</code> object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ApiAssociation">AWS
   * API Reference</a></p>
   */
  class ApiAssociation
  {
  public:
    AWS_APPSYNC_API ApiAssociation() = default;
    AWS_APPSYNC_API ApiAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API ApiAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ApiAssociation& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    ApiAssociation& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the status of an association.</p> <ul> <li> <p> <b>PROCESSING</b>:
     * The API association is being created. You cannot modify association requests
     * during processing.</p> </li> <li> <p> <b>SUCCESS</b>: The API association was
     * successful. You can modify associations after success.</p> </li> <li> <p>
     * <b>FAILED</b>: The API association has failed. You can modify associations after
     * failure.</p> </li> </ul>
     */
    inline AssociationStatus GetAssociationStatus() const { return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(AssociationStatus value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline ApiAssociation& WithAssociationStatus(AssociationStatus value) { SetAssociationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the last deployment status.</p>
     */
    inline const Aws::String& GetDeploymentDetail() const { return m_deploymentDetail; }
    inline bool DeploymentDetailHasBeenSet() const { return m_deploymentDetailHasBeenSet; }
    template<typename DeploymentDetailT = Aws::String>
    void SetDeploymentDetail(DeploymentDetailT&& value) { m_deploymentDetailHasBeenSet = true; m_deploymentDetail = std::forward<DeploymentDetailT>(value); }
    template<typename DeploymentDetailT = Aws::String>
    ApiAssociation& WithDeploymentDetail(DeploymentDetailT&& value) { SetDeploymentDetail(std::forward<DeploymentDetailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    AssociationStatus m_associationStatus{AssociationStatus::NOT_SET};
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_deploymentDetail;
    bool m_deploymentDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
