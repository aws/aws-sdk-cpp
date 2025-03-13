/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/Get.h>
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
   * <p>Specifies an item to be retrieved as part of the transaction.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/TransactGetItem">AWS
   * API Reference</a></p>
   */
  class TransactGetItem
  {
  public:
    AWS_DYNAMODB_API TransactGetItem() = default;
    AWS_DYNAMODB_API TransactGetItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API TransactGetItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the primary key that identifies the item to get, together with the
     * name of the table that contains the item, and optionally the specific attributes
     * of the item to retrieve.</p>
     */
    inline const Get& GetGet() const { return m_get; }
    inline bool GetHasBeenSet() const { return m_getHasBeenSet; }
    template<typename GetT = Get>
    void SetGet(GetT&& value) { m_getHasBeenSet = true; m_get = std::forward<GetT>(value); }
    template<typename GetT = Get>
    TransactGetItem& WithGet(GetT&& value) { SetGet(std::forward<GetT>(value)); return *this;}
    ///@}
  private:

    Get m_get;
    bool m_getHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
