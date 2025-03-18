/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CancellationReason
  {
  public:
    AWS_DYNAMODB_API CancellationReason() = default;
    AWS_DYNAMODB_API CancellationReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API CancellationReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Item in the request which caused the transaction to get cancelled.</p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetItem() const { return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::Map<Aws::String, AttributeValue>>
    CancellationReason& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    template<typename ItemKeyT = Aws::String, typename ItemValueT = AttributeValue>
    CancellationReason& AddItem(ItemKeyT&& key, ItemValueT&& value) {
      m_itemHasBeenSet = true; m_item.emplace(std::forward<ItemKeyT>(key), std::forward<ItemValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Status code for the result of the cancelled transaction.</p>
     */
    inline const Aws::String& GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    template<typename CodeT = Aws::String>
    void SetCode(CodeT&& value) { m_codeHasBeenSet = true; m_code = std::forward<CodeT>(value); }
    template<typename CodeT = Aws::String>
    CancellationReason& WithCode(CodeT&& value) { SetCode(std::forward<CodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Cancellation reason message description.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    CancellationReason& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, AttributeValue> m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
