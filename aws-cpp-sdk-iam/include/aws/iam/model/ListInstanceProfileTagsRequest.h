﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API ListInstanceProfileTagsRequest : public IAMRequest
  {
  public:
    ListInstanceProfileTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInstanceProfileTags"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline const Aws::String& GetInstanceProfileName() const{ return m_instanceProfileName; }

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline bool InstanceProfileNameHasBeenSet() const { return m_instanceProfileNameHasBeenSet; }

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetInstanceProfileName(const Aws::String& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = value; }

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetInstanceProfileName(Aws::String&& value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName = std::move(value); }

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetInstanceProfileName(const char* value) { m_instanceProfileNameHasBeenSet = true; m_instanceProfileName.assign(value); }

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline ListInstanceProfileTagsRequest& WithInstanceProfileName(const Aws::String& value) { SetInstanceProfileName(value); return *this;}

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline ListInstanceProfileTagsRequest& WithInstanceProfileName(Aws::String&& value) { SetInstanceProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the IAM instance profile whose tags you want to see.</p> <p>This
     * parameter accepts (through its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters that consist of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline ListInstanceProfileTagsRequest& WithInstanceProfileName(const char* value) { SetInstanceProfileName(value); return *this;}


    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListInstanceProfileTagsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListInstanceProfileTagsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>Use this parameter only when paginating results and only after you receive a
     * response indicating that the results are truncated. Set it to the value of the
     * <code>Marker</code> element in the response that you received to indicate where
     * the next call should start.</p>
     */
    inline ListInstanceProfileTagsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items that you want in the response. If additional items exist beyond
     * the maximum that you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when more results are
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline int GetMaxItems() const{ return m_maxItems; }

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items that you want in the response. If additional items exist beyond
     * the maximum that you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when more results are
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline bool MaxItemsHasBeenSet() const { return m_maxItemsHasBeenSet; }

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items that you want in the response. If additional items exist beyond
     * the maximum that you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when more results are
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline void SetMaxItems(int value) { m_maxItemsHasBeenSet = true; m_maxItems = value; }

    /**
     * <p>(Optional) Use this only when paginating results to indicate the maximum
     * number of items that you want in the response. If additional items exist beyond
     * the maximum that you specify, the <code>IsTruncated</code> response element is
     * <code>true</code>.</p> <p>If you do not include this parameter, it defaults to
     * 100. Note that IAM might return fewer results, even when more results are
     * available. In that case, the <code>IsTruncated</code> response element returns
     * <code>true</code>, and <code>Marker</code> contains a value to include in the
     * subsequent call that tells the service where to continue from.</p>
     */
    inline ListInstanceProfileTagsRequest& WithMaxItems(int value) { SetMaxItems(value); return *this;}

  private:

    Aws::String m_instanceProfileName;
    bool m_instanceProfileNameHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;

    int m_maxItems;
    bool m_maxItemsHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
