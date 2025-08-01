/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/ServiceResourceIdName.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>The Batch unique identifier.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ServiceResourceId">AWS
   * API Reference</a></p>
   */
  class ServiceResourceId
  {
  public:
    AWS_BATCH_API ServiceResourceId() = default;
    AWS_BATCH_API ServiceResourceId(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ServiceResourceId& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the resource identifier. </p>
     */
    inline ServiceResourceIdName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ServiceResourceIdName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ServiceResourceId& WithName(ServiceResourceIdName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the resource identifier. </p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ServiceResourceId& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    ServiceResourceIdName m_name{ServiceResourceIdName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
