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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   */
  class AWS_RDS_API CancelExportTaskRequest : public RDSRequest
  {
  public:
    CancelExportTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelExportTask"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline const Aws::String& GetExportTaskIdentifier() const{ return m_exportTaskIdentifier; }

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline bool ExportTaskIdentifierHasBeenSet() const { return m_exportTaskIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline void SetExportTaskIdentifier(const Aws::String& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = value; }

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline void SetExportTaskIdentifier(Aws::String&& value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier = std::move(value); }

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline void SetExportTaskIdentifier(const char* value) { m_exportTaskIdentifierHasBeenSet = true; m_exportTaskIdentifier.assign(value); }

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline CancelExportTaskRequest& WithExportTaskIdentifier(const Aws::String& value) { SetExportTaskIdentifier(value); return *this;}

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline CancelExportTaskRequest& WithExportTaskIdentifier(Aws::String&& value) { SetExportTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the snapshot export task to cancel.</p>
     */
    inline CancelExportTaskRequest& WithExportTaskIdentifier(const char* value) { SetExportTaskIdentifier(value); return *this;}

  private:

    Aws::String m_exportTaskIdentifier;
    bool m_exportTaskIdentifierHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
