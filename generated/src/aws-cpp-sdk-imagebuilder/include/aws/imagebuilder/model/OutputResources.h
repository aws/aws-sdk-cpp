/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/Ami.h>
#include <aws/imagebuilder/model/Container.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The resources produced by this image.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/OutputResources">AWS
   * API Reference</a></p>
   */
  class OutputResources
  {
  public:
    AWS_IMAGEBUILDER_API OutputResources() = default;
    AWS_IMAGEBUILDER_API OutputResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API OutputResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline const Aws::Vector<Ami>& GetAmis() const { return m_amis; }
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }
    template<typename AmisT = Aws::Vector<Ami>>
    void SetAmis(AmisT&& value) { m_amisHasBeenSet = true; m_amis = std::forward<AmisT>(value); }
    template<typename AmisT = Aws::Vector<Ami>>
    OutputResources& WithAmis(AmisT&& value) { SetAmis(std::forward<AmisT>(value)); return *this;}
    template<typename AmisT = Ami>
    OutputResources& AddAmis(AmisT&& value) { m_amisHasBeenSet = true; m_amis.emplace_back(std::forward<AmisT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<Container>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<Container>>
    OutputResources& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = Container>
    OutputResources& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Ami> m_amis;
    bool m_amisHasBeenSet = false;

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
