/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/RevisionLocation.h>
#include <aws/codedeploy/model/GenericRevisionInfo.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeDeploy
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>GetApplicationRevision</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/GetApplicationRevisionOutput">AWS
   * API Reference</a></p>
   */
  class GetApplicationRevisionResult
  {
  public:
    AWS_CODEDEPLOY_API GetApplicationRevisionResult() = default;
    AWS_CODEDEPLOY_API GetApplicationRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetApplicationRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    GetApplicationRevisionResult& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the revision, including type and location.</p>
     */
    inline const RevisionLocation& GetRevision() const { return m_revision; }
    template<typename RevisionT = RevisionLocation>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = RevisionLocation>
    GetApplicationRevisionResult& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>General information about the revision.</p>
     */
    inline const GenericRevisionInfo& GetRevisionInfo() const { return m_revisionInfo; }
    template<typename RevisionInfoT = GenericRevisionInfo>
    void SetRevisionInfo(RevisionInfoT&& value) { m_revisionInfoHasBeenSet = true; m_revisionInfo = std::forward<RevisionInfoT>(value); }
    template<typename RevisionInfoT = GenericRevisionInfo>
    GetApplicationRevisionResult& WithRevisionInfo(RevisionInfoT&& value) { SetRevisionInfo(std::forward<RevisionInfoT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApplicationRevisionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    RevisionLocation m_revision;
    bool m_revisionHasBeenSet = false;

    GenericRevisionInfo m_revisionInfo;
    bool m_revisionInfoHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
