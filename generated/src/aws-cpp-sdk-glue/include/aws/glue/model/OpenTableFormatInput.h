﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/IcebergInput.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure representing an open format table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/OpenTableFormatInput">AWS
   * API Reference</a></p>
   */
  class OpenTableFormatInput
  {
  public:
    AWS_GLUE_API OpenTableFormatInput() = default;
    AWS_GLUE_API OpenTableFormatInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API OpenTableFormatInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies an <code>IcebergInput</code> structure that defines an Apache
     * Iceberg metadata table.</p>
     */
    inline const IcebergInput& GetIcebergInput() const { return m_icebergInput; }
    inline bool IcebergInputHasBeenSet() const { return m_icebergInputHasBeenSet; }
    template<typename IcebergInputT = IcebergInput>
    void SetIcebergInput(IcebergInputT&& value) { m_icebergInputHasBeenSet = true; m_icebergInput = std::forward<IcebergInputT>(value); }
    template<typename IcebergInputT = IcebergInput>
    OpenTableFormatInput& WithIcebergInput(IcebergInputT&& value) { SetIcebergInput(std::forward<IcebergInputT>(value)); return *this;}
    ///@}
  private:

    IcebergInput m_icebergInput;
    bool m_icebergInputHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
