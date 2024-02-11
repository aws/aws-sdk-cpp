/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-data-exports/BCMDataExports_EXPORTS.h>
#include <aws/bcm-data-exports/BCMDataExportsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

  /**
   */
  class GetExportRequest : public BCMDataExportsRequest
  {
  public:
    AWS_BCMDATAEXPORTS_API GetExportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetExport"; }

    AWS_BCMDATAEXPORTS_API Aws::String SerializePayload() const override;

    AWS_BCMDATAEXPORTS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline const Aws::String& GetExportArn() const{ return m_exportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const Aws::String& value) { m_exportArnHasBeenSet = true; m_exportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(Aws::String&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline void SetExportArn(const char* value) { m_exportArnHasBeenSet = true; m_exportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline GetExportRequest& WithExportArn(const Aws::String& value) { SetExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline GetExportRequest& WithExportArn(Aws::String&& value) { SetExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for this export.</p>
     */
    inline GetExportRequest& WithExportArn(const char* value) { SetExportArn(value); return *this;}

  private:

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
