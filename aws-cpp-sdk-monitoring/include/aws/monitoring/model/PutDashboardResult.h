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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/DashboardValidationMessage.h>
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
  class AWS_CLOUDWATCH_API PutDashboardResult
  {
  public:
    PutDashboardResult();
    PutDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    PutDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard may not
     * render.</p> <p>If this result includes error messages, the input was not valid
     * and the operation failed.</p>
     */
    inline const Aws::Vector<DashboardValidationMessage>& GetDashboardValidationMessages() const{ return m_dashboardValidationMessages; }

    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard may not
     * render.</p> <p>If this result includes error messages, the input was not valid
     * and the operation failed.</p>
     */
    inline void SetDashboardValidationMessages(const Aws::Vector<DashboardValidationMessage>& value) { m_dashboardValidationMessages = value; }

    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard may not
     * render.</p> <p>If this result includes error messages, the input was not valid
     * and the operation failed.</p>
     */
    inline void SetDashboardValidationMessages(Aws::Vector<DashboardValidationMessage>&& value) { m_dashboardValidationMessages = std::move(value); }

    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard may not
     * render.</p> <p>If this result includes error messages, the input was not valid
     * and the operation failed.</p>
     */
    inline PutDashboardResult& WithDashboardValidationMessages(const Aws::Vector<DashboardValidationMessage>& value) { SetDashboardValidationMessages(value); return *this;}

    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard may not
     * render.</p> <p>If this result includes error messages, the input was not valid
     * and the operation failed.</p>
     */
    inline PutDashboardResult& WithDashboardValidationMessages(Aws::Vector<DashboardValidationMessage>&& value) { SetDashboardValidationMessages(std::move(value)); return *this;}

    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard may not
     * render.</p> <p>If this result includes error messages, the input was not valid
     * and the operation failed.</p>
     */
    inline PutDashboardResult& AddDashboardValidationMessages(const DashboardValidationMessage& value) { m_dashboardValidationMessages.push_back(value); return *this; }

    /**
     * <p>If the input for <code>PutDashboard</code> was correct and the dashboard was
     * successfully created or modified, this result is empty.</p> <p>If this result
     * includes only warning messages, then the input was valid enough for the
     * dashboard to be created or modified, but some elements of the dashboard may not
     * render.</p> <p>If this result includes error messages, the input was not valid
     * and the operation failed.</p>
     */
    inline PutDashboardResult& AddDashboardValidationMessages(DashboardValidationMessage&& value) { m_dashboardValidationMessages.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline PutDashboardResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline PutDashboardResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<DashboardValidationMessage> m_dashboardValidationMessages;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
