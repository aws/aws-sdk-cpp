/**
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
    AWS_EKS_API Certificate();
    AWS_EKS_API Certificate(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Certificate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline const Aws::String& GetData() const{ return m_data; }

    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }

    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline void SetData(const Aws::String& value) { m_dataHasBeenSet = true; m_data = value; }

    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline void SetData(Aws::String&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }

    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline void SetData(const char* value) { m_dataHasBeenSet = true; m_data.assign(value); }

    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline Certificate& WithData(const Aws::String& value) { SetData(value); return *this;}

    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline Certificate& WithData(Aws::String&& value) { SetData(std::move(value)); return *this;}

    /**
     * <p>The Base64-encoded certificate data required to communicate with your
     * cluster. Add this to the <code>certificate-authority-data</code> section of the
     * <code>kubeconfig</code> file for your cluster.</p>
     */
    inline Certificate& WithData(const char* value) { SetData(value); return *this;}

  private:

    Aws::String m_data;
    bool m_dataHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
