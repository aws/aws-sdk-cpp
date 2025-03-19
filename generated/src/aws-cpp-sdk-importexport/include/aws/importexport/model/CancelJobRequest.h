/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CancelJobRequest : public ImportExportRequest
  {
  public:
    AWS_IMPORTEXPORT_API CancelJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelJob"; }

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
    CancelJobRequest& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetAPIVersion() const { return m_aPIVersion; }
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }
    template<typename APIVersionT = Aws::String>
    void SetAPIVersion(APIVersionT&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::forward<APIVersionT>(value); }
    template<typename APIVersionT = Aws::String>
    CancelJobRequest& WithAPIVersion(APIVersionT&& value) { SetAPIVersion(std::forward<APIVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
