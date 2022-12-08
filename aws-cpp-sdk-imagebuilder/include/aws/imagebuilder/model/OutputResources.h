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
    AWS_IMAGEBUILDER_API OutputResources();
    AWS_IMAGEBUILDER_API OutputResources(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API OutputResources& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline const Aws::Vector<Ami>& GetAmis() const{ return m_amis; }

    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline bool AmisHasBeenSet() const { return m_amisHasBeenSet; }

    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline void SetAmis(const Aws::Vector<Ami>& value) { m_amisHasBeenSet = true; m_amis = value; }

    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline void SetAmis(Aws::Vector<Ami>&& value) { m_amisHasBeenSet = true; m_amis = std::move(value); }

    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline OutputResources& WithAmis(const Aws::Vector<Ami>& value) { SetAmis(value); return *this;}

    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline OutputResources& WithAmis(Aws::Vector<Ami>&& value) { SetAmis(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline OutputResources& AddAmis(const Ami& value) { m_amisHasBeenSet = true; m_amis.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 AMIs created by this image.</p>
     */
    inline OutputResources& AddAmis(Ami&& value) { m_amisHasBeenSet = true; m_amis.push_back(std::move(value)); return *this; }


    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }

    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline void SetContainers(Aws::Vector<Container>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline OutputResources& WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}

    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline OutputResources& WithContainers(Aws::Vector<Container>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline OutputResources& AddContainers(const Container& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>Container images that the pipeline has generated and stored in the output
     * repository.</p>
     */
    inline OutputResources& AddContainers(Container&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Ami> m_amis;
    bool m_amisHasBeenSet = false;

    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
