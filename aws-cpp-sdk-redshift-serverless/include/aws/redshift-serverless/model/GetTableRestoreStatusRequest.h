/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class GetTableRestoreStatusRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API GetTableRestoreStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTableRestoreStatus"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline const Aws::String& GetTableRestoreRequestId() const{ return m_tableRestoreRequestId; }

    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline bool TableRestoreRequestIdHasBeenSet() const { return m_tableRestoreRequestIdHasBeenSet; }

    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline void SetTableRestoreRequestId(const Aws::String& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = value; }

    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline void SetTableRestoreRequestId(Aws::String&& value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId = std::move(value); }

    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline void SetTableRestoreRequestId(const char* value) { m_tableRestoreRequestIdHasBeenSet = true; m_tableRestoreRequestId.assign(value); }

    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline GetTableRestoreStatusRequest& WithTableRestoreRequestId(const Aws::String& value) { SetTableRestoreRequestId(value); return *this;}

    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline GetTableRestoreStatusRequest& WithTableRestoreRequestId(Aws::String&& value) { SetTableRestoreRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the <code>RestoreTableFromSnapshot</code> request to return status
     * for.</p>
     */
    inline GetTableRestoreStatusRequest& WithTableRestoreRequestId(const char* value) { SetTableRestoreRequestId(value); return *this;}

  private:

    Aws::String m_tableRestoreRequestId;
    bool m_tableRestoreRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
