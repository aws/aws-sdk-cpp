/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ContactMetricName.h>
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
   * <p>The object that contains information about metric being
   * requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactMetricInfo">AWS
   * API Reference</a></p>
   */
  class ContactMetricInfo
  {
  public:
    AWS_CONNECT_API ContactMetricInfo() = default;
    AWS_CONNECT_API ContactMetricInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API ContactMetricInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric being retrieved in type String.</p>
     */
    inline ContactMetricName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ContactMetricName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ContactMetricInfo& WithName(ContactMetricName value) { SetName(value); return *this;}
    ///@}
  private:

    ContactMetricName m_name{ContactMetricName::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
