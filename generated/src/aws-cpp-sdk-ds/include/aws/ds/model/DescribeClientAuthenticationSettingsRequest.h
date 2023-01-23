/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ds/model/ClientAuthenticationType.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   */
  class DescribeClientAuthenticationSettingsRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API DescribeClientAuthenticationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClientAuthenticationSettings"; }

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
    inline DescribeClientAuthenticationSettingsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory for which to retrieve information.</p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The type of client authentication for which to retrieve information. If no
     * type is specified, a list of all client authentication types that are supported
     * for the specified directory is retrieved.</p>
     */
    inline const ClientAuthenticationType& GetType() const{ return m_type; }

    /**
     * <p>The type of client authentication for which to retrieve information. If no
     * type is specified, a list of all client authentication types that are supported
     * for the specified directory is retrieved.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of client authentication for which to retrieve information. If no
     * type is specified, a list of all client authentication types that are supported
     * for the specified directory is retrieved.</p>
     */
    inline void SetType(const ClientAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of client authentication for which to retrieve information. If no
     * type is specified, a list of all client authentication types that are supported
     * for the specified directory is retrieved.</p>
     */
    inline void SetType(ClientAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of client authentication for which to retrieve information. If no
     * type is specified, a list of all client authentication types that are supported
     * for the specified directory is retrieved.</p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithType(const ClientAuthenticationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of client authentication for which to retrieve information. If no
     * type is specified, a list of all client authentication types that are supported
     * for the specified directory is retrieved.</p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithType(ClientAuthenticationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <i>DescribeClientAuthenticationSettingsResult.NextToken</i> value from a
     * previous call to <a>DescribeClientAuthenticationSettings</a>. Pass null if this
     * is the first call.</p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation. </p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation. </p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation. </p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of items to return. If this value is zero, the maximum
     * number of items is specified by the limitations of the operation. </p>
     */
    inline DescribeClientAuthenticationSettingsRequest& WithLimit(int value) { SetLimit(value); return *this;}

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    ClientAuthenticationType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
