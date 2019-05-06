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
#include <utility>

namespace Aws
{
namespace ImportExport
{
namespace Model
{

  /**
   * Input structure for the CancelJob operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/CancelJobInput">AWS
   * API Reference</a></p>
   */
  class AWS_IMPORTEXPORT_API CancelJobRequest : public ImportExportRequest
  {
  public:
    CancelJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelJob"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    
    inline CancelJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    
    inline CancelJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    
    inline CancelJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}


    
    inline const Aws::String& GetAPIVersion() const{ return m_aPIVersion; }

    
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }

    
    inline void SetAPIVersion(const Aws::String& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(Aws::String&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::move(value); }

    
    inline void SetAPIVersion(const char* value) { m_aPIVersionHasBeenSet = true; m_aPIVersion.assign(value); }

    
    inline CancelJobRequest& WithAPIVersion(const Aws::String& value) { SetAPIVersion(value); return *this;}

    
    inline CancelJobRequest& WithAPIVersion(Aws::String&& value) { SetAPIVersion(std::move(value)); return *this;}

    
    inline CancelJobRequest& WithAPIVersion(const char* value) { SetAPIVersion(value); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
