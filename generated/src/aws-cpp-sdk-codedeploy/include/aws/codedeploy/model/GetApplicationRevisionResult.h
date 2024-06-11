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
    AWS_CODEDEPLOY_API GetApplicationRevisionResult();
    AWS_CODEDEPLOY_API GetApplicationRevisionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEDEPLOY_API GetApplicationRevisionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }
    inline GetApplicationRevisionResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}
    inline GetApplicationRevisionResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}
    inline GetApplicationRevisionResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the revision, including type and location.</p>
     */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }
    inline void SetRevision(const RevisionLocation& value) { m_revision = value; }
    inline void SetRevision(RevisionLocation&& value) { m_revision = std::move(value); }
    inline GetApplicationRevisionResult& WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}
    inline GetApplicationRevisionResult& WithRevision(RevisionLocation&& value) { SetRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>General information about the revision.</p>
     */
    inline const GenericRevisionInfo& GetRevisionInfo() const{ return m_revisionInfo; }
    inline void SetRevisionInfo(const GenericRevisionInfo& value) { m_revisionInfo = value; }
    inline void SetRevisionInfo(GenericRevisionInfo&& value) { m_revisionInfo = std::move(value); }
    inline GetApplicationRevisionResult& WithRevisionInfo(const GenericRevisionInfo& value) { SetRevisionInfo(value); return *this;}
    inline GetApplicationRevisionResult& WithRevisionInfo(GenericRevisionInfo&& value) { SetRevisionInfo(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetApplicationRevisionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetApplicationRevisionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetApplicationRevisionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;

    RevisionLocation m_revision;

    GenericRevisionInfo m_revisionInfo;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
