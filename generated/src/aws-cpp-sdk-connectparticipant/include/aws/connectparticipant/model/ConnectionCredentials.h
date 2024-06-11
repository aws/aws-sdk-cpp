/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectparticipant/ConnectParticipant_EXPORTS.h>
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
namespace ConnectParticipant
{
namespace Model
{

  /**
   * <p>Connection credentials. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectparticipant-2018-09-07/ConnectionCredentials">AWS
   * API Reference</a></p>
   */
  class ConnectionCredentials
  {
  public:
    AWS_CONNECTPARTICIPANT_API ConnectionCredentials();
    AWS_CONNECTPARTICIPANT_API ConnectionCredentials(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API ConnectionCredentials& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTPARTICIPANT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection token.</p>
     */
    inline const Aws::String& GetConnectionToken() const{ return m_connectionToken; }
    inline bool ConnectionTokenHasBeenSet() const { return m_connectionTokenHasBeenSet; }
    inline void SetConnectionToken(const Aws::String& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = value; }
    inline void SetConnectionToken(Aws::String&& value) { m_connectionTokenHasBeenSet = true; m_connectionToken = std::move(value); }
    inline void SetConnectionToken(const char* value) { m_connectionTokenHasBeenSet = true; m_connectionToken.assign(value); }
    inline ConnectionCredentials& WithConnectionToken(const Aws::String& value) { SetConnectionToken(value); return *this;}
    inline ConnectionCredentials& WithConnectionToken(Aws::String&& value) { SetConnectionToken(std::move(value)); return *this;}
    inline ConnectionCredentials& WithConnectionToken(const char* value) { SetConnectionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiration of the token.</p> <p>It's specified in ISO 8601 format:
     * yyyy-MM-ddThh:mm:ss.SSSZ. For example, 2019-11-08T02:41:28.172Z.</p>
     */
    inline const Aws::String& GetExpiry() const{ return m_expiry; }
    inline bool ExpiryHasBeenSet() const { return m_expiryHasBeenSet; }
    inline void SetExpiry(const Aws::String& value) { m_expiryHasBeenSet = true; m_expiry = value; }
    inline void SetExpiry(Aws::String&& value) { m_expiryHasBeenSet = true; m_expiry = std::move(value); }
    inline void SetExpiry(const char* value) { m_expiryHasBeenSet = true; m_expiry.assign(value); }
    inline ConnectionCredentials& WithExpiry(const Aws::String& value) { SetExpiry(value); return *this;}
    inline ConnectionCredentials& WithExpiry(Aws::String&& value) { SetExpiry(std::move(value)); return *this;}
    inline ConnectionCredentials& WithExpiry(const char* value) { SetExpiry(value); return *this;}
    ///@}
  private:

    Aws::String m_connectionToken;
    bool m_connectionTokenHasBeenSet = false;

    Aws::String m_expiry;
    bool m_expiryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectParticipant
} // namespace Aws
