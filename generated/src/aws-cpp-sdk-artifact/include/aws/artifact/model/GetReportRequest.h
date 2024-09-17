/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/ArtifactRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Artifact
{
namespace Model
{

  /**
   */
  class GetReportRequest : public ArtifactRequest
  {
  public:
    AWS_ARTIFACT_API GetReportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReport"; }

    AWS_ARTIFACT_API Aws::String SerializePayload() const override;

    AWS_ARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline const Aws::String& GetReportId() const{ return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    inline void SetReportId(const Aws::String& value) { m_reportIdHasBeenSet = true; m_reportId = value; }
    inline void SetReportId(Aws::String&& value) { m_reportIdHasBeenSet = true; m_reportId = std::move(value); }
    inline void SetReportId(const char* value) { m_reportIdHasBeenSet = true; m_reportId.assign(value); }
    inline GetReportRequest& WithReportId(const Aws::String& value) { SetReportId(value); return *this;}
    inline GetReportRequest& WithReportId(Aws::String&& value) { SetReportId(std::move(value)); return *this;}
    inline GetReportRequest& WithReportId(const char* value) { SetReportId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version for the report resource.</p>
     */
    inline long long GetReportVersion() const{ return m_reportVersion; }
    inline bool ReportVersionHasBeenSet() const { return m_reportVersionHasBeenSet; }
    inline void SetReportVersion(long long value) { m_reportVersionHasBeenSet = true; m_reportVersion = value; }
    inline GetReportRequest& WithReportVersion(long long value) { SetReportVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique download token provided by GetTermForReport API.</p>
     */
    inline const Aws::String& GetTermToken() const{ return m_termToken; }
    inline bool TermTokenHasBeenSet() const { return m_termTokenHasBeenSet; }
    inline void SetTermToken(const Aws::String& value) { m_termTokenHasBeenSet = true; m_termToken = value; }
    inline void SetTermToken(Aws::String&& value) { m_termTokenHasBeenSet = true; m_termToken = std::move(value); }
    inline void SetTermToken(const char* value) { m_termTokenHasBeenSet = true; m_termToken.assign(value); }
    inline GetReportRequest& WithTermToken(const Aws::String& value) { SetTermToken(value); return *this;}
    inline GetReportRequest& WithTermToken(Aws::String&& value) { SetTermToken(std::move(value)); return *this;}
    inline GetReportRequest& WithTermToken(const char* value) { SetTermToken(value); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    long long m_reportVersion;
    bool m_reportVersionHasBeenSet = false;

    Aws::String m_termToken;
    bool m_termTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
