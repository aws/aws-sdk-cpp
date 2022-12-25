/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class HandshakeFilter
  {
  public:
    AWS_ORGANIZATIONS_API HandshakeFilter();
    AWS_ORGANIZATIONS_API HandshakeFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API HandshakeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline const Aws::String& GetParentHandshakeId() const{ return m_parentHandshakeId; }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline bool ParentHandshakeIdHasBeenSet() const { return m_parentHandshakeIdHasBeenSet; }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetParentHandshakeId(const Aws::String& value) { m_parentHandshakeIdHasBeenSet = true; m_parentHandshakeId = value; }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetParentHandshakeId(Aws::String&& value) { m_parentHandshakeIdHasBeenSet = true; m_parentHandshakeId = std::move(value); }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline void SetParentHandshakeId(const char* value) { m_parentHandshakeIdHasBeenSet = true; m_parentHandshakeId.assign(value); }

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline HandshakeFilter& WithParentHandshakeId(const Aws::String& value) { SetParentHandshakeId(value); return *this;}

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline HandshakeFilter& WithParentHandshakeId(Aws::String&& value) { SetParentHandshakeId(std::move(value)); return *this;}

    /**
     * <p>Specifies the parent handshake. Only used for handshake types that are a
     * child of another type.</p> <p>If you specify <code>ParentHandshakeId</code>, you
     * cannot also specify <code>ActionType</code>.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for handshake ID string
     * requires "h-" followed by from 8 to 32 lowercase letters or digits.</p>
     */
    inline HandshakeFilter& WithParentHandshakeId(const char* value) { SetParentHandshakeId(value); return *this;}

  private:

    ActionType m_actionType;
    bool m_actionTypeHasBeenSet = false;

    Aws::String m_parentHandshakeId;
    bool m_parentHandshakeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
