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


    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationName = value; }

    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationName = std::move(value); }

    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationName.assign(value); }

    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline GetApplicationRevisionResult& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline GetApplicationRevisionResult& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application that corresponds to the revision.</p>
     */
    inline GetApplicationRevisionResult& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Additional information about the revision, including type and location.</p>
     */
    inline const RevisionLocation& GetRevision() const{ return m_revision; }

    /**
     * <p>Additional information about the revision, including type and location.</p>
     */
    inline void SetRevision(const RevisionLocation& value) { m_revision = value; }

    /**
     * <p>Additional information about the revision, including type and location.</p>
     */
    inline void SetRevision(RevisionLocation&& value) { m_revision = std::move(value); }

    /**
     * <p>Additional information about the revision, including type and location.</p>
     */
    inline GetApplicationRevisionResult& WithRevision(const RevisionLocation& value) { SetRevision(value); return *this;}

    /**
     * <p>Additional information about the revision, including type and location.</p>
     */
    inline GetApplicationRevisionResult& WithRevision(RevisionLocation&& value) { SetRevision(std::move(value)); return *this;}


    /**
     * <p>General information about the revision.</p>
     */
    inline const GenericRevisionInfo& GetRevisionInfo() const{ return m_revisionInfo; }

    /**
     * <p>General information about the revision.</p>
     */
    inline void SetRevisionInfo(const GenericRevisionInfo& value) { m_revisionInfo = value; }

    /**
     * <p>General information about the revision.</p>
     */
    inline void SetRevisionInfo(GenericRevisionInfo&& value) { m_revisionInfo = std::move(value); }

    /**
     * <p>General information about the revision.</p>
     */
    inline GetApplicationRevisionResult& WithRevisionInfo(const GenericRevisionInfo& value) { SetRevisionInfo(value); return *this;}

    /**
     * <p>General information about the revision.</p>
     */
    inline GetApplicationRevisionResult& WithRevisionInfo(GenericRevisionInfo&& value) { SetRevisionInfo(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;

    RevisionLocation m_revision;

    GenericRevisionInfo m_revisionInfo;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
