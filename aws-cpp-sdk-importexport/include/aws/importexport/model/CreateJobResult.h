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
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/importexport/model/JobType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/importexport/model/ResponseMetadata.h>
#include <aws/importexport/model/Artifact.h>
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
namespace ImportExport
{
namespace Model
{
  /**
   * Output structure for the CreateJob operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CreateJobOutput">AWS
   * API Reference</a></p>
   */
  class AWS_IMPORTEXPORT_API CreateJobResult
  {
  public:
    CreateJobResult();
    CreateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    
    inline CreateJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    
    inline CreateJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    
    inline CreateJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const JobType& GetJobType() const{ return m_jobType; }

    
    inline void SetJobType(const JobType& value) { m_jobType = value; }

    
    inline void SetJobType(JobType&& value) { m_jobType = std::move(value); }

    
    inline CreateJobResult& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    
    inline CreateJobResult& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    
    inline const Aws::String& GetSignature() const{ return m_signature; }

    
    inline void SetSignature(const Aws::String& value) { m_signature = value; }

    
    inline void SetSignature(Aws::String&& value) { m_signature = std::move(value); }

    
    inline void SetSignature(const char* value) { m_signature.assign(value); }

    
    inline CreateJobResult& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    
    inline CreateJobResult& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    
    inline CreateJobResult& WithSignature(const char* value) { SetSignature(value); return *this;}


    
    inline const Aws::String& GetSignatureFileContents() const{ return m_signatureFileContents; }

    
    inline void SetSignatureFileContents(const Aws::String& value) { m_signatureFileContents = value; }

    
    inline void SetSignatureFileContents(Aws::String&& value) { m_signatureFileContents = std::move(value); }

    
    inline void SetSignatureFileContents(const char* value) { m_signatureFileContents.assign(value); }

    
    inline CreateJobResult& WithSignatureFileContents(const Aws::String& value) { SetSignatureFileContents(value); return *this;}

    
    inline CreateJobResult& WithSignatureFileContents(Aws::String&& value) { SetSignatureFileContents(std::move(value)); return *this;}

    
    inline CreateJobResult& WithSignatureFileContents(const char* value) { SetSignatureFileContents(value); return *this;}


    
    inline const Aws::String& GetWarningMessage() const{ return m_warningMessage; }

    
    inline void SetWarningMessage(const Aws::String& value) { m_warningMessage = value; }

    
    inline void SetWarningMessage(Aws::String&& value) { m_warningMessage = std::move(value); }

    
    inline void SetWarningMessage(const char* value) { m_warningMessage.assign(value); }

    
    inline CreateJobResult& WithWarningMessage(const Aws::String& value) { SetWarningMessage(value); return *this;}

    
    inline CreateJobResult& WithWarningMessage(Aws::String&& value) { SetWarningMessage(std::move(value)); return *this;}

    
    inline CreateJobResult& WithWarningMessage(const char* value) { SetWarningMessage(value); return *this;}


    
    inline const Aws::Vector<Artifact>& GetArtifactList() const{ return m_artifactList; }

    
    inline void SetArtifactList(const Aws::Vector<Artifact>& value) { m_artifactList = value; }

    
    inline void SetArtifactList(Aws::Vector<Artifact>&& value) { m_artifactList = std::move(value); }

    
    inline CreateJobResult& WithArtifactList(const Aws::Vector<Artifact>& value) { SetArtifactList(value); return *this;}

    
    inline CreateJobResult& WithArtifactList(Aws::Vector<Artifact>&& value) { SetArtifactList(std::move(value)); return *this;}

    
    inline CreateJobResult& AddArtifactList(const Artifact& value) { m_artifactList.push_back(value); return *this; }

    
    inline CreateJobResult& AddArtifactList(Artifact&& value) { m_artifactList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateJobResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateJobResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    JobType m_jobType;

    Aws::String m_signature;

    Aws::String m_signatureFileContents;

    Aws::String m_warningMessage;

    Aws::Vector<Artifact> m_artifactList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
