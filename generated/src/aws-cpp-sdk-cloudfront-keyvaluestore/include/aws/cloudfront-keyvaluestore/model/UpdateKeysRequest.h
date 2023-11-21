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
    AWS_CLOUDFRONTKEYVALUESTORE_API UpdateKeysRequest();

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

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline const Aws::String& GetKvsARN() const{ return m_kvsARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline bool KvsARNHasBeenSet() const { return m_kvsARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(const Aws::String& value) { m_kvsARNHasBeenSet = true; m_kvsARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(Aws::String&& value) { m_kvsARNHasBeenSet = true; m_kvsARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline void SetKvsARN(const char* value) { m_kvsARNHasBeenSet = true; m_kvsARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline UpdateKeysRequest& WithKvsARN(const Aws::String& value) { SetKvsARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline UpdateKeysRequest& WithKvsARN(Aws::String&& value) { SetKvsARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Key Value Store.</p>
     */
    inline UpdateKeysRequest& WithKvsARN(const char* value) { SetKvsARN(value); return *this;}


    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline const Aws::String& GetIfMatch() const{ return m_ifMatch; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline bool IfMatchHasBeenSet() const { return m_ifMatchHasBeenSet; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(const Aws::String& value) { m_ifMatchHasBeenSet = true; m_ifMatch = value; }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(Aws::String&& value) { m_ifMatchHasBeenSet = true; m_ifMatch = std::move(value); }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline void SetIfMatch(const char* value) { m_ifMatchHasBeenSet = true; m_ifMatch.assign(value); }

    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline UpdateKeysRequest& WithIfMatch(const Aws::String& value) { SetIfMatch(value); return *this;}

    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline UpdateKeysRequest& WithIfMatch(Aws::String&& value) { SetIfMatch(std::move(value)); return *this;}

    /**
     * <p>The current version (ETag) of the Key Value Store that you are updating keys
     * of, which you can get using DescribeKeyValueStore.</p>
     */
    inline UpdateKeysRequest& WithIfMatch(const char* value) { SetIfMatch(value); return *this;}


    /**
     * <p>List of key value pairs to put.</p>
     */
    inline const Aws::Vector<PutKeyRequestListItem>& GetPuts() const{ return m_puts; }

    /**
     * <p>List of key value pairs to put.</p>
     */
    inline bool PutsHasBeenSet() const { return m_putsHasBeenSet; }

    /**
     * <p>List of key value pairs to put.</p>
     */
    inline void SetPuts(const Aws::Vector<PutKeyRequestListItem>& value) { m_putsHasBeenSet = true; m_puts = value; }

    /**
     * <p>List of key value pairs to put.</p>
     */
    inline void SetPuts(Aws::Vector<PutKeyRequestListItem>&& value) { m_putsHasBeenSet = true; m_puts = std::move(value); }

    /**
     * <p>List of key value pairs to put.</p>
     */
    inline UpdateKeysRequest& WithPuts(const Aws::Vector<PutKeyRequestListItem>& value) { SetPuts(value); return *this;}

    /**
     * <p>List of key value pairs to put.</p>
     */
    inline UpdateKeysRequest& WithPuts(Aws::Vector<PutKeyRequestListItem>&& value) { SetPuts(std::move(value)); return *this;}

    /**
     * <p>List of key value pairs to put.</p>
     */
    inline UpdateKeysRequest& AddPuts(const PutKeyRequestListItem& value) { m_putsHasBeenSet = true; m_puts.push_back(value); return *this; }

    /**
     * <p>List of key value pairs to put.</p>
     */
    inline UpdateKeysRequest& AddPuts(PutKeyRequestListItem&& value) { m_putsHasBeenSet = true; m_puts.push_back(std::move(value)); return *this; }


    /**
     * <p>List of keys to delete.</p>
     */
    inline const Aws::Vector<DeleteKeyRequestListItem>& GetDeletes() const{ return m_deletes; }

    /**
     * <p>List of keys to delete.</p>
     */
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }

    /**
     * <p>List of keys to delete.</p>
     */
    inline void SetDeletes(const Aws::Vector<DeleteKeyRequestListItem>& value) { m_deletesHasBeenSet = true; m_deletes = value; }

    /**
     * <p>List of keys to delete.</p>
     */
    inline void SetDeletes(Aws::Vector<DeleteKeyRequestListItem>&& value) { m_deletesHasBeenSet = true; m_deletes = std::move(value); }

    /**
     * <p>List of keys to delete.</p>
     */
    inline UpdateKeysRequest& WithDeletes(const Aws::Vector<DeleteKeyRequestListItem>& value) { SetDeletes(value); return *this;}

    /**
     * <p>List of keys to delete.</p>
     */
    inline UpdateKeysRequest& WithDeletes(Aws::Vector<DeleteKeyRequestListItem>&& value) { SetDeletes(std::move(value)); return *this;}

    /**
     * <p>List of keys to delete.</p>
     */
    inline UpdateKeysRequest& AddDeletes(const DeleteKeyRequestListItem& value) { m_deletesHasBeenSet = true; m_deletes.push_back(value); return *this; }

    /**
     * <p>List of keys to delete.</p>
     */
    inline UpdateKeysRequest& AddDeletes(DeleteKeyRequestListItem&& value) { m_deletesHasBeenSet = true; m_deletes.push_back(std::move(value)); return *this; }

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
