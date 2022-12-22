/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/redshift/model/AuthorizationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes an endpoint authorization for authorizing Redshift-managed VPC
   * endpoint access to a cluster across Amazon Web Services accounts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EndpointAuthorization">AWS
   * API Reference</a></p>
   */
  class EndpointAuthorization
  {
  public:
    AWS_REDSHIFT_API EndpointAuthorization();
    AWS_REDSHIFT_API EndpointAuthorization(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API EndpointAuthorization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline const Aws::String& GetGrantor() const{ return m_grantor; }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline bool GrantorHasBeenSet() const { return m_grantorHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline void SetGrantor(const Aws::String& value) { m_grantorHasBeenSet = true; m_grantor = value; }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline void SetGrantor(Aws::String&& value) { m_grantorHasBeenSet = true; m_grantor = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline void SetGrantor(const char* value) { m_grantorHasBeenSet = true; m_grantor.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline EndpointAuthorization& WithGrantor(const Aws::String& value) { SetGrantor(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline EndpointAuthorization& WithGrantor(Aws::String&& value) { SetGrantor(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the cluster owner.</p>
     */
    inline EndpointAuthorization& WithGrantor(const char* value) { SetGrantor(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline const Aws::String& GetGrantee() const{ return m_grantee; }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline bool GranteeHasBeenSet() const { return m_granteeHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline void SetGrantee(const Aws::String& value) { m_granteeHasBeenSet = true; m_grantee = value; }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline void SetGrantee(Aws::String&& value) { m_granteeHasBeenSet = true; m_grantee = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline void SetGrantee(const char* value) { m_granteeHasBeenSet = true; m_grantee.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline EndpointAuthorization& WithGrantee(const Aws::String& value) { SetGrantee(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline EndpointAuthorization& WithGrantee(Aws::String&& value) { SetGrantee(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the grantee of the cluster.</p>
     */
    inline EndpointAuthorization& WithGrantee(const char* value) { SetGrantee(value); return *this;}


    /**
     * <p>The cluster identifier.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier.</p>
     */
    inline EndpointAuthorization& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier.</p>
     */
    inline EndpointAuthorization& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier.</p>
     */
    inline EndpointAuthorization& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetAuthorizeTime() const{ return m_authorizeTime; }

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline bool AuthorizeTimeHasBeenSet() const { return m_authorizeTimeHasBeenSet; }

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline void SetAuthorizeTime(const Aws::Utils::DateTime& value) { m_authorizeTimeHasBeenSet = true; m_authorizeTime = value; }

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline void SetAuthorizeTime(Aws::Utils::DateTime&& value) { m_authorizeTimeHasBeenSet = true; m_authorizeTime = std::move(value); }

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline EndpointAuthorization& WithAuthorizeTime(const Aws::Utils::DateTime& value) { SetAuthorizeTime(value); return *this;}

    /**
     * <p>The time (UTC) when the authorization was created.</p>
     */
    inline EndpointAuthorization& WithAuthorizeTime(Aws::Utils::DateTime&& value) { SetAuthorizeTime(std::move(value)); return *this;}


    /**
     * <p>The status of the cluster.</p>
     */
    inline const Aws::String& GetClusterStatus() const{ return m_clusterStatus; }

    /**
     * <p>The status of the cluster.</p>
     */
    inline bool ClusterStatusHasBeenSet() const { return m_clusterStatusHasBeenSet; }

    /**
     * <p>The status of the cluster.</p>
     */
    inline void SetClusterStatus(const Aws::String& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = value; }

    /**
     * <p>The status of the cluster.</p>
     */
    inline void SetClusterStatus(Aws::String&& value) { m_clusterStatusHasBeenSet = true; m_clusterStatus = std::move(value); }

    /**
     * <p>The status of the cluster.</p>
     */
    inline void SetClusterStatus(const char* value) { m_clusterStatusHasBeenSet = true; m_clusterStatus.assign(value); }

    /**
     * <p>The status of the cluster.</p>
     */
    inline EndpointAuthorization& WithClusterStatus(const Aws::String& value) { SetClusterStatus(value); return *this;}

    /**
     * <p>The status of the cluster.</p>
     */
    inline EndpointAuthorization& WithClusterStatus(Aws::String&& value) { SetClusterStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the cluster.</p>
     */
    inline EndpointAuthorization& WithClusterStatus(const char* value) { SetClusterStatus(value); return *this;}


    /**
     * <p>The status of the authorization action.</p>
     */
    inline const AuthorizationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the authorization action.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the authorization action.</p>
     */
    inline void SetStatus(const AuthorizationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the authorization action.</p>
     */
    inline void SetStatus(AuthorizationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the authorization action.</p>
     */
    inline EndpointAuthorization& WithStatus(const AuthorizationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the authorization action.</p>
     */
    inline EndpointAuthorization& WithStatus(AuthorizationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline bool GetAllowedAllVPCs() const{ return m_allowedAllVPCs; }

    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline bool AllowedAllVPCsHasBeenSet() const { return m_allowedAllVPCsHasBeenSet; }

    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline void SetAllowedAllVPCs(bool value) { m_allowedAllVPCsHasBeenSet = true; m_allowedAllVPCs = value; }

    /**
     * <p>Indicates whether all VPCs in the grantee account are allowed access to the
     * cluster.</p>
     */
    inline EndpointAuthorization& WithAllowedAllVPCs(bool value) { SetAllowedAllVPCs(value); return *this;}


    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedVPCs() const{ return m_allowedVPCs; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline bool AllowedVPCsHasBeenSet() const { return m_allowedVPCsHasBeenSet; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline void SetAllowedVPCs(const Aws::Vector<Aws::String>& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs = value; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline void SetAllowedVPCs(Aws::Vector<Aws::String>&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs = std::move(value); }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline EndpointAuthorization& WithAllowedVPCs(const Aws::Vector<Aws::String>& value) { SetAllowedVPCs(value); return *this;}

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline EndpointAuthorization& WithAllowedVPCs(Aws::Vector<Aws::String>&& value) { SetAllowedVPCs(std::move(value)); return *this;}

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline EndpointAuthorization& AddAllowedVPCs(const Aws::String& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.push_back(value); return *this; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline EndpointAuthorization& AddAllowedVPCs(Aws::String&& value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.push_back(std::move(value)); return *this; }

    /**
     * <p>The VPCs allowed access to the cluster.</p>
     */
    inline EndpointAuthorization& AddAllowedVPCs(const char* value) { m_allowedVPCsHasBeenSet = true; m_allowedVPCs.push_back(value); return *this; }


    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline int GetEndpointCount() const{ return m_endpointCount; }

    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline bool EndpointCountHasBeenSet() const { return m_endpointCountHasBeenSet; }

    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline void SetEndpointCount(int value) { m_endpointCountHasBeenSet = true; m_endpointCount = value; }

    /**
     * <p>The number of Redshift-managed VPC endpoints created for the
     * authorization.</p>
     */
    inline EndpointAuthorization& WithEndpointCount(int value) { SetEndpointCount(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline EndpointAuthorization& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline EndpointAuthorization& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_grantor;
    bool m_grantorHasBeenSet = false;

    Aws::String m_grantee;
    bool m_granteeHasBeenSet = false;

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_authorizeTime;
    bool m_authorizeTimeHasBeenSet = false;

    Aws::String m_clusterStatus;
    bool m_clusterStatusHasBeenSet = false;

    AuthorizationStatus m_status;
    bool m_statusHasBeenSet = false;

    bool m_allowedAllVPCs;
    bool m_allowedAllVPCsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedVPCs;
    bool m_allowedVPCsHasBeenSet = false;

    int m_endpointCount;
    bool m_endpointCountHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
