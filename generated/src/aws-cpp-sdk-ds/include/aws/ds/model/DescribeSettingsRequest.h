/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/DirectoryConfigurationStatus.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class DescribeSettingsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSettings"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline DescribeSettingsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline DescribeSettingsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline DescribeSettingsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The status of the directory settings for which to retrieve information.</p>
     */
    inline const DirectoryConfigurationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the directory settings for which to retrieve information.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the directory settings for which to retrieve information.</p>
     */
    inline void SetStatus(const DirectoryConfigurationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the directory settings for which to retrieve information.</p>
     */
    inline void SetStatus(DirectoryConfigurationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the directory settings for which to retrieve information.</p>
     */
    inline DescribeSettingsRequest& WithStatus(const DirectoryConfigurationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the directory settings for which to retrieve information.</p>
     */
    inline DescribeSettingsRequest& WithStatus(DirectoryConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline DescribeSettingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline DescribeSettingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>DescribeSettingsResult.NextToken</code> value from a previous call
     * to <a>DescribeSettings</a>. Pass null if this is the first call.</p>
     */
    inline DescribeSettingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    DirectoryConfigurationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
