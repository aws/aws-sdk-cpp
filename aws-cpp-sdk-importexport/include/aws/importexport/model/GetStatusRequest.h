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
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ImportExport
{
namespace Model
{

  /**
   * Input structure for the GetStatus operation.
   */
  class AWS_IMPORTEXPORT_API GetStatusRequest : public ImportExportRequest
  {
  public:
    GetStatusRequest();
    Aws::String SerializePayload() const override;

    
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    
    inline GetStatusRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    
    inline GetStatusRequest& WithJobId(Aws::String&& value) { SetJobId(value); return *this;}

    
    inline GetStatusRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

    
    inline const Aws::String& GetAPIVersion() const{ return m_aPIVersion; }

    
    inline void SetAPIVersion(const Aws::String& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(Aws::String&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(const char* value) { m_aPIVersionHasBeenSet = true; m_aPIVersion.assign(value); }

    
    inline GetStatusRequest& WithAPIVersion(const Aws::String& value) { SetAPIVersion(value); return *this;}

    
    inline GetStatusRequest& WithAPIVersion(Aws::String&& value) { SetAPIVersion(value); return *this;}

    
    inline GetStatusRequest& WithAPIVersion(const char* value) { SetAPIVersion(value); return *this;}

  private:
    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;
    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
