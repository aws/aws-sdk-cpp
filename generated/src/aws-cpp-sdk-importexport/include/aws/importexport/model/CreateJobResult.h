/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateJobResult
  {
  public:
    AWS_IMPORTEXPORT_API CreateJobResult() = default;
    AWS_IMPORTEXPORT_API CreateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IMPORTEXPORT_API CreateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    CreateJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline JobType GetJobType() const { return m_jobType; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline CreateJobResult& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSignature() const { return m_signature; }
    template<typename SignatureT = Aws::String>
    void SetSignature(SignatureT&& value) { m_signatureHasBeenSet = true; m_signature = std::forward<SignatureT>(value); }
    template<typename SignatureT = Aws::String>
    CreateJobResult& WithSignature(SignatureT&& value) { SetSignature(std::forward<SignatureT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSignatureFileContents() const { return m_signatureFileContents; }
    template<typename SignatureFileContentsT = Aws::String>
    void SetSignatureFileContents(SignatureFileContentsT&& value) { m_signatureFileContentsHasBeenSet = true; m_signatureFileContents = std::forward<SignatureFileContentsT>(value); }
    template<typename SignatureFileContentsT = Aws::String>
    CreateJobResult& WithSignatureFileContents(SignatureFileContentsT&& value) { SetSignatureFileContents(std::forward<SignatureFileContentsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWarningMessage() const { return m_warningMessage; }
    template<typename WarningMessageT = Aws::String>
    void SetWarningMessage(WarningMessageT&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::forward<WarningMessageT>(value); }
    template<typename WarningMessageT = Aws::String>
    CreateJobResult& WithWarningMessage(WarningMessageT&& value) { SetWarningMessage(std::forward<WarningMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Artifact>& GetArtifactList() const { return m_artifactList; }
    template<typename ArtifactListT = Aws::Vector<Artifact>>
    void SetArtifactList(ArtifactListT&& value) { m_artifactListHasBeenSet = true; m_artifactList = std::forward<ArtifactListT>(value); }
    template<typename ArtifactListT = Aws::Vector<Artifact>>
    CreateJobResult& WithArtifactList(ArtifactListT&& value) { SetArtifactList(std::forward<ArtifactListT>(value)); return *this;}
    template<typename ArtifactListT = Artifact>
    CreateJobResult& AddArtifactList(ArtifactListT&& value) { m_artifactListHasBeenSet = true; m_artifactList.emplace_back(std::forward<ArtifactListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateJobResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;

    Aws::String m_signatureFileContents;
    bool m_signatureFileContentsHasBeenSet = false;

    Aws::String m_warningMessage;
    bool m_warningMessageHasBeenSet = false;

    Aws::Vector<Artifact> m_artifactList;
    bool m_artifactListHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
