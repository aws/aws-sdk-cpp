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
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>RemoveTags</a></code> operation.
   * Specify the <code>ARN</code> for the Elasticsearch domain from which you want to
   * remove the specified <code>TagKey</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/RemoveTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API RemoveTagsRequest : public ElasticsearchServiceRequest
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
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline RemoveTagsRequest& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline RemoveTagsRequest& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>ARN</code> for the Elasticsearch domain from which you
     * want to delete the specified tags.</p>
     */
    inline RemoveTagsRequest& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline RemoveTagsRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline RemoveTagsRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline RemoveTagsRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline RemoveTagsRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the <code>TagKey</code> list which you want to remove from the
     * Elasticsearch domain.</p>
     */
    inline RemoveTagsRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
