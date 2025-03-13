/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetStatusResult
  {
  public:
    AWS_IMPORTEXPORT_API GetStatusResult() = default;
    AWS_IMPORTEXPORT_API GetStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IMPORTEXPORT_API GetStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    GetStatusResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline JobType GetJobType() const { return m_jobType; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline GetStatusResult& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLocationCode() const { return m_locationCode; }
    template<typename LocationCodeT = Aws::String>
    void SetLocationCode(LocationCodeT&& value) { m_locationCodeHasBeenSet = true; m_locationCode = std::forward<LocationCodeT>(value); }
    template<typename LocationCodeT = Aws::String>
    GetStatusResult& WithLocationCode(LocationCodeT&& value) { SetLocationCode(std::forward<LocationCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLocationMessage() const { return m_locationMessage; }
    template<typename LocationMessageT = Aws::String>
    void SetLocationMessage(LocationMessageT&& value) { m_locationMessageHasBeenSet = true; m_locationMessage = std::forward<LocationMessageT>(value); }
    template<typename LocationMessageT = Aws::String>
    GetStatusResult& WithLocationMessage(LocationMessageT&& value) { SetLocationMessage(std::forward<LocationMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProgressCode() const { return m_progressCode; }
    template<typename ProgressCodeT = Aws::String>
    void SetProgressCode(ProgressCodeT&& value) { m_progressCodeHasBeenSet = true; m_progressCode = std::forward<ProgressCodeT>(value); }
    template<typename ProgressCodeT = Aws::String>
    GetStatusResult& WithProgressCode(ProgressCodeT&& value) { SetProgressCode(std::forward<ProgressCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProgressMessage() const { return m_progressMessage; }
    template<typename ProgressMessageT = Aws::String>
    void SetProgressMessage(ProgressMessageT&& value) { m_progressMessageHasBeenSet = true; m_progressMessage = std::forward<ProgressMessageT>(value); }
    template<typename ProgressMessageT = Aws::String>
    GetStatusResult& WithProgressMessage(ProgressMessageT&& value) { SetProgressMessage(std::forward<ProgressMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetCarrier() const { return m_carrier; }
    template<typename CarrierT = Aws::String>
    void SetCarrier(CarrierT&& value) { m_carrierHasBeenSet = true; m_carrier = std::forward<CarrierT>(value); }
    template<typename CarrierT = Aws::String>
    GetStatusResult& WithCarrier(CarrierT&& value) { SetCarrier(std::forward<CarrierT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetTrackingNumber() const { return m_trackingNumber; }
    template<typename TrackingNumberT = Aws::String>
    void SetTrackingNumber(TrackingNumberT&& value) { m_trackingNumberHasBeenSet = true; m_trackingNumber = std::forward<TrackingNumberT>(value); }
    template<typename TrackingNumberT = Aws::String>
    GetStatusResult& WithTrackingNumber(TrackingNumberT&& value) { SetTrackingNumber(std::forward<TrackingNumberT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLogBucket() const { return m_logBucket; }
    template<typename LogBucketT = Aws::String>
    void SetLogBucket(LogBucketT&& value) { m_logBucketHasBeenSet = true; m_logBucket = std::forward<LogBucketT>(value); }
    template<typename LogBucketT = Aws::String>
    GetStatusResult& WithLogBucket(LogBucketT&& value) { SetLogBucket(std::forward<LogBucketT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLogKey() const { return m_logKey; }
    template<typename LogKeyT = Aws::String>
    void SetLogKey(LogKeyT&& value) { m_logKeyHasBeenSet = true; m_logKey = std::forward<LogKeyT>(value); }
    template<typename LogKeyT = Aws::String>
    GetStatusResult& WithLogKey(LogKeyT&& value) { SetLogKey(std::forward<LogKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetErrorCount() const { return m_errorCount; }
    inline void SetErrorCount(int value) { m_errorCountHasBeenSet = true; m_errorCount = value; }
    inline GetStatusResult& WithErrorCount(int value) { SetErrorCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSignature() const { return m_signature; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    GetStatusResult& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSignatureFileContents() const { return m_signatureFileContents; }
    template<typename SignatureFileContentsT = Aws::String>
    void SetSignatureFileContents(SignatureFileContentsT&& value) { m_signatureFileContentsHasBeenSet = true; m_signatureFileContents = std::forward<SignatureFileContentsT>(value); }
    template<typename SignatureFileContentsT = Aws::String>
    GetStatusResult& WithSignatureFileContents(SignatureFileContentsT&& value) { SetSignatureFileContents(std::forward<SignatureFileContentsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetCurrentManifest() const { return m_currentManifest; }
    template<typename CurrentManifestT = Aws::String>
    void SetCurrentManifest(CurrentManifestT&& value) { m_currentManifestHasBeenSet = true; m_currentManifest = std::forward<CurrentManifestT>(value); }
    template<typename CurrentManifestT = Aws::String>
    GetStatusResult& WithCurrentManifest(CurrentManifestT&& value) { SetCurrentManifest(std::forward<CurrentManifestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    GetStatusResult& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Artifact>& GetArtifactList() const { return m_artifactList; }
    template<typename ArtifactListT = Aws::Vector<Artifact>>
    void SetArtifactList(ArtifactListT&& value) { m_artifactListHasBeenSet = true; m_artifactList = std::forward<ArtifactListT>(value); }
    template<typename ArtifactListT = Aws::Vector<Artifact>>
    GetStatusResult& WithArtifactList(ArtifactListT&& value) { SetArtifactList(std::forward<ArtifactListT>(value)); return *this;}
    template<typename ArtifactListT = Artifact>
    GetStatusResult& AddArtifactList(ArtifactListT&& value) { m_artifactListHasBeenSet = true; m_artifactList.emplace_back(std::forward<ArtifactListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetStatusResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_locationCode;
    bool m_locationCodeHasBeenSet = false;

    Aws::String m_locationMessage;
    bool m_locationMessageHasBeenSet = false;

    Aws::String m_progressCode;
    bool m_progressCodeHasBeenSet = false;

    Aws::String m_progressMessage;
    bool m_progressMessageHasBeenSet = false;

    Aws::String m_carrier;
    bool m_carrierHasBeenSet = false;

    Aws::String m_trackingNumber;
    bool m_trackingNumberHasBeenSet = false;

    Aws::String m_logBucket;
    bool m_logBucketHasBeenSet = false;

    Aws::String m_logKey;
    bool m_logKeyHasBeenSet = false;

    int m_errorCount{0};
    bool m_errorCountHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    Aws::String m_signatureFileContents;
    bool m_signatureFileContentsHasBeenSet = false;

    Aws::String m_currentManifest;
    bool m_currentManifestHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Vector<Artifact> m_artifactList;
    bool m_artifactListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
