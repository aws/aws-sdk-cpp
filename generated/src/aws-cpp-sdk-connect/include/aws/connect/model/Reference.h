/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ReferenceType.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Well-formed data on a contact, used by agents to complete a contact request.
   * You can have up to 4,096 UTF-8 bytes across all references for a
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Reference">AWS
   * API Reference</a></p>
   */
  class Reference
  {
  public:
    AWS_CONNECT_API Reference();
    AWS_CONNECT_API Reference(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Reference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A valid value for the reference. For example, for a URL reference, a
     * formatted URL that is displayed to an agent in the Contact Control Panel
     * (CCP).</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline Reference& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline Reference& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline Reference& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the reference. <code>DATE</code> must be of type Epoch timestamp.
     * </p>
     */
    inline const ReferenceType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ReferenceType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ReferenceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Reference& WithType(const ReferenceType& value) { SetType(value); return *this;}
    inline Reference& WithType(ReferenceType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    ReferenceType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
