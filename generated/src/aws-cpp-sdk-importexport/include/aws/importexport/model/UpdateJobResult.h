/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Output structure for the UpateJob operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/UpdateJobOutput">AWS
   * API Reference</a></p>
   */
  class UpdateJobResult
  {
  public:
    AWS_IMPORTEXPORT_API UpdateJobResult() = default;
    AWS_IMPORTEXPORT_API UpdateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IMPORTEXPORT_API UpdateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline bool GetSuccess() const { return m_success; }
    inline void SetSuccess(bool value) { m_successHasBeenSet = true; m_success = value; }
    inline UpdateJobResult& WithSuccess(bool value) { SetSuccess(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWarningMessage() const { return m_warningMessage; }
    template<typename WarningMessageT = Aws::String>
    void SetWarningMessage(WarningMessageT&& value) { m_warningMessageHasBeenSet = true; m_warningMessage = std::forward<WarningMessageT>(value); }
    template<typename WarningMessageT = Aws::String>
    UpdateJobResult& WithWarningMessage(WarningMessageT&& value) { SetWarningMessage(std::forward<WarningMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Artifact>& GetArtifactList() const { return m_artifactList; }
    template<typename ArtifactListT = Aws::Vector<Artifact>>
    void SetArtifactList(ArtifactListT&& value) { m_artifactListHasBeenSet = true; m_artifactList = std::forward<ArtifactListT>(value); }
    template<typename ArtifactListT = Aws::Vector<Artifact>>
    UpdateJobResult& WithArtifactList(ArtifactListT&& value) { SetArtifactList(std::forward<ArtifactListT>(value)); return *this;}
    template<typename ArtifactListT = Artifact>
    UpdateJobResult& AddArtifactList(ArtifactListT&& value) { m_artifactListHasBeenSet = true; m_artifactList.emplace_back(std::forward<ArtifactListT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    UpdateJobResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_success{false};
    bool m_successHasBeenSet = false;

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
