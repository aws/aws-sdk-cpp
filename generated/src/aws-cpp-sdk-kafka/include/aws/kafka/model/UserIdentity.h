/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/UserIdentityType.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Description of the requester that calls the API operation.</p>
 
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/UserIdentity">AWS
   * API Reference</a></p>
   */
  class UserIdentity
  {
  public:
    AWS_KAFKA_API UserIdentity();
    AWS_KAFKA_API UserIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API UserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The identity type of the requester that calls the API
     * operation.</p>
         
     */
    inline const UserIdentityType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const UserIdentityType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(UserIdentityType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline UserIdentity& WithType(const UserIdentityType& value) { SetType(value); return *this;}
    inline UserIdentity& WithType(UserIdentityType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>A unique identifier for the requester that calls the API
     * operation.</p>
         
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline UserIdentity& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline UserIdentity& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline UserIdentity& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}
  private:

    UserIdentityType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
