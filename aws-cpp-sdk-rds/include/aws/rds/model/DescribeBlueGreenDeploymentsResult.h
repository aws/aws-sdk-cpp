/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <aws/rds/model/BlueGreenDeployment.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class DescribeBlueGreenDeploymentsResult
  {
  public:
    AWS_RDS_API DescribeBlueGreenDeploymentsResult();
    AWS_RDS_API DescribeBlueGreenDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RDS_API DescribeBlueGreenDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Contains a list of blue/green deployments for the user.</p>
     */
    inline const Aws::Vector<BlueGreenDeployment>& GetBlueGreenDeployments() const{ return m_blueGreenDeployments; }

    /**
     * <p>Contains a list of blue/green deployments for the user.</p>
     */
    inline void SetBlueGreenDeployments(const Aws::Vector<BlueGreenDeployment>& value) { m_blueGreenDeployments = value; }

    /**
     * <p>Contains a list of blue/green deployments for the user.</p>
     */
    inline void SetBlueGreenDeployments(Aws::Vector<BlueGreenDeployment>&& value) { m_blueGreenDeployments = std::move(value); }

    /**
     * <p>Contains a list of blue/green deployments for the user.</p>
     */
    inline DescribeBlueGreenDeploymentsResult& WithBlueGreenDeployments(const Aws::Vector<BlueGreenDeployment>& value) { SetBlueGreenDeployments(value); return *this;}

    /**
     * <p>Contains a list of blue/green deployments for the user.</p>
     */
    inline DescribeBlueGreenDeploymentsResult& WithBlueGreenDeployments(Aws::Vector<BlueGreenDeployment>&& value) { SetBlueGreenDeployments(std::move(value)); return *this;}

    /**
     * <p>Contains a list of blue/green deployments for the user.</p>
     */
    inline DescribeBlueGreenDeploymentsResult& AddBlueGreenDeployments(const BlueGreenDeployment& value) { m_blueGreenDeployments.push_back(value); return *this; }

    /**
     * <p>Contains a list of blue/green deployments for the user.</p>
     */
    inline DescribeBlueGreenDeploymentsResult& AddBlueGreenDeployments(BlueGreenDeployment&& value) { m_blueGreenDeployments.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that can be used in a later DescribeBlueGreenDeployments
     * request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A pagination token that can be used in a later DescribeBlueGreenDeployments
     * request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A pagination token that can be used in a later DescribeBlueGreenDeployments
     * request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A pagination token that can be used in a later DescribeBlueGreenDeployments
     * request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A pagination token that can be used in a later DescribeBlueGreenDeployments
     * request.</p>
     */
    inline DescribeBlueGreenDeploymentsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A pagination token that can be used in a later DescribeBlueGreenDeployments
     * request.</p>
     */
    inline DescribeBlueGreenDeploymentsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a later DescribeBlueGreenDeployments
     * request.</p>
     */
    inline DescribeBlueGreenDeploymentsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeBlueGreenDeploymentsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeBlueGreenDeploymentsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<BlueGreenDeployment> m_blueGreenDeployments;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
