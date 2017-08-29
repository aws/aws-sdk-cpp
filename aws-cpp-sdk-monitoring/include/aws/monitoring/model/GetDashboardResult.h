/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CLOUDWATCH_API GetDashboardResult
  {
  public:
    GetDashboardResult();
    GetDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
     * <code>DashboardBody</code> syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>. </p>
     */
    inline const Aws::String& GetDashboardBody() const{ return m_dashboardBody; }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>. </p>
     */
    inline void SetDashboardBody(const Aws::String& value) { m_dashboardBody = value; }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>. </p>
     */
    inline void SetDashboardBody(Aws::String&& value) { m_dashboardBody = std::move(value); }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>. </p>
     */
    inline void SetDashboardBody(const char* value) { m_dashboardBody.assign(value); }

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>. </p>
     */
    inline GetDashboardResult& WithDashboardBody(const Aws::String& value) { SetDashboardBody(value); return *this;}

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>. </p>
     */
    inline GetDashboardResult& WithDashboardBody(Aws::String&& value) { SetDashboardBody(std::move(value)); return *this;}

    /**
     * <p>The detailed information about the dashboard, including what widgets are
     * included and their location on the dashboard. For more information about the
     * <code>DashboardBody</code> syntax, see
     * <a>CloudWatch-Dashboard-Body-Structure</a>. </p>
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
