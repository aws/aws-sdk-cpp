/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code> <a>RemoveTags</a> </code>
   * operation. Specify the <code>ARN</code> for the domain from which you want to
   * remove the specified <code>TagKey</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/RemoveTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API RemoveTagsRequest : public OpenSearchServiceRequest
  {
  public:
    RemoveTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveTags"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline RemoveTagsRequest& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline RemoveTagsRequest& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The <code>ARN</code> of the domain from which you want to delete the
     * specified tags. </p>
     */
    inline RemoveTagsRequest& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline RemoveTagsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline RemoveTagsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline RemoveTagsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline RemoveTagsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>The <code>TagKey</code> list you want to remove from the domain. </p>
     */
    inline RemoveTagsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
