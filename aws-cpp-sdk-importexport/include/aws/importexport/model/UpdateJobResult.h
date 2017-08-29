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
  class AWS_IMPORTEXPORT_API UpdateJobResult
  {
  public:
    UpdateJobResult();
    UpdateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    UpdateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline bool GetSuccess() const{ return m_success; }

    
    inline void SetSuccess(bool value) { m_success = value; }

    
    inline UpdateJobResult& WithSuccess(bool value) { SetSuccess(value); return *this;}


    
    inline const Aws::String& GetWarningMessage() const{ return m_warningMessage; }

    
    inline void SetWarningMessage(const Aws::String& value) { m_warningMessage = value; }

    
    inline void SetWarningMessage(Aws::String&& value) { m_warningMessage = std::move(value); }

    
    inline void SetWarningMessage(const char* value) { m_warningMessage.assign(value); }

    
    inline UpdateJobResult& WithWarningMessage(const Aws::String& value) { SetWarningMessage(value); return *this;}

    
    inline UpdateJobResult& WithWarningMessage(Aws::String&& value) { SetWarningMessage(std::move(value)); return *this;}

    
    inline UpdateJobResult& WithWarningMessage(const char* value) { SetWarningMessage(value); return *this;}


    
    inline const Aws::Vector<Artifact>& GetArtifactList() const{ return m_artifactList; }

    
    inline void SetArtifactList(const Aws::Vector<Artifact>& value) { m_artifactList = value; }

    
    inline void SetArtifactList(Aws::Vector<Artifact>&& value) { m_artifactList = std::move(value); }

    
    inline UpdateJobResult& WithArtifactList(const Aws::Vector<Artifact>& value) { SetArtifactList(value); return *this;}

    
    inline UpdateJobResult& WithArtifactList(Aws::Vector<Artifact>&& value) { SetArtifactList(std::move(value)); return *this;}

    
    inline UpdateJobResult& AddArtifactList(const Artifact& value) { m_artifactList.push_back(value); return *this; }

    
    inline UpdateJobResult& AddArtifactList(Artifact&& value) { m_artifactList.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline UpdateJobResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline UpdateJobResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_success;

    Aws::String m_warningMessage;

    Aws::Vector<Artifact> m_artifactList;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
