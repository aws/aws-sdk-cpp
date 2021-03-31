/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class AWS_REDSHIFT_API DescribeEndpointAccessRequest : public RedshiftRequest
  {
  public:
    DescribeEndpointAccessRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEndpointAccess"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const{ return m_clusterIdentifier; }

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline void SetClusterIdentifier(const Aws::String& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = value; }

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline void SetClusterIdentifier(Aws::String&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::move(value); }

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline void SetClusterIdentifier(const char* value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier.assign(value); }

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline DescribeEndpointAccessRequest& WithClusterIdentifier(const Aws::String& value) { SetClusterIdentifier(value); return *this;}

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline DescribeEndpointAccessRequest& WithClusterIdentifier(Aws::String&& value) { SetClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The cluster identifier associated with the described endpoint.</p>
     */
    inline DescribeEndpointAccessRequest& WithClusterIdentifier(const char* value) { SetClusterIdentifier(value); return *this;}


    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline const Aws::String& GetResourceOwner() const{ return m_resourceOwner; }

    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline bool ResourceOwnerHasBeenSet() const { return m_resourceOwnerHasBeenSet; }

    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline void SetResourceOwner(const Aws::String& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = value; }

    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline void SetResourceOwner(Aws::String&& value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner = std::move(value); }

    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline void SetResourceOwner(const char* value) { m_resourceOwnerHasBeenSet = true; m_resourceOwner.assign(value); }

    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline DescribeEndpointAccessRequest& WithResourceOwner(const Aws::String& value) { SetResourceOwner(value); return *this;}

    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline DescribeEndpointAccessRequest& WithResourceOwner(Aws::String&& value) { SetResourceOwner(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID of the owner of the cluster.</p>
     */
    inline DescribeEndpointAccessRequest& WithResourceOwner(const char* value) { SetResourceOwner(value); return *this;}


    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline DescribeEndpointAccessRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline DescribeEndpointAccessRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint to be described.</p>
     */
    inline DescribeEndpointAccessRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline DescribeEndpointAccessRequest& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline DescribeEndpointAccessRequest& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The virtual private cloud (VPC) identifier with access to the cluster.</p>
     */
    inline DescribeEndpointAccessRequest& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline DescribeEndpointAccessRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}


    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline DescribeEndpointAccessRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline DescribeEndpointAccessRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Reserved for Amazon Redshift internal use.</p>
     */
    inline DescribeEndpointAccessRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet;

    Aws::String m_resourceOwner;
    bool m_resourceOwnerHasBeenSet;

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
