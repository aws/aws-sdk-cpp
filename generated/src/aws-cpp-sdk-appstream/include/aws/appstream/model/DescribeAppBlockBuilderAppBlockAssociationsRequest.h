/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DescribeAppBlockBuilderAppBlockAssociationsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlockBuilderAppBlockAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAppBlockBuilderAppBlockAssociations"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetAppBlockArn() const{ return m_appBlockArn; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const Aws::String& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = value; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(Aws::String&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::move(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const char* value) { m_appBlockArnHasBeenSet = true; m_appBlockArn.assign(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithAppBlockArn(const Aws::String& value) { SetAppBlockArn(value); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithAppBlockArn(Aws::String&& value) { SetAppBlockArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithAppBlockArn(const char* value) { SetAppBlockArn(value); return *this;}


    /**
     * <p>The name of the app block builder.</p>
     */
    inline const Aws::String& GetAppBlockBuilderName() const{ return m_appBlockBuilderName; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline bool AppBlockBuilderNameHasBeenSet() const { return m_appBlockBuilderNameHasBeenSet; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(const Aws::String& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = value; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(Aws::String&& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = std::move(value); }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(const char* value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName.assign(value); }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithAppBlockBuilderName(const Aws::String& value) { SetAppBlockBuilderName(value); return *this;}

    /**
     * <p>The name of the app block builder.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithAppBlockBuilderName(Aws::String&& value) { SetAppBlockBuilderName(std::move(value)); return *this;}

    /**
     * <p>The name of the app block builder.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithAppBlockBuilderName(const char* value) { SetAppBlockBuilderName(value); return *this;}


    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuilderAppBlockAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    Aws::String m_appBlockBuilderName;
    bool m_appBlockBuilderNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
