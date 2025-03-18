/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/importexport/ImportExport_EXPORTS.h>
#include <aws/importexport/ImportExportRequest.h>
#include <aws/importexport/model/JobType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ImportExport
{
namespace Model
{

  /**
   * Input structure for the CreateJob operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CreateJobInput">AWS
   * API Reference</a></p>
   */
  class CreateJobRequest : public ImportExportRequest
  {
  public:
    AWS_IMPORTEXPORT_API CreateJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

    AWS_IMPORTEXPORT_API Aws::String SerializePayload() const override;

  protected:
    AWS_IMPORTEXPORT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline CreateJobRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = Aws::String>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = Aws::String>
    CreateJobRequest& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetManifestAddendum() const { return m_manifestAddendum; }
    inline bool ManifestAddendumHasBeenSet() const { return m_manifestAddendumHasBeenSet; }
    template<typename ManifestAddendumT = Aws::String>
    void SetManifestAddendum(ManifestAddendumT&& value) { m_manifestAddendumHasBeenSet = true; m_manifestAddendum = std::forward<ManifestAddendumT>(value); }
    template<typename ManifestAddendumT = Aws::String>
    CreateJobRequest& WithManifestAddendum(ManifestAddendumT&& value) { SetManifestAddendum(std::forward<ManifestAddendumT>(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetValidateOnly() const { return m_validateOnly; }
    inline bool ValidateOnlyHasBeenSet() const { return m_validateOnlyHasBeenSet; }
    inline void SetValidateOnly(bool value) { m_validateOnlyHasBeenSet = true; m_validateOnly = value; }
    inline CreateJobRequest& WithValidateOnly(bool value) { SetValidateOnly(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAPIVersion() const { return m_aPIVersion; }
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }
    template<typename APIVersionT = Aws::String>
    void SetAPIVersion(APIVersionT&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::forward<APIVersionT>(value); }
    template<typename APIVersionT = Aws::String>
    CreateJobRequest& WithAPIVersion(APIVersionT&& value) { SetAPIVersion(std::forward<APIVersionT>(value)); return *this;}
    ///@}
  private:

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::String m_manifest;
    bool m_manifestHasBeenSet = false;

    Aws::String m_manifestAddendum;
    bool m_manifestAddendumHasBeenSet = false;

    bool m_validateOnly{false};
    bool m_validateOnlyHasBeenSet = false;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
