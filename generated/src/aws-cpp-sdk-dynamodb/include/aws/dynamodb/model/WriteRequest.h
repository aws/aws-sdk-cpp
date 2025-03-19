/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/PutRequest.h>
#include <aws/dynamodb/model/DeleteRequest.h>
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
   * <p>Represents an operation to perform - either <code>DeleteItem</code> or
   * <code>PutItem</code>. You can only request one of these operations, not both, in
   * a single <code>WriteRequest</code>. If you do need to perform both of these
   * operations, you need to provide two separate <code>WriteRequest</code>
   * objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/WriteRequest">AWS
   * API Reference</a></p>
   */
  class WriteRequest
  {
  public:
    AWS_DYNAMODB_API WriteRequest() = default;
    AWS_DYNAMODB_API WriteRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API WriteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline const PutRequest& GetPutRequest() const { return m_putRequest; }
    inline bool PutRequestHasBeenSet() const { return m_putRequestHasBeenSet; }
    template<typename PutRequestT = PutRequest>
    void SetPutRequest(PutRequestT&& value) { m_putRequestHasBeenSet = true; m_putRequest = std::forward<PutRequestT>(value); }
    template<typename PutRequestT = PutRequest>
    WriteRequest& WithPutRequest(PutRequestT&& value) { SetPutRequest(std::forward<PutRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline const DeleteRequest& GetDeleteRequest() const { return m_deleteRequest; }
    inline bool DeleteRequestHasBeenSet() const { return m_deleteRequestHasBeenSet; }
    template<typename DeleteRequestT = DeleteRequest>
    void SetDeleteRequest(DeleteRequestT&& value) { m_deleteRequestHasBeenSet = true; m_deleteRequest = std::forward<DeleteRequestT>(value); }
    template<typename DeleteRequestT = DeleteRequest>
    WriteRequest& WithDeleteRequest(DeleteRequestT&& value) { SetDeleteRequest(std::forward<DeleteRequestT>(value)); return *this;}
    ///@}
  private:

    PutRequest m_putRequest;
    bool m_putRequestHasBeenSet = false;

    DeleteRequest m_deleteRequest;
    bool m_deleteRequestHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
