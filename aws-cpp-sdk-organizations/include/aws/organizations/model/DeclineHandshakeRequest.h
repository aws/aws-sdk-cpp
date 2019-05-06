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
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/organizations/OrganizationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Organizations
{
namespace Model
{

  /**
   */
  class AWS_ORGANIZATIONS_API DeclineHandshakeRequest : public OrganizationsRequest
  {
  public:
    DeclineHandshakeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeclineHandshake"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline const Aws::String& GetHandshakeId() const{ return m_handshakeId; }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline bool HandshakeIdHasBeenSet() const { return m_handshakeIdHasBeenSet; }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetHandshakeId(const Aws::String& value) { m_handshakeIdHasBeenSet = true; m_handshakeId = value; }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetHandshakeId(Aws::String&& value) { m_handshakeIdHasBeenSet = true; m_handshakeId = std::move(value); }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetHandshakeId(const char* value) { m_handshakeIdHasBeenSet = true; m_handshakeId.assign(value); }

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline DeclineHandshakeRequest& WithHandshakeId(const Aws::String& value) { SetHandshakeId(value); return *this;}

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline DeclineHandshakeRequest& WithHandshakeId(Aws::String&& value) { SetHandshakeId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier (ID) of the handshake that you want to decline. You can
     * get the ID from the <a>ListHandshakesForAccount</a> operation.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline DeclineHandshakeRequest& WithHandshakeId(const char* value) { SetHandshakeId(value); return *this;}

  private:

    Aws::String m_handshakeId;
    bool m_handshakeIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
