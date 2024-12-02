/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A network CIDR that can contain hybrid nodes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RemoteNodeNetwork">AWS
   * API Reference</a></p>
   */
  class RemoteNodeNetwork
  {
  public:
    AWS_EKS_API RemoteNodeNetwork();
    AWS_EKS_API RemoteNodeNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemoteNodeNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A network CIDR that can contain hybrid nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const{ return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    inline void SetCidrs(const Aws::Vector<Aws::String>& value) { m_cidrsHasBeenSet = true; m_cidrs = value; }
    inline void SetCidrs(Aws::Vector<Aws::String>&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::move(value); }
    inline RemoteNodeNetwork& WithCidrs(const Aws::Vector<Aws::String>& value) { SetCidrs(value); return *this;}
    inline RemoteNodeNetwork& WithCidrs(Aws::Vector<Aws::String>&& value) { SetCidrs(std::move(value)); return *this;}
    inline RemoteNodeNetwork& AddCidrs(const Aws::String& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }
    inline RemoteNodeNetwork& AddCidrs(Aws::String&& value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(std::move(value)); return *this; }
    inline RemoteNodeNetwork& AddCidrs(const char* value) { m_cidrsHasBeenSet = true; m_cidrs.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
