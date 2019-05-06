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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   * <p>Contains the output from the <code>DeleteTags</code> action. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteTagsMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DeleteTagsRequest : public RedshiftRequest
  {
  public:
    DeleteTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTags"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline DeleteTagsRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline DeleteTagsRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) from which you want to remove the tag or tags.
     * For example, <code>arn:aws:redshift:us-east-1:123456789:cluster:t1</code>. </p>
     */
    inline DeleteTagsRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline DeleteTagsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline DeleteTagsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline DeleteTagsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline DeleteTagsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The tag key that you want to delete.</p>
     */
    inline DeleteTagsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
