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
   * <p>Describes an API key.</p> <p>Customers invoke AWS AppSync GraphQL API
   * operations with API keys as an identity mechanism. There are two key
   * versions:</p> <p> <b>da1</b>: This version was introduced at launch in November
   * 2017. These keys always expire after 7 days. Key expiration is managed by Amazon
   * DynamoDB TTL. The keys ceased to be valid after February 21, 2018 and should not
   * be used after that date.</p> <ul> <li> <p> <code>ListApiKeys</code> returns the
   * expiration time in milliseconds.</p> </li> <li> <p> <code>CreateApiKey</code>
   * returns the expiration time in milliseconds.</p> </li> <li> <p>
   * <code>UpdateApiKey</code> is not available for this key version.</p> </li> <li>
   * <p> <code>DeleteApiKey</code> deletes the item from the table.</p> </li> <li>
   * <p>Expiration is stored in Amazon DynamoDB as milliseconds. This results in a
   * bug where keys are not automatically deleted because DynamoDB expects the TTL to
   * be stored in seconds. As a one-time action, we will delete these keys from the
   * table after February 21, 2018.</p> </li> </ul> <p> <b>da2</b>: This version was
   * introduced in February 2018 when AppSync added support to extend key
   * expiration.</p> <ul> <li> <p> <code>ListApiKeys</code> returns the expiration
   * time in seconds.</p> </li> <li> <p> <code>CreateApiKey</code> returns the
   * expiration time in seconds and accepts a user-provided expiration time in
   * seconds.</p> </li> <li> <p> <code>UpdateApiKey</code> returns the expiration
   * time in seconds and accepts a user-provided expiration time in seconds. Key
   * expiration can only be updated while the key has not expired.</p> </li> <li> <p>
   * <code>DeleteApiKey</code> deletes the item from the table.</p> </li> <li>
   * <p>Expiration is stored in Amazon DynamoDB as seconds.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appsync-2017-07-25/ApiKey">AWS API
   * Reference</a></p>
   */
  class AWS_APPSYNC_API ApiKey
  {
  public:
    ApiKey();
    ApiKey(Aws::Utils::Json::JsonView jsonValue);
    ApiKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The API key ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The API key ID.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The API key ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The API key ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The API key ID.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The API key ID.</p>
     */
    inline ApiKey& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The API key ID.</p>
     */
    inline ApiKey& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The API key ID.</p>
     */
    inline ApiKey& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline ApiKey& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline ApiKey& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the purpose of the API key.</p>
     */
    inline ApiKey& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The time after which the API key expires. The date is represented as seconds
     * since the epoch, rounded down to the nearest hour.</p>
     */
    inline long long GetExpires() const{ return m_expires; }

    /**
     * <p>The time after which the API key expires. The date is represented as seconds
     * since the epoch, rounded down to the nearest hour.</p>
     */
    inline bool ExpiresHasBeenSet() const { return m_expiresHasBeenSet; }

    /**
     * <p>The time after which the API key expires. The date is represented as seconds
     * since the epoch, rounded down to the nearest hour.</p>
     */
    inline void SetExpires(long long value) { m_expiresHasBeenSet = true; m_expires = value; }

    /**
     * <p>The time after which the API key expires. The date is represented as seconds
     * since the epoch, rounded down to the nearest hour.</p>
     */
    inline ApiKey& WithExpires(long long value) { SetExpires(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    long long m_expires;
    bool m_expiresHasBeenSet;
  };

} // namespace Model
} // namespace AppSync
} // namespace Aws
