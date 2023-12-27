/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/LaunchActionParameterType.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>Launch action parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/LaunchActionParameter">AWS
   * API Reference</a></p>
   */
  class LaunchActionParameter
  {
  public:
    AWS_DRS_API LaunchActionParameter();
    AWS_DRS_API LaunchActionParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API LaunchActionParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Type.</p>
     */
    inline const LaunchActionParameterType& GetType() const{ return m_type; }

    /**
     * <p>Type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(const LaunchActionParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(LaunchActionParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type.</p>
     */
    inline LaunchActionParameter& WithType(const LaunchActionParameterType& value) { SetType(value); return *this;}

    /**
     * <p>Type.</p>
     */
    inline LaunchActionParameter& WithType(LaunchActionParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Value.</p>
     */
    inline LaunchActionParameter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Value.</p>
     */
    inline LaunchActionParameter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Value.</p>
     */
    inline LaunchActionParameter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    LaunchActionParameterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
