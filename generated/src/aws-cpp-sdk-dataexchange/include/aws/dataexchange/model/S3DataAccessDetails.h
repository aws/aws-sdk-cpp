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
    AWS_DATAEXCHANGE_API S3DataAccessDetails() = default;
    AWS_DATAEXCHANGE_API S3DataAccessDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API S3DataAccessDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of the key prefixes affected by this notification. This can have up to
     * 50 entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeyPrefixes() const { return m_keyPrefixes; }
    inline bool KeyPrefixesHasBeenSet() const { return m_keyPrefixesHasBeenSet; }
    template<typename KeyPrefixesT = Aws::Vector<Aws::String>>
    void SetKeyPrefixes(KeyPrefixesT&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes = std::forward<KeyPrefixesT>(value); }
    template<typename KeyPrefixesT = Aws::Vector<Aws::String>>
    S3DataAccessDetails& WithKeyPrefixes(KeyPrefixesT&& value) { SetKeyPrefixes(std::forward<KeyPrefixesT>(value)); return *this;}
    template<typename KeyPrefixesT = Aws::String>
    S3DataAccessDetails& AddKeyPrefixes(KeyPrefixesT&& value) { m_keyPrefixesHasBeenSet = true; m_keyPrefixes.emplace_back(std::forward<KeyPrefixesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the keys affected by this notification. This can have up to 50
     * entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Vector<Aws::String>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<Aws::String>>
    S3DataAccessDetails& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = Aws::String>
    S3DataAccessDetails& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_keyPrefixes;
    bool m_keyPrefixesHasBeenSet = false;

    Aws::Vector<Aws::String> m_keys;
    bool m_keysHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
