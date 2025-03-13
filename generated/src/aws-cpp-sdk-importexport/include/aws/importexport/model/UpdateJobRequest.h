/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/importexport/ImportExportRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/importexport/model/JobType.h>
#include <utility>

namespace Aws
{
namespace ImportExport
{
namespace Model
{

  /**
   * Input structure for the UpateJob operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/UpdateJobInput">AWS
   * API Reference</a></p>
   */
  class UpdateJobRequest : public ImportExportRequest
  {
  public:
    AWS_IMPORTEXPORT_API UpdateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    AWS_IMPORTEXPORT_API Aws::String SerializePayload() const override;

  protected:
    AWS_IMPORTEXPORT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline const Aws::String& GetJobId() const { return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    UpdateJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = Aws::String>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = Aws::String>
    UpdateJobRequest& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline UpdateJobRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    
    inline bool GetValidateOnly() const { return m_validateOnly; }
    inline bool ValidateOnlyHasBeenSet() const { return m_validateOnlyHasBeenSet; }
    inline void SetValidateOnly(bool value) { m_validateOnlyHasBeenSet = true; m_validateOnly = value; }
    inline UpdateJobRequest& WithValidateOnly(bool value) { SetValidateOnly(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAPIVersion() const { return m_aPIVersion; }
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }
    template<typename APIVersionT = Aws::String>
    void SetAPIVersion(APIVersionT&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::forward<APIVersionT>(value); }
    template<typename APIVersionT = Aws::String>
    UpdateJobRequest& WithAPIVersion(APIVersionT&& value) { SetAPIVersion(std::forward<APIVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_manifest;
    bool m_manifestHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    bool m_validateOnly{false};
    bool m_validateOnlyHasBeenSet = false;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
