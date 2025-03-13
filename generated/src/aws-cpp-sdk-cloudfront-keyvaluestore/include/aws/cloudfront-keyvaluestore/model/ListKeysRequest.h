/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CloudFrontKeyValueStore
{
namespace Model
{

  /**
   */
  class ListKeysRequest : public CloudFrontKeyValueStoreRequest
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API ListKeysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListKeys"; }

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONTKEYVALUESTORE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_CLOUDFRONTKEYVALUESTORE_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline const Aws::String& GetKvsARN() const { return m_kvsARN; }
    inline bool KvsARNHasBeenSet() const { return m_kvsARNHasBeenSet; }
    template<typename KvsARNT = Aws::String>
    void SetKvsARN(KvsARNT&& value) { m_kvsARNHasBeenSet = true; m_kvsARN = std::forward<KvsARNT>(value); }
    template<typename KvsARNT = Aws::String>
    ListKeysRequest& WithKvsARN(KvsARNT&& value) { SetKvsARN(std::forward<KvsARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If nextToken is returned in the response, there are more results available.
     * Make the next call using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKeysRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of results that are returned per call. The default is 10 and
     * maximum allowed page is 50.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListKeysRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_kvsARN;
    bool m_kvsARNHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
