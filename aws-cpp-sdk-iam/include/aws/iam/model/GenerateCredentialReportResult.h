﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/ReportStateType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>

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
  /**
   * <p>Contains the response to a successful <a>GenerateCredentialReport</a>
   * request. </p>
   */
  class AWS_IAM_API GenerateCredentialReportResult
  {
  public:
    GenerateCredentialReportResult();
    GenerateCredentialReportResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GenerateCredentialReportResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about the state of the credential report.</p>
     */
    inline const ReportStateType& GetState() const{ return m_state; }

    /**
     * <p>Information about the state of the credential report.</p>
     */
    inline void SetState(const ReportStateType& value) { m_state = value; }

    /**
     * <p>Information about the state of the credential report.</p>
     */
    inline void SetState(ReportStateType&& value) { m_state = value; }

    /**
     * <p>Information about the state of the credential report.</p>
     */
    inline GenerateCredentialReportResult& WithState(const ReportStateType& value) { SetState(value); return *this;}

    /**
     * <p>Information about the state of the credential report.</p>
     */
    inline GenerateCredentialReportResult& WithState(ReportStateType&& value) { SetState(value); return *this;}

    /**
     * <p>Information about the credential report.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Information about the credential report.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>Information about the credential report.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = value; }

    /**
     * <p>Information about the credential report.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>Information about the credential report.</p>
     */
    inline GenerateCredentialReportResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the credential report.</p>
     */
    inline GenerateCredentialReportResult& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>Information about the credential report.</p>
     */
    inline GenerateCredentialReportResult& WithDescription(const char* value) { SetDescription(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GenerateCredentialReportResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GenerateCredentialReportResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    ReportStateType m_state;
    Aws::String m_description;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws