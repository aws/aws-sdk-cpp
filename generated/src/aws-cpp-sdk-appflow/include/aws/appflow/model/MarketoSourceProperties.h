﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when Marketo is being used as a source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/MarketoSourceProperties">AWS
   * API Reference</a></p>
   */
  class MarketoSourceProperties
  {
  public:
    AWS_APPFLOW_API MarketoSourceProperties() = default;
    AWS_APPFLOW_API MarketoSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API MarketoSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The object specified in the Marketo flow source. </p>
     */
    inline const Aws::String& GetObject() const { return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    template<typename ObjectT = Aws::String>
    void SetObject(ObjectT&& value) { m_objectHasBeenSet = true; m_object = std::forward<ObjectT>(value); }
    template<typename ObjectT = Aws::String>
    MarketoSourceProperties& WithObject(ObjectT&& value) { SetObject(std::forward<ObjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
