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
   * Input structure for the ListJobs operation.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/importexport-2010-06-01/ListJobsInput">AWS
   * API Reference</a></p>
   */
  class AWS_IMPORTEXPORT_API ListJobsRequest : public ImportExportRequest
  {
  public:
    ListJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListJobs"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    
    inline int GetMaxJobs() const{ return m_maxJobs; }

    
    inline bool MaxJobsHasBeenSet() const { return m_maxJobsHasBeenSet; }

    
    inline void SetMaxJobs(int value) { m_maxJobsHasBeenSet = true; m_maxJobs = value; }

    
    inline ListJobsRequest& WithMaxJobs(int value) { SetMaxJobs(value); return *this;}


    
    inline const Aws::String& GetMarker() const{ return m_marker; }

    
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    
    inline ListJobsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    
    inline ListJobsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    
    inline ListJobsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const Aws::String& GetAPIVersion() const{ return m_aPIVersion; }

    
    inline bool APIVersionHasBeenSet() const { return m_aPIVersionHasBeenSet; }

    
    inline void SetAPIVersion(const Aws::String& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = value; }

    
    inline void SetAPIVersion(Aws::String&& value) { m_aPIVersionHasBeenSet = true; m_aPIVersion = std::move(value); }

    
    inline void SetAPIVersion(const char* value) { m_aPIVersionHasBeenSet = true; m_aPIVersion.assign(value); }

    
    inline ListJobsRequest& WithAPIVersion(const Aws::String& value) { SetAPIVersion(value); return *this;}

    
    inline ListJobsRequest& WithAPIVersion(Aws::String&& value) { SetAPIVersion(std::move(value)); return *this;}

    
    inline ListJobsRequest& WithAPIVersion(const char* value) { SetAPIVersion(value); return *this;}

  private:

    int m_maxJobs;
    bool m_maxJobsHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    Aws::String m_aPIVersion;
    bool m_aPIVersionHasBeenSet;
  };

} // namespace Model
} // namespace ImportExport
} // namespace Aws
