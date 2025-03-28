﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the <code>certificate-authority-data</code> for your
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/Certificate">AWS API
   * Reference</a></p>
   */
  class Certificate
  {
  public:
    AWS_EKS_API Certificate() = default;
    AWS_EKS_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline const Aws::String& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::String>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::String>
    Certificate& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
