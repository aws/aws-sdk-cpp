/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/importexport/model/JobType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ImportExport
{
namespace Model
{

  /**
   * Input structure for the CreateJob operation.
   */
  class AWS_IMPORTEXPORT_API CreateJobRequest : public ImportExportRequest
  {
  public:
    CreateJobRequest();
    Aws::String SerializePayload() const override;

    
    inline const JobType& GetJobType() const{ return m_jobType; }

    
    inline void SetJobType(const JobType& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    
    inline void SetJobType(JobType&& value) { m_jobTypeHasBeenSet = true; m_jobType = value; }

    
    inline CreateJobRequest& WithJobType(const JobType& value) { SetJobType(value); return *this;}

    
    inline CreateJobRequest& WithJobType(JobType&& value) { SetJobType(value); return *this;}

    
    inline const Aws::String& GetManifest() const{ return m_manifest; }

    
    inline void SetManifest(const Aws::String& value) { m_manifestHasBeenSet = true; m_manifest = value; }

    
    inline void SetManifest(Aws::String&& value) { m_manifestHasBeenSet = true; m_manifest = value; }

    
    inline void SetManifest(const char* value) { m_manifestHasBeenSet = true; m_manifest.assign(value); }

    
    inline CreateJobRequest& WithManifest(const Aws::String& value) { SetManifest(value); return *this;}

    
    inline CreateJobRequest& WithManifest(Aws::String&& value) { SetManifest(value); return *this;}

    
    inline CreateJobRequest& WithManifest(const char* value) { SetManifest(value); return *this;}

    
    inline const Aws::String& GetManifestAddendum() const{ return m_manifestAddendum; }

    
    inline void SetManifestAddendum(const Aws::String& value) { m_manifestAddendumHasBeenSet = true; m_manifestAddendum = value; }

    
    inline void SetManifestAddendum(Aws::String&& value) { m_manifestAddendumHasBeenSet = true; m_manifestAddendum = value; }

    
    inline void SetManifestAddendum(const char* value) { m_manifestAddendumHasBeenSet = true; m_manifestAddendum.assign(value); }

    
    inline CreateJobRequest& WithManifestAddendum(const Aws::String& value) { SetManifestAddendum(value); return *this;}

    
    inline CreateJobRequest& WithManifestAddendum(Aws::String&& value) { SetManifestAddendum(value); return *this;}

    
    inline CreateJobRequest& WithManifestAddendum(const char* value) { SetManifestAddendum(value); return *this;}

    
    inline bool GetValidateOnly() const{ return m_validateOnly; }

    
    inline void SetValidateOnly(bool value) { m_validateOnlyHasBeenSet = true; m_validateOnly = value; }

    
    inline CreateJobRequest& WithValidateOnly(bool value) { SetValidateOnly(value); return *this;}

    
    inline const Aws::String& GetAPIVersion() const{ return m_aPIVersion; }

    
    inline void SetAPIVersion(const Aws::String& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(Aws::String&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(const char* value) { m_aPIVersionHasBeenSet = true; m_aPIVersion.assign(value); }

    
    inline CreateJobRequest& WithAPIVersion(const Aws::String& value) { SetAPIVersion(value); return *this;}

    
    inline CreateJobRequest& WithAPIVersion(Aws::String&& value) { SetAPIVersion(value); return *this;}

    
    inline CreateJobRequest& WithAPIVersion(const char* value) { SetAPIVersion(value); return *this;}

  private:
    JobType m_jobType;
    bool m_jobTypeHasBeenSet;
    Aws::String m_manifest;
    bool m_manifestHasBeenSet;
    Aws::String m_manifestAddendum;
    bool m_manifestAddendumHasBeenSet;
    bool m_validateOnly;
    bool m_validateOnlyHasBeenSet;
    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
