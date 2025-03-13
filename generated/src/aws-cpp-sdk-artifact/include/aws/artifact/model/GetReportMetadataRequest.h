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
  class GetReportMetadataRequest : public ArtifactRequest
  {
  public:
    AWS_ARTIFACT_API GetReportMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReportMetadata"; }

    AWS_ARTIFACT_API Aws::String SerializePayload() const override;

    AWS_ARTIFACT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Unique resource ID for the report resource.</p>
     */
    inline const Aws::String& GetReportId() const { return m_reportId; }
    inline bool ReportIdHasBeenSet() const { return m_reportIdHasBeenSet; }
    template<typename ReportIdT = Aws::String>
    void SetReportId(ReportIdT&& value) { m_reportIdHasBeenSet = true; m_reportId = std::forward<ReportIdT>(value); }
    template<typename ReportIdT = Aws::String>
    GetReportMetadataRequest& WithReportId(ReportIdT&& value) { SetReportId(std::forward<ReportIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version for the report resource.</p>
     */
    inline long long GetReportVersion() const { return m_reportVersion; }
    inline bool ReportVersionHasBeenSet() const { return m_reportVersionHasBeenSet; }
    inline void SetReportVersion(long long value) { m_reportVersionHasBeenSet = true; m_reportVersion = value; }
    inline GetReportMetadataRequest& WithReportVersion(long long value) { SetReportVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_reportId;
    bool m_reportIdHasBeenSet = false;

    long long m_reportVersion{0};
    bool m_reportVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Artifact
} // namespace Aws
