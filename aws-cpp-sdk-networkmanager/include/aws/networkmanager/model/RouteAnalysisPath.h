/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/RouteAnalysisCompletion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/PathComponent.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a route analysis path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteAnalysisPath">AWS
   * API Reference</a></p>
   */
  class RouteAnalysisPath
  {
  public:
    AWS_NETWORKMANAGER_API RouteAnalysisPath();
    AWS_NETWORKMANAGER_API RouteAnalysisPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysisPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the analysis at completion.</p>
     */
    inline const RouteAnalysisCompletion& GetCompletionStatus() const{ return m_completionStatus; }

    /**
     * <p>The status of the analysis at completion.</p>
     */
    inline bool CompletionStatusHasBeenSet() const { return m_completionStatusHasBeenSet; }

    /**
     * <p>The status of the analysis at completion.</p>
     */
    inline void SetCompletionStatus(const RouteAnalysisCompletion& value) { m_completionStatusHasBeenSet = true; m_completionStatus = value; }

    /**
     * <p>The status of the analysis at completion.</p>
     */
    inline void SetCompletionStatus(RouteAnalysisCompletion&& value) { m_completionStatusHasBeenSet = true; m_completionStatus = std::move(value); }

    /**
     * <p>The status of the analysis at completion.</p>
     */
    inline RouteAnalysisPath& WithCompletionStatus(const RouteAnalysisCompletion& value) { SetCompletionStatus(value); return *this;}

    /**
     * <p>The status of the analysis at completion.</p>
     */
    inline RouteAnalysisPath& WithCompletionStatus(RouteAnalysisCompletion&& value) { SetCompletionStatus(std::move(value)); return *this;}


    /**
     * <p>The route analysis path.</p>
     */
    inline const Aws::Vector<PathComponent>& GetPath() const{ return m_path; }

    /**
     * <p>The route analysis path.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The route analysis path.</p>
     */
    inline void SetPath(const Aws::Vector<PathComponent>& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The route analysis path.</p>
     */
    inline void SetPath(Aws::Vector<PathComponent>&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The route analysis path.</p>
     */
    inline RouteAnalysisPath& WithPath(const Aws::Vector<PathComponent>& value) { SetPath(value); return *this;}

    /**
     * <p>The route analysis path.</p>
     */
    inline RouteAnalysisPath& WithPath(Aws::Vector<PathComponent>&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The route analysis path.</p>
     */
    inline RouteAnalysisPath& AddPath(const PathComponent& value) { m_pathHasBeenSet = true; m_path.push_back(value); return *this; }

    /**
     * <p>The route analysis path.</p>
     */
    inline RouteAnalysisPath& AddPath(PathComponent&& value) { m_pathHasBeenSet = true; m_path.push_back(std::move(value)); return *this; }

  private:

    RouteAnalysisCompletion m_completionStatus;
    bool m_completionStatusHasBeenSet = false;

    Aws::Vector<PathComponent> m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
