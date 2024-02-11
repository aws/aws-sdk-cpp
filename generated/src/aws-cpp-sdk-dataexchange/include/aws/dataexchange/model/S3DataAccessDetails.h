/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Extra details specific to the affected scope in this S3 Data Access data
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/S3DataAccessDetails">AWS
   * API Reference</a></p>
   */
  class S3DataAccessDetails
  {
  public:
    AWS_DATAEXCHANGE_API S3DataAccessDetails();
    AWS_DATAEXCHANGE_API S3DataAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API S3DataAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyPrefixes() const{ return m_keyPrefixes; }

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline bool KeyPrefixesHasBeenSet() const { return m_keyPrefixesHasBeenSet; }

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline void SetKeyPrefixes(const Aws::Vector<Aws::String>& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes = value; }

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline void SetKeyPrefixes(Aws::Vector<Aws::String>&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes = std::move(value); }

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline S3DataAccessDetails& WithKeyPrefixes(const Aws::Vector<Aws::String>& value) { SetKeyPrefixes(value); return *this;}

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline S3DataAccessDetails& WithKeyPrefixes(Aws::Vector<Aws::String>&& value) { SetKeyPrefixes(std::move(value)); return *this;}

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline S3DataAccessDetails& AddKeyPrefixes(const Aws::String& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.push_back(value); return *this; }

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline S3DataAccessDetails& AddKeyPrefixes(Aws::String&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline S3DataAccessDetails& AddKeyPrefixes(const char* value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.push_back(value); return *this; }


    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const{ return m_keys; }

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline void SetKeys(const Aws::Vector<Aws::String>& value) { m_keysHasBeenSet = true; m_keys = value; }

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline void SetKeys(Aws::Vector<Aws::String>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline S3DataAccessDetails& WithKeys(const Aws::Vector<Aws::String>& value) { SetKeys(value); return *this;}

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline S3DataAccessDetails& WithKeys(Aws::Vector<Aws::String>&& value) { SetKeys(std::move(value)); return *this;}

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline S3DataAccessDetails& AddKeys(const Aws::String& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline S3DataAccessDetails& AddKeys(Aws::String&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline S3DataAccessDetails& AddKeys(const char* value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_keyPrefixes;
    bool m_keyPrefixesHasBeenSet = false;

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
