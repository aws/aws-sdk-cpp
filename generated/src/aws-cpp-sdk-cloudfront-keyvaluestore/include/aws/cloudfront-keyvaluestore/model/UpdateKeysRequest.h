/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront-keyvaluestore/model/PutKeyRequestListItem.h>
#include <aws/cloudfront-keyvaluestore/model/DeleteKeyRequestListItem.h>
#include <utility>

namespace Aws
{
namespace CloudFrontKeyValueStore
{
namespace Model
{

  /**
   */
  class UpdateKeysRequest : public CloudFrontKeyValueStoreRequest
  {
  public:
    AWS_CLOUDFRONTKEYVALUESTORE_API UpdateKeysRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateKeys"; }

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::String SerializePayload() const override;

    AWS_CLOUDFRONTKEYVALUESTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

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
    UpdateKeysRequest& WithKvsARN(KvsARNT&& value) { SetKvsARN(std::forward<KvsARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline const Aws::String& GetIfMatch() const { return m_ifMatch; }
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }
    template<typename IfMatchT = Aws::String>
    void SetIfMatch(IfMatchT&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::forward<IfMatchT>(value); }
    template<typename IfMatchT = Aws::String>
    UpdateKeysRequest& WithIfMatch(IfMatchT&& value) { SetIfMatch(std::forward<IfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of key value pairs to put.</p>
     */
    inline const Aws::Vector<PutKeyRequestListItem>& GetPuts() const { return m_puts; }
    inline bool PutsHasBeenSet() const { return m_putsHasBeenSet; }
    template<typename PutsT = Aws::Vector<PutKeyRequestListItem>>
    void SetPuts(PutsT&& value) { m_putsHasBeenSet = true; m_puts = std::forward<PutsT>(value); }
    template<typename PutsT = Aws::Vector<PutKeyRequestListItem>>
    UpdateKeysRequest& WithPuts(PutsT&& value) { SetPuts(std::forward<PutsT>(value)); return *this;}
    template<typename PutsT = PutKeyRequestListItem>
    UpdateKeysRequest& AddPuts(PutsT&& value) { m_putsHasBeenSet = true; m_puts.emplace_back(std::forward<PutsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of keys to delete.</p>
     */
    inline const Aws::Vector<DeleteKeyRequestListItem>& GetDeletes() const { return m_deletes; }
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }
    template<typename DeletesT = Aws::Vector<DeleteKeyRequestListItem>>
    void SetDeletes(DeletesT&& value) { m_deletesHasBeenSet = true; m_deletes = std::forward<DeletesT>(value); }
    template<typename DeletesT = Aws::Vector<DeleteKeyRequestListItem>>
    UpdateKeysRequest& WithDeletes(DeletesT&& value) { SetDeletes(std::forward<DeletesT>(value)); return *this;}
    template<typename DeletesT = DeleteKeyRequestListItem>
    UpdateKeysRequest& AddDeletes(DeletesT&& value) { m_deletesHasBeenSet = true; m_deletes.emplace_back(std::forward<DeletesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_kvsARN;
    bool m_kvsARNHasBeenSet = false;

    Aws::String m_ifMatch;
    bool m_ifMatchHasBeenSet = false;

    Aws::Vector<PutKeyRequestListItem> m_puts;
    bool m_putsHasBeenSet = false;

    Aws::Vector<DeleteKeyRequestListItem> m_deletes;
    bool m_deletesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFrontKeyValueStore
} // namespace Aws
