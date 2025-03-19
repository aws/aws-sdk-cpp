/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appsync/AppSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppSync
{
namespace Model
{

  /**
   * <p>Describes an API key.</p> <p>Customers invoke AppSync GraphQL API operations
   * with API keys as an identity mechanism. There are two key versions:</p> <p>
   * <b>da1</b>: We introduced this version at launch in November 2017. These keys
   * always expire after 7 days. Amazon DynamoDB TTL manages key expiration. These
   * keys ceased to be valid after February 21, 2018, and they should no longer be
   * used.</p> <ul> <li> <p> <code>ListApiKeys</code> returns the expiration time in
   * milliseconds.</p> </li> <li> <p> <code>CreateApiKey</code> returns the
   * expiration time in milliseconds.</p> </li> <li> <p> <code>UpdateApiKey</code> is
   * not available for this key version.</p> </li> <li> <p> <code>DeleteApiKey</code>
   * deletes the item from the table.</p> </li> <li> <p>Expiration is stored in
   * DynamoDB as milliseconds. This results in a bug where keys are not automatically
   * deleted because DynamoDB expects the TTL to be stored in seconds. As a one-time
   * action, we deleted these keys from the table on February 21, 2018.</p> </li>
   * </ul> <p> <b>da2</b>: We introduced this version in February 2018 when AppSync
   * added support to extend key expiration.</p> <ul> <li> <p>
   * <code>ListApiKeys</code> returns the expiration time and deletion time in
   * seconds.</p> </li> <li> <p> <code>CreateApiKey</code> returns the expiration
   * time and deletion time in seconds and accepts a user-provided expiration time in
   * seconds.</p> </li> <li> <p> <code>UpdateApiKey</code> returns the expiration
   * time and and deletion time in seconds and accepts a user-provided expiration
   * time in seconds. Expired API keys are kept for 60 days after the expiration
   * time. You can update the key expiration time as long as the key isn't
   * deleted.</p> </li> <li> <p> <code>DeleteApiKey</code> deletes the item from the
   * table.</p> </li> <li> <p>Expiration is stored in DynamoDB as seconds. After the
   * expiration time, using the key to authenticate will fail. However, you can
   * reinstate the key before deletion.</p> </li> <li> <p>Deletion is stored in
   * DynamoDB as seconds. The key is deleted after deletion time.</p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ApiKey">AWS API
   * Reference</a></p>
   */
  class ApiKey
  {
  public:
    AWS_APPSYNC_API ApiKey() = default;
    AWS_APPSYNC_API ApiKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API ApiKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSYNC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The API key ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ApiKey& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ApiKey& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time after which the API key expires. The date is represented as seconds
     * since the epoch, rounded down to the nearest hour.</p>
     */
    inline long long GetExpires() const { return m_expires; }
    inline bool ExpiresHasBeenSet() const { return m_expiresHasBeenSet; }
    inline void SetExpires(long long value) { m_expiresHasBeenSet = true; m_expires = value; }
    inline ApiKey& WithExpires(long long value) { SetExpires(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time after which the API key is deleted. The date is represented as
     * seconds since the epoch, rounded down to the nearest hour.</p>
     */
    inline long long GetDeletes() const { return m_deletes; }
    inline bool DeletesHasBeenSet() const { return m_deletesHasBeenSet; }
    inline void SetDeletes(long long value) { m_deletesHasBeenSet = true; m_deletes = value; }
    inline ApiKey& WithDeletes(long long value) { SetDeletes(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_expires{0};
    bool m_expiresHasBeenSet = false;

    long long m_deletes{0};
    bool m_deletesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
