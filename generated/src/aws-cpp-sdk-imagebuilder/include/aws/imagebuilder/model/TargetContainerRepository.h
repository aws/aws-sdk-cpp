/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/ContainerRepositoryService.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>The container repository where the output container image is
   * stored.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/TargetContainerRepository">AWS
   * API Reference</a></p>
   */
  class TargetContainerRepository
  {
  public:
    AWS_IMAGEBUILDER_API TargetContainerRepository();
    AWS_IMAGEBUILDER_API TargetContainerRepository(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API TargetContainerRepository& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the service in which this image was registered.</p>
     */
    inline const ContainerRepositoryService& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const ContainerRepositoryService& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(ContainerRepositoryService&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline TargetContainerRepository& WithService(const ContainerRepositoryService& value) { SetService(value); return *this;}
    inline TargetContainerRepository& WithService(ContainerRepositoryService&& value) { SetService(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container repository where the output container image is
     * stored. This name is prefixed by the repository location. For example,
     * <code>&lt;repository location url&gt;/repository_name</code>.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }
    inline TargetContainerRepository& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline TargetContainerRepository& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline TargetContainerRepository& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}
  private:

    ContainerRepositoryService m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
