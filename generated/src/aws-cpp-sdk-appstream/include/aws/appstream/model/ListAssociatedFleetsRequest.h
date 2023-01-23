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
  class ListAssociatedFleetsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API ListAssociatedFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociatedFleets"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the stack.</p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p>The name of the stack.</p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p>The name of the stack.</p>
     */
    inline ListAssociatedFleetsRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline ListAssociatedFleetsRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack.</p>
     */
    inline ListAssociatedFleetsRequest& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListAssociatedFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListAssociatedFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline ListAssociatedFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
