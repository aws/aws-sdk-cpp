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
    AWS_DYNAMODBSTREAMS_API Identity() = default;
    AWS_DYNAMODBSTREAMS_API Identity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Identity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODBSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the entity that made the call. For Time To Live, the
     * principalId is "dynamodb.amazonaws.com".</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    Identity& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the identity. For Time To Live, the type is "Service".</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Identity& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDBStreams
} // namespace Aws
