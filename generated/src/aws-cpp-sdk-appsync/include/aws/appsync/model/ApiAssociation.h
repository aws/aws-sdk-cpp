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
    AWS_APPSYNC_API ApiAssociation();
    AWS_APPSYNC_API ApiAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API ApiAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The domain name.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline ApiAssociation& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ApiAssociation& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ApiAssociation& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API ID.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline ApiAssociation& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline ApiAssociation& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline ApiAssociation& WithApiId(const char* value) { SetApiId(value); return *this;}
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
    inline const AssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }
    inline void SetAssociationStatus(const AssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }
    inline void SetAssociationStatus(AssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }
    inline ApiAssociation& WithAssociationStatus(const AssociationStatus& value) { SetAssociationStatus(value); return *this;}
    inline ApiAssociation& WithAssociationStatus(AssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the last deployment status.</p>
     */
    inline const Aws::String& GetDeploymentDetail() const{ return m_deploymentDetail; }
    inline bool DeploymentDetailHasBeenSet() const { return m_deploymentDetailHasBeenSet; }
    inline void SetDeploymentDetail(const Aws::String& value) { m_deploymentDetailHasBeenSet = true; m_deploymentDetail = value; }
    inline void SetDeploymentDetail(Aws::String&& value) { m_deploymentDetailHasBeenSet = true; m_deploymentDetail = std::move(value); }
    inline void SetDeploymentDetail(const char* value) { m_deploymentDetailHasBeenSet = true; m_deploymentDetail.assign(value); }
    inline ApiAssociation& WithDeploymentDetail(const Aws::String& value) { SetDeploymentDetail(value); return *this;}
    inline ApiAssociation& WithDeploymentDetail(Aws::String&& value) { SetDeploymentDetail(std::move(value)); return *this;}
    inline ApiAssociation& WithDeploymentDetail(const char* value) { SetDeploymentDetail(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    AssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_deploymentDetail;
    bool m_deploymentDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
