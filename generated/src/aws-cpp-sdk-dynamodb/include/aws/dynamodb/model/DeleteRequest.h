/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/Key.h>
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

  class DeleteRequest
  {
  public:
    AWS_DYNAMODB_API DeleteRequest();
    AWS_DYNAMODB_API DeleteRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API DeleteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Key& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Key& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Key&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline DeleteRequest& WithKey(const Key& value) { SetKey(value); return *this;}
    inline DeleteRequest& WithKey(Key&& value) { SetKey(std::move(value)); return *this;}
    ///@}
  private:

    Key m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
