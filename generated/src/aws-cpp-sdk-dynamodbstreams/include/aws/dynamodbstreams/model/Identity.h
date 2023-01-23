/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodbstreams/DynamoDBStreams_EXPORTS.h>
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
namespace DynamoDBStreams
{
namespace Model
{

  /**
   * <p>Contains details about the type of identity that made the
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/streams-dynamodb-2012-08-10/Identity">AWS
   * API Reference</a></p>
   */
  class Identity
  {
  public:
    AWS_DYNAMODBSTREAMS_API Identity();
    AWS_DYNAMODBSTREAMS_API Identity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline Identity& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline Identity& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline Identity& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline Identity& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline Identity& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline Identity& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
