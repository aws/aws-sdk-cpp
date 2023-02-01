/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Additional information about the generated finding.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/ServiceAdditionalInfo">AWS
   * API Reference</a></p>
   */
  class ServiceAdditionalInfo
  {
  public:
    AWS_GUARDDUTY_API ServiceAdditionalInfo();
    AWS_GUARDDUTY_API ServiceAdditionalInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API ServiceAdditionalInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline ServiceAdditionalInfo& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline ServiceAdditionalInfo& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>This field specifies the value of the additional information.</p>
     */
    inline ServiceAdditionalInfo& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline ServiceAdditionalInfo& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline ServiceAdditionalInfo& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Describes the type of the additional information.</p>
     */
    inline ServiceAdditionalInfo& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
