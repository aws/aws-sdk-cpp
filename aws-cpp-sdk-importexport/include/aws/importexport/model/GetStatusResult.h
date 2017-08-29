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
#include <aws/core/utils/DateTime.h>
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
   * Output structure for the GetStatus operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/GetStatusOutput">AWS
   * API Reference</a></p>
   */
  class AWS_IMPORTEXPORT_API GetStatusResult
  {
  public:
    GetStatusResult();
    GetStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    
    inline GetStatusResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    
    inline GetStatusResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    
    inline GetStatusResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const JobType& GetJobType() const{ return m_jobType; }

    
    inline void SetJobType(const JobType& value) { m_jobType = value; }

    
    inline void SetJobType(JobType&& value) { m_jobType = std::move(value); }

    
    inline GetStatusResult& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    
    inline GetStatusResult& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    
    inline const Aws::String& GetLocationCode() const{ return m_locationCode; }

    
    inline void SetLocationCode(const Aws::String& value) { m_locationCode = value; }

    
    inline void SetLocationCode(Aws::String&& value) { m_locationCode = std::move(value); }

    
    inline void SetLocationCode(const char* value) { m_locationCode.assign(value); }

    
    inline GetStatusResult& WithLocationCode(const Aws::String& value) { SetLocationCode(value); return *this;}

    
    inline GetStatusResult& WithLocationCode(Aws::String&& value) { SetLocationCode(std::move(value)); return *this;}

    
    inline GetStatusResult& WithLocationCode(const char* value) { SetLocationCode(value); return *this;}


    
    inline const Aws::String& GetLocationMessage() const{ return m_locationMessage; }

    
    inline void SetLocationMessage(const Aws::String& value) { m_locationMessage = value; }

    
    inline void SetLocationMessage(Aws::String&& value) { m_locationMessage = std::move(value); }

    
    inline void SetLocationMessage(const char* value) { m_locationMessage.assign(value); }

    
    inline GetStatusResult& WithLocationMessage(const Aws::String& value) { SetLocationMessage(value); return *this;}

    
    inline GetStatusResult& WithLocationMessage(Aws::String&& value) { SetLocationMessage(std::move(value)); return *this;}

    
    inline GetStatusResult& WithLocationMessage(const char* value) { SetLocationMessage(value); return *this;}


    
    inline const Aws::String& GetProgressCode() const{ return m_progressCode; }

    
    inline void SetProgressCode(const Aws::String& value) { m_progressCode = value; }

    
    inline void SetProgressCode(Aws::String&& value) { m_progressCode = std::move(value); }

    
    inline void SetProgressCode(const char* value) { m_progressCode.assign(value); }

    
    inline GetStatusResult& WithProgressCode(const Aws::String& value) { SetProgressCode(value); return *this;}

    
    inline GetStatusResult& WithProgressCode(Aws::String&& value) { SetProgressCode(std::move(value)); return *this;}

    
    inline GetStatusResult& WithProgressCode(const char* value) { SetProgressCode(value); return *this;}


    
    inline const Aws::String& GetProgressMessage() const{ return m_progressMessage; }

    
    inline void SetProgressMessage(const Aws::String& value) { m_progressMessage = value; }

    
    inline void SetProgressMessage(Aws::String&& value) { m_progressMessage = std::move(value); }

    
    inline void SetProgressMessage(const char* value) { m_progressMessage.assign(value); }

    
    inline GetStatusResult& WithProgressMessage(const Aws::String& value) { SetProgressMessage(value); return *this;}

    
    inline GetStatusResult& WithProgressMessage(Aws::String&& value) { SetProgressMessage(std::move(value)); return *this;}

    
    inline GetStatusResult& WithProgressMessage(const char* value) { SetProgressMessage(value); return *this;}


    
    inline const Aws::String& GetCarrier() const{ return m_carrier; }

    
    inline void SetCarrier(const Aws::String& value) { m_carrier = value; }

    
    inline void SetCarrier(Aws::String&& value) { m_carrier = std::move(value); }

    
    inline void SetCarrier(const char* value) { m_carrier.assign(value); }

    
    inline GetStatusResult& WithCarrier(const Aws::String& value) { SetCarrier(value); return *this;}

    
    inline GetStatusResult& WithCarrier(Aws::String&& value) { SetCarrier(std::move(value)); return *this;}

    
    inline GetStatusResult& WithCarrier(const char* value) { SetCarrier(value); return *this;}


    
    inline const Aws::String& GetTrackingNumber() const{ return m_trackingNumber; }

    
    inline void SetTrackingNumber(const Aws::String& value) { m_trackingNumber = value; }

    
    inline void SetTrackingNumber(Aws::String&& value) { m_trackingNumber = std::move(value); }

    
    inline void SetTrackingNumber(const char* value) { m_trackingNumber.assign(value); }

    
    inline GetStatusResult& WithTrackingNumber(const Aws::String& value) { SetTrackingNumber(value); return *this;}

    
    inline GetStatusResult& WithTrackingNumber(Aws::String&& value) { SetTrackingNumber(std::move(value)); return *this;}

    
    inline GetStatusResult& WithTrackingNumber(const char* value) { SetTrackingNumber(value); return *this;}


    
    inline const Aws::String& GetLogBucket() const{ return m_logBucket; }

    
    inline void SetLogBucket(const Aws::String& value) { m_logBucket = value; }

    
    inline void SetLogBucket(Aws::String&& value) { m_logBucket = std::move(value); }

    
    inline void SetLogBucket(const char* value) { m_logBucket.assign(value); }

    
    inline GetStatusResult& WithLogBucket(const Aws::String& value) { SetLogBucket(value); return *this;}

    
    inline GetStatusResult& WithLogBucket(Aws::String&& value) { SetLogBucket(std::move(value)); return *this;}

    
    inline GetStatusResult& WithLogBucket(const char* value) { SetLogBucket(value); return *this;}


    
    inline const Aws::String& GetLogKey() const{ return m_logKey; }

    
    inline void SetLogKey(const Aws::String& value) { m_logKey = value; }

    
    inline void SetLogKey(Aws::String&& value) { m_logKey = std::move(value); }

    
    inline void SetLogKey(const char* value) { m_logKey.assign(value); }

    
    inline GetStatusResult& WithLogKey(const Aws::String& value) { SetLogKey(value); return *this;}

    
    inline GetStatusResult& WithLogKey(Aws::String&& value) { SetLogKey(std::move(value)); return *this;}

    
    inline GetStatusResult& WithLogKey(const char* value) { SetLogKey(value); return *this;}


    
    inline int GetErrorCount() const{ return m_errorCount; }

    
    inline void SetErrorCount(int value) { m_errorCount = value; }

    
    inline GetStatusResult& WithErrorCount(int value) { SetErrorCount(value); return *this;}


    
    inline const Aws::String& GetSignature() const{ return m_signature; }

    
    inline void SetSignature(const Aws::String& value) { m_signature = value; }

    
    inline void SetSignature(Aws::String&& value) { m_signature = std::move(value); }

    
    inline void SetSignature(const char* value) { m_signature.assign(value); }

    
    inline GetStatusResult& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}

    
    inline GetStatusResult& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}

    
    inline GetStatusResult& WithSignature(const char* value) { SetSignature(value); return *this;}


    
    inline const Aws::String& GetSignatureFileContents() const{ return m_signatureFileContents; }

    
    inline void SetSignatureFileContents(const Aws::String& value) { m_signatureFileContents = value; }

    
    inline void SetSignatureFileContents(Aws::String&& value) { m_signatureFileContents = std::move(value); }

    
    inline void SetSignatureFileContents(const char* value) { m_signatureFileContents.assign(value); }

    
    inline GetStatusResult& WithSignatureFileContents(const Aws::String& value) { SetSignatureFileContents(value); return *this;}

    
    inline GetStatusResult& WithSignatureFileContents(Aws::String&& value) { SetSignatureFileContents(std::move(value)); return *this;}

    
    inline GetStatusResult& WithSignatureFileContents(const char* value) { SetSignatureFileContents(value); return *this;}


    
    inline const Aws::String& GetCurrentManifest() const{ return m_currentManifest; }

    
    inline void SetCurrentManifest(const Aws::String& value) { m_currentManifest = value; }

    
    inline void SetCurrentManifest(Aws::String&& value) { m_currentManifest = std::move(value); }

    
    inline void SetCurrentManifest(const char* value) { m_currentManifest.assign(value); }

    
    inline GetStatusResult& WithCurrentManifest(const Aws::String& value) { SetCurrentManifest(value); return *this;}

    
    inline GetStatusResult& WithCurrentManifest(Aws::String&& value) { SetCurrentManifest(std::move(value)); return *this;}

    
    inline GetStatusResult& WithCurrentManifest(const char* value) { SetCurrentManifest(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    
    inline GetStatusResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    
    inline GetStatusResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    
    inline const Aws::Vector<Artifact>& GetArtifactList() const{ return m_artifactList; }

    
    inline void SetArtifactList(const Aws::Vector<Artifact>& value) { m_artifactList = value; }

    
    inline void SetArtifactList(Aws::Vector<Artifact>&& value) { m_artifactList = std::move(value); }

    
    inline GetStatusResult& WithArtifactList(const Aws::Vector<Artifact>& value) { SetArtifactList(value); return *this;}

    
    inline GetStatusResult& WithArtifactList(Aws::Vector<Artifact>&& value) { SetArtifactList(std::move(value)); return *this;}

    
    inline GetStatusResult& AddArtifactList(const Artifact& value) { m_artifactList.push_back(value); return *this; }

    
    inline GetStatusResult& AddArtifactList(Artifact&& value) { m_artifactList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline GetStatusResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetStatusResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;

    JobType m_jobType;

    Aws::String m_locationCode;

    Aws::String m_locationMessage;

    Aws::String m_progressCode;

    Aws::String m_progressMessage;

    Aws::String m_carrier;

    Aws::String m_trackingNumber;

    Aws::String m_logBucket;

    Aws::String m_logKey;

    int m_errorCount;

    Aws::String m_signature;

    Aws::String m_signatureFileContents;

    Aws::String m_currentManifest;

    Aws::Utils::DateTime m_creationDate;

    Aws::Vector<Artifact> m_artifactList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
