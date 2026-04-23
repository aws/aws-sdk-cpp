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
#include <aws/organizations/model/ActionType.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Specifies the criteria that are used to select the handshakes for the
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/HandshakeFilter">AWS
   * API Reference</a></p>
   */
  class AWS_ORGANIZATIONS_API HandshakeFilter
  {
  public:
    HandshakeFilter();
    HandshakeFilter(Aws::Utils::Json::JsonView jsonValue);
    HandshakeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the type of handshake action.</p> <p>If you specify
     * <code>ActionType</code>, you cannot also specify
     * <code>ParentHandshakeId</code>.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>Specifies the type of handshake action.</p> <p>If you specify
     * <code>ActionType</code>, you cannot also specify
     * <code>ParentHandshakeId</code>.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>Specifies the type of handshake action.</p> <p>If you specify
     * <code>ActionType</code>, you cannot also specify
     * <code>ParentHandshakeId</code>.</p>
     */
    inline void SetActionType(const ActionType& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>Specifies the type of handshake action.</p> <p>If you specify
     * <code>ActionType</code>, you cannot also specify
     * <code>ParentHandshakeId</code>.</p>
     */
    inline void SetActionType(ActionType&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>Specifies the type of handshake action.</p> <p>If you specify
     * <code>ActionType</code>, you cannot also specify
     * <code>ParentHandshakeId</code>.</p>
     */
    inline HandshakeFilter& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>Specifies the type of handshake action.</p> <p>If you specify
     * <code>ActionType</code>, you cannot also specify
     * <code>ParentHandshakeId</code>.</p>
     */
    inline HandshakeFilter& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline const Aws::String& GetParentHandshakeId() const{ return m_parentHandshakeId; }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline bool ParentHandshakeIdHasBeenSet() const { return m_parentHandshakeIdHasBeenSet; }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetParentHandshakeId(const Aws::String& value) { m_parentHandshakeIdHasBeenSet = true; m_parentHandshakeId = value; }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetParentHandshakeId(Aws::String&& value) { m_parentHandshakeIdHasBeenSet = true; m_parentHandshakeId = std::move(value); }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline void SetParentHandshakeId(const char* value) { m_parentHandshakeIdHasBeenSet = true; m_parentHandshakeId.assign(value); }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline HandshakeFilter& WithParentHandshakeId(const Aws::String& value) { SetParentHandshakeId(value); return *this;}

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline HandshakeFilter& WithParentHandshakeId(Aws::String&& value) { SetParentHandshakeId(std::move(value)); return *this;}

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lower-case letters or digits.</p>
     */
    inline HandshakeFilter& WithParentHandshakeId(const char* value) { SetParentHandshakeId(value); return *this;}

  private:

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet;

    Aws::String m_parentHandshakeId;
    bool m_parentHandshakeIdHasBeenSet;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
