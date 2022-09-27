/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code> <a>ListTags</a> </code> operation.
   * Specify the <code>ARN</code> of the domain that the tags you want to view are
   * attached to. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListTagsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API ListTagsRequest : public OpenSearchServiceRequest
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
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline ListTagsRequest& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline ListTagsRequest& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>Specify the <code>ARN</code> of the domain that the tags you want to view are
     * attached to. </p>
     */
    inline ListTagsRequest& WithARN(const char* value) { SetARN(value); return *this;}

  private:

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
