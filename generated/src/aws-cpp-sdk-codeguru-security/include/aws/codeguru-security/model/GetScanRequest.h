/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class GetScanRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API GetScanRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetScan"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;

    AWS_CODEGURUSECURITY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline GetScanRequest& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline GetScanRequest& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>UUID that identifies the individual scan run you want to view details about.
     * You retrieve this when you call the <code>CreateScan</code> operation. Defaults
     * to the latest scan run if missing.</p>
     */
    inline GetScanRequest& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }

    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }

    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }

    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }

    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }

    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline GetScanRequest& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}

    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline GetScanRequest& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scan you want to view details about.</p>
     */
    inline GetScanRequest& WithScanName(const char* value) { SetScanName(value); return *this;}

  private:

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
