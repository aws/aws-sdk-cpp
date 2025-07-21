/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The configuration options for a service managed fleet's VPC.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/VpcConfiguration">AWS
   * API Reference</a></p>
   */
  class VpcConfiguration
  {
  public:
    AWS_DEADLINE_API VpcConfiguration() = default;
    AWS_DEADLINE_API VpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API VpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARNs of the VPC Lattice resource configurations attached to the
     * fleet.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceConfigurationArns() const { return m_resourceConfigurationArns; }
    inline bool ResourceConfigurationArnsHasBeenSet() const { return m_resourceConfigurationArnsHasBeenSet; }
    template<typename ResourceConfigurationArnsT = Aws::Vector<Aws::String>>
    void SetResourceConfigurationArns(ResourceConfigurationArnsT&& value) { m_resourceConfigurationArnsHasBeenSet = true; m_resourceConfigurationArns = std::forward<ResourceConfigurationArnsT>(value); }
    template<typename ResourceConfigurationArnsT = Aws::Vector<Aws::String>>
    VpcConfiguration& WithResourceConfigurationArns(ResourceConfigurationArnsT&& value) { SetResourceConfigurationArns(std::forward<ResourceConfigurationArnsT>(value)); return *this;}
    template<typename ResourceConfigurationArnsT = Aws::String>
    VpcConfiguration& AddResourceConfigurationArns(ResourceConfigurationArnsT&& value) { m_resourceConfigurationArnsHasBeenSet = true; m_resourceConfigurationArns.emplace_back(std::forward<ResourceConfigurationArnsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_resourceConfigurationArns;
    bool m_resourceConfigurationArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
