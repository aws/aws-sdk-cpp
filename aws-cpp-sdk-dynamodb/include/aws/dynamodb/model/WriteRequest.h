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
   * operations, you will need to provide two separate <code>WriteRequest</code>
   * objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/WriteRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DYNAMODB_API WriteRequest
  {
  public:
    WriteRequest();
    WriteRequest(Aws::Utils::Json::JsonView jsonValue);
    WriteRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline const PutRequest& GetPutRequest() const{ return m_putRequest; }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline bool PutRequestHasBeenSet() const { return m_putRequestHasBeenSet; }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline void SetPutRequest(const PutRequest& value) { m_putRequestHasBeenSet = true; m_putRequest = value; }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline void SetPutRequest(PutRequest&& value) { m_putRequestHasBeenSet = true; m_putRequest = std::move(value); }

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline WriteRequest& WithPutRequest(const PutRequest& value) { SetPutRequest(value); return *this;}

    /**
     * <p>A request to perform a <code>PutItem</code> operation.</p>
     */
    inline WriteRequest& WithPutRequest(PutRequest&& value) { SetPutRequest(std::move(value)); return *this;}


    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline const DeleteRequest& GetDeleteRequest() const{ return m_deleteRequest; }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline bool DeleteRequestHasBeenSet() const { return m_deleteRequestHasBeenSet; }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline void SetDeleteRequest(const DeleteRequest& value) { m_deleteRequestHasBeenSet = true; m_deleteRequest = value; }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline void SetDeleteRequest(DeleteRequest&& value) { m_deleteRequestHasBeenSet = true; m_deleteRequest = std::move(value); }

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline WriteRequest& WithDeleteRequest(const DeleteRequest& value) { SetDeleteRequest(value); return *this;}

    /**
     * <p>A request to perform a <code>DeleteItem</code> operation.</p>
     */
    inline WriteRequest& WithDeleteRequest(DeleteRequest&& value) { SetDeleteRequest(std::move(value)); return *this;}

  private:

    PutRequest m_putRequest;
    bool m_putRequestHasBeenSet;

    DeleteRequest m_deleteRequest;
    bool m_deleteRequestHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
