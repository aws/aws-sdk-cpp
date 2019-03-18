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
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/AttributeValue.h>
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

  /**
   * <p>An ordered list of errors for each item in the request which caused the
   * transaction to get cancelled. The values of the list are ordered according to
   * the ordering of the <code>TransactWriteItems</code> request parameter. If no
   * error occurred for the associated item an error with a Null code and Null
   * message will be present. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/CancellationReason">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API CancellationReason
  {
  public:
    CancellationReason();
    CancellationReason(Aws::Utils::Json::JsonView jsonValue);
    CancellationReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const{ return m_item; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline void SetItem(const Aws::Map<Aws::String, AttributeValue>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline void SetItem(Aws::Map<Aws::String, AttributeValue>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& WithItem(const Aws::Map<Aws::String, AttributeValue>& value) { SetItem(value); return *this;}

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& WithItem(Aws::Map<Aws::String, AttributeValue>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& AddItem(const Aws::String& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& AddItem(Aws::String&& key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), value); return *this; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& AddItem(const Aws::String& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& AddItem(Aws::String&& key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& AddItem(const char* key, AttributeValue&& value) { m_itemHasBeenSet = true; m_item.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline CancellationReason& AddItem(const char* key, const AttributeValue& value) { m_itemHasBeenSet = true; m_item.emplace(key, value); return *this; }


    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline const Aws::String& GetCode() const{ return m_code; }

    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline CancellationReason& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline CancellationReason& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline CancellationReason& WithCode(const char* value) { SetCode(value); return *this;}


    /**
     * <p>Cancellation reason message description.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Cancellation reason message description.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Cancellation reason message description.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Cancellation reason message description.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Cancellation reason message description.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Cancellation reason message description.</p>
     */
    inline CancellationReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Cancellation reason message description.</p>
     */
    inline CancellationReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Cancellation reason message description.</p>
     */
    inline CancellationReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet;

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
