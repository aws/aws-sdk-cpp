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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
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
namespace IAM
{
namespace Model
{
  class AWS_IAM_API GenerateOrganizationsAccessReportResult
  {
  public:
    GenerateOrganizationsAccessReportResult();
    GenerateOrganizationsAccessReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GenerateOrganizationsAccessReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The job identifier that you can use in the
     * <a>GetOrganizationsAccessReport</a> operation.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job identifier that you can use in the
     * <a>GetOrganizationsAccessReport</a> operation.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The job identifier that you can use in the
     * <a>GetOrganizationsAccessReport</a> operation.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The job identifier that you can use in the
     * <a>GetOrganizationsAccessReport</a> operation.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The job identifier that you can use in the
     * <a>GetOrganizationsAccessReport</a> operation.</p>
     */
    inline GenerateOrganizationsAccessReportResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job identifier that you can use in the
     * <a>GetOrganizationsAccessReport</a> operation.</p>
     */
    inline GenerateOrganizationsAccessReportResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job identifier that you can use in the
     * <a>GetOrganizationsAccessReport</a> operation.</p>
     */
    inline GenerateOrganizationsAccessReportResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GenerateOrganizationsAccessReportResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GenerateOrganizationsAccessReportResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
