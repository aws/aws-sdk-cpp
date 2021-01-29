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
   * <p>A link that an agent selects to complete a given task. You can have up to
   * 4,096 UTF-8 bytes across all references for a contact.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Reference">AWS
   * API Reference</a></p>
   */
  class AWS_CONNECT_API Reference
  {
  public:
    Reference();
    Reference(Aws::Utils::Json::JsonView jsonValue);
    Reference& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline Reference& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline Reference& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A formatted URL that displays to an agent in the Contact Control Panel
     * (CCP)</p>
     */
    inline Reference& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>A valid URL.</p>
     */
    inline const ReferenceType& GetType() const{ return m_type; }

    /**
     * <p>A valid URL.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>A valid URL.</p>
     */
    inline void SetType(const ReferenceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>A valid URL.</p>
     */
    inline void SetType(ReferenceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>A valid URL.</p>
     */
    inline Reference& WithType(const ReferenceType& value) { SetType(value); return *this;}

    /**
     * <p>A valid URL.</p>
     */
    inline Reference& WithType(ReferenceType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet;

    ReferenceType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
