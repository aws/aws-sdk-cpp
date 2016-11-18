/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Represents an operation to perform - either <i>DeleteItem</i> or
   * <i>PutItem</i>. You can only request one of these operations, not both, in a
   * single <i>WriteRequest</i>. If you do need to perform both of these operations,
   * you will need to provide two separate <i>WriteRequest</i> objects.</p>
   */
  class AWS_DYNAMODB_API WriteRequest
  {
  public:
    WriteRequest();
    WriteRequest(const Aws::Utils::Json::JsonValue& jsonValue);
    WriteRequest& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A request to perform a <i>PutItem</i> operation.</p>
     */
    inline const PutRequest& GetPutRequest() const{ return m_putRequest; }

    /**
     * <p>A request to perform a <i>PutItem</i> operation.</p>
     */
    inline void SetPutRequest(const PutRequest& value) { m_putRequestHasBeenSet = true; m_putRequest = value; }

    /**
     * <p>A request to perform a <i>PutItem</i> operation.</p>
     */
    inline void SetPutRequest(PutRequest&& value) { m_putRequestHasBeenSet = true; m_putRequest = value; }

    /**
     * <p>A request to perform a <i>PutItem</i> operation.</p>
     */
    inline WriteRequest& WithPutRequest(const PutRequest& value) { SetPutRequest(value); return *this;}

    /**
     * <p>A request to perform a <i>PutItem</i> operation.</p>
     */
    inline WriteRequest& WithPutRequest(PutRequest&& value) { SetPutRequest(value); return *this;}

    /**
     * <p>A request to perform a <i>DeleteItem</i> operation.</p>
     */
    inline const DeleteRequest& GetDeleteRequest() const{ return m_deleteRequest; }

    /**
     * <p>A request to perform a <i>DeleteItem</i> operation.</p>
     */
    inline void SetDeleteRequest(const DeleteRequest& value) { m_deleteRequestHasBeenSet = true; m_deleteRequest = value; }

    /**
     * <p>A request to perform a <i>DeleteItem</i> operation.</p>
     */
    inline void SetDeleteRequest(DeleteRequest&& value) { m_deleteRequestHasBeenSet = true; m_deleteRequest = value; }

    /**
     * <p>A request to perform a <i>DeleteItem</i> operation.</p>
     */
    inline WriteRequest& WithDeleteRequest(const DeleteRequest& value) { SetDeleteRequest(value); return *this;}

    /**
     * <p>A request to perform a <i>DeleteItem</i> operation.</p>
     */
    inline WriteRequest& WithDeleteRequest(DeleteRequest&& value) { SetDeleteRequest(value); return *this;}

  private:
    PutRequest m_putRequest;
    bool m_putRequestHasBeenSet;
    DeleteRequest m_deleteRequest;
    bool m_deleteRequestHasBeenSet;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
