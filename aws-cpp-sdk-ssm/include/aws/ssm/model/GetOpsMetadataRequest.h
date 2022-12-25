/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetOpsMetadataRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetOpsMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetOpsMetadata"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const{ return m_opsMetadataArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline bool OpsMetadataArnHasBeenSet() const { return m_opsMetadataArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline void SetOpsMetadataArn(const Aws::String& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline void SetOpsMetadataArn(Aws::String&& value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline void SetOpsMetadataArn(const char* value) { m_opsMetadataArnHasBeenSet = true; m_opsMetadataArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline GetOpsMetadataRequest& WithOpsMetadataArn(const Aws::String& value) { SetOpsMetadataArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline GetOpsMetadataRequest& WithOpsMetadataArn(Aws::String&& value) { SetOpsMetadataArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an OpsMetadata Object to view.</p>
     */
    inline GetOpsMetadataRequest& WithOpsMetadataArn(const char* value) { SetOpsMetadataArn(value); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline GetOpsMetadataRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline GetOpsMetadataRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline GetOpsMetadataRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to start the list. Use this token to get the next set of results.</p>
     */
    inline GetOpsMetadataRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_opsMetadataArn;
    bool m_opsMetadataArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
