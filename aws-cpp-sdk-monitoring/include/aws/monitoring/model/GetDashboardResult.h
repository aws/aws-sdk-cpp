/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
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
namespace CloudWatch
{
namespace Model
{
  class GetDashboardResult
  {
  public:
    AWS_CLOUDWATCH_API GetDashboardResult();
    AWS_CLOUDWATCH_API GetDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline void SetDashboardArn(const char* value) { m_dashboardArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline GetDashboardResult& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline GetDashboardResult& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dashboard.</p>
     */
    inline GetDashboardResult& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}


    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>. </p>
     */
    inline const Aws::String& GetDashboardBody() const{ return m_dashboardBody; }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>. </p>
     */
    inline void SetDashboardBody(const Aws::String& value) { m_dashboardBody = value; }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>. </p>
     */
    inline void SetDashboardBody(Aws::String&& value) { m_dashboardBody = std::move(value); }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>. </p>
     */
    inline void SetDashboardBody(const char* value) { m_dashboardBody.assign(value); }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>. </p>
     */
    inline GetDashboardResult& WithDashboardBody(const Aws::String& value) { SetDashboardBody(value); return *this;}

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>. </p>
     */
    inline GetDashboardResult& WithDashboardBody(Aws::String&& value) { SetDashboardBody(std::move(value)); return *this;}

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/APIReference/CloudWatch-Dashboard-Body-Structure.html">Dashboard
     * Body Structure and Syntax</a>. </p>
     */
    inline GetDashboardResult& WithDashboardBody(const char* value) { SetDashboardBody(value); return *this;}


    /**
     * <p>The name of the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline void SetDashboardName(const Aws::String& value) { m_dashboardName = value; }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline void SetDashboardName(Aws::String&& value) { m_dashboardName = std::move(value); }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline void SetDashboardName(const char* value) { m_dashboardName.assign(value); }

    /**
     * <p>The name of the dashboard.</p>
     */
    inline GetDashboardResult& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}

    /**
     * <p>The name of the dashboard.</p>
     */
    inline GetDashboardResult& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}

    /**
     * <p>The name of the dashboard.</p>
     */
    inline GetDashboardResult& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetDashboardResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetDashboardResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dashboardArn;

    Aws::String m_dashboardBody;

    Aws::String m_dashboardName;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
