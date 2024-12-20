/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/Key.h>
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
namespace DynamoDB
{
namespace Model
{

  class KeysAndAttributes
  {
  public:
    AWS_DYNAMODB_API KeysAndAttributes();
    AWS_DYNAMODB_API KeysAndAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API KeysAndAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<Key>& GetKeys() const{ return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    inline void SetKeys(const Aws::Vector<Key>& value) { m_keysHasBeenSet = true; m_keys = value; }
    inline void SetKeys(Aws::Vector<Key>&& value) { m_keysHasBeenSet = true; m_keys = std::move(value); }
    inline KeysAndAttributes& WithKeys(const Aws::Vector<Key>& value) { SetKeys(value); return *this;}
    inline KeysAndAttributes& WithKeys(Aws::Vector<Key>&& value) { SetKeys(std::move(value)); return *this;}
    inline KeysAndAttributes& AddKeys(const Key& value) { m_keysHasBeenSet = true; m_keys.push_back(value); return *this; }
    inline KeysAndAttributes& AddKeys(Key&& value) { m_keysHasBeenSet = true; m_keys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline KeysAndAttributes& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}
    inline KeysAndAttributes& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline KeysAndAttributes& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline KeysAndAttributes& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    inline KeysAndAttributes& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline bool GetConsistentRead() const{ return m_consistentRead; }
    inline bool ConsistentReadHasBeenSet() const { return m_consistentReadHasBeenSet; }
    inline void SetConsistentRead(bool value) { m_consistentReadHasBeenSet = true; m_consistentRead = value; }
    inline KeysAndAttributes& WithConsistentRead(bool value) { SetConsistentRead(value); return *this;}
    ///@}
  private:

    Aws::Vector<Key> m_keys;
    bool m_keysHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    bool m_consistentRead;
    bool m_consistentReadHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
