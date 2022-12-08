/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Any dependencies related to hub content, such as scripts, model artifacts,
   * datasets, or notebooks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubContentDependency">AWS
   * API Reference</a></p>
   */
  class HubContentDependency
  {
  public:
    AWS_SAGEMAKER_API HubContentDependency();
    AWS_SAGEMAKER_API HubContentDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubContentDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline const Aws::String& GetDependencyOriginPath() const{ return m_dependencyOriginPath; }

    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline bool DependencyOriginPathHasBeenSet() const { return m_dependencyOriginPathHasBeenSet; }

    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline void SetDependencyOriginPath(const Aws::String& value) { m_dependencyOriginPathHasBeenSet = true; m_dependencyOriginPath = value; }

    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline void SetDependencyOriginPath(Aws::String&& value) { m_dependencyOriginPathHasBeenSet = true; m_dependencyOriginPath = std::move(value); }

    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline void SetDependencyOriginPath(const char* value) { m_dependencyOriginPathHasBeenSet = true; m_dependencyOriginPath.assign(value); }

    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline HubContentDependency& WithDependencyOriginPath(const Aws::String& value) { SetDependencyOriginPath(value); return *this;}

    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline HubContentDependency& WithDependencyOriginPath(Aws::String&& value) { SetDependencyOriginPath(std::move(value)); return *this;}

    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline HubContentDependency& WithDependencyOriginPath(const char* value) { SetDependencyOriginPath(value); return *this;}


    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline const Aws::String& GetDependencyCopyPath() const{ return m_dependencyCopyPath; }

    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline bool DependencyCopyPathHasBeenSet() const { return m_dependencyCopyPathHasBeenSet; }

    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline void SetDependencyCopyPath(const Aws::String& value) { m_dependencyCopyPathHasBeenSet = true; m_dependencyCopyPath = value; }

    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline void SetDependencyCopyPath(Aws::String&& value) { m_dependencyCopyPathHasBeenSet = true; m_dependencyCopyPath = std::move(value); }

    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline void SetDependencyCopyPath(const char* value) { m_dependencyCopyPathHasBeenSet = true; m_dependencyCopyPath.assign(value); }

    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline HubContentDependency& WithDependencyCopyPath(const Aws::String& value) { SetDependencyCopyPath(value); return *this;}

    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline HubContentDependency& WithDependencyCopyPath(Aws::String&& value) { SetDependencyCopyPath(std::move(value)); return *this;}

    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline HubContentDependency& WithDependencyCopyPath(const char* value) { SetDependencyCopyPath(value); return *this;}

  private:

    Aws::String m_dependencyOriginPath;
    bool m_dependencyOriginPathHasBeenSet = false;

    Aws::String m_dependencyCopyPath;
    bool m_dependencyCopyPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
