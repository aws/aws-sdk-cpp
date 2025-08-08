/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactMetricName.h>
#include <aws/connect/model/ContactMetricValue.h>
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
   * <p>Object containing information about metric requested for the
   * contact.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactMetricResult">AWS
   * API Reference</a></p>
   */
  class ContactMetricResult
  {
  public:
    AWS_CONNECT_API ContactMetricResult() = default;
    AWS_CONNECT_API ContactMetricResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactMetricResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric being retrieved in type String.</p>
     */
    inline ContactMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ContactMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ContactMetricResult& WithName(ContactMetricName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Object result associated with the metric received.</p>
     */
    inline const ContactMetricValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = ContactMetricValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = ContactMetricValue>
    ContactMetricResult& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ContactMetricName m_name{ContactMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;

    ContactMetricValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
