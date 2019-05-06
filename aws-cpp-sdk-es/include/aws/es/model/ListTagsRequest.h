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
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code><a>ListTags</a></code> operation.
   * Specify the <code>ARN</code> for the Elasticsearch domain to which the tags are
   * attached that you want to view are attached.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ListTagsRequest : public ElasticsearchServiceRequest
  {
  public:
    ListTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTags"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline ListTagsRequest& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline ListTagsRequest& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p> Specify the <code>ARN</code> for the Elasticsearch domain to which the tags
     * are attached that you want to view.</p>
     */
    inline ListTagsRequest& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
