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
  class AWS_IMPORTEXPORT_API UpdateJobRequest : public ImportExportRequest
  {
  public:
    UpdateJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateJob"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    
    inline UpdateJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    
    inline UpdateJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    
    inline UpdateJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Aws::String& GetManifest() const{ return m_manifest; }

    
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }

    
    inline void SetManifest(const Aws::String& value) { m_manifestHasBeenSet = true; m_manifest = value; }

    
    inline void SetManifest(Aws::String&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }

    
    inline void SetManifest(const char* value) { m_manifestHasBeenSet = true; m_manifest.assign(value); }

    
    inline UpdateJobRequest& WithManifest(const Aws::String& value) { SetManifest(value); return *this;}

    
    inline UpdateJobRequest& WithManifest(Aws::String&& value) { SetManifest(std::move(value)); return *this;}

    
    inline UpdateJobRequest& WithManifest(const char* value) { SetManifest(value); return *this;}


    
    inline const JobType& GetJobType() const{ return m_jobType; }

    
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }

    
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = std::move(value); }

    
    inline UpdateJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    
    inline UpdateJobRequest& WithJobType(JobType&& value) { SetJobType(std::move(value)); return *this;}


    
    inline bool GetValidateOnly() const{ return m_validateOnly; }

    
    inline bool ValidateOnlyHasBeenSet() const { return m_validateOnlyHasBeenSet; }

    
    inline void SetValidateOnly(bool value) { m_validateOnlyHasBeenSet = true; m_validateOnly = value; }

    
    inline UpdateJobRequest& WithValidateOnly(bool value) { SetValidateOnly(value); return *this;}


    
    inline const Aws::String& GetAPIVersion() const{ return m_aPIVersion; }

    
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }

    
    inline void SetAPIVersion(const Aws::String& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(Aws::String&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::move(value); }

    
    inline void SetAPIVersion(const char* value) { m_aPIVersionHasBeenSet = true; m_aPIVersion.assign(value); }

    
    inline UpdateJobRequest& WithAPIVersion(const Aws::String& value) { SetAPIVersion(value); return *this;}

    
    inline UpdateJobRequest& WithAPIVersion(Aws::String&& value) { SetAPIVersion(std::move(value)); return *this;}

    
    inline UpdateJobRequest& WithAPIVersion(const char* value) { SetAPIVersion(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_manifest;
    bool m_manifestHasBeenSet;

    JobType m_jobType;
    bool m_jobTypeHasBeenSet;

    bool m_validateOnly;
    bool m_validateOnlyHasBeenSet;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
