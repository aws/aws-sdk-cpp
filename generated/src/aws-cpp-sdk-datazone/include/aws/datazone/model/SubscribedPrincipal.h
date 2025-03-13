/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/SubscribedProject.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The principal that has the subscription grant for the asset.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SubscribedPrincipal">AWS
   * API Reference</a></p>
   */
  class SubscribedPrincipal
  {
  public:
    AWS_DATAZONE_API SubscribedPrincipal() = default;
    AWS_DATAZONE_API SubscribedPrincipal(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SubscribedPrincipal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The project that has the subscription grant.</p>
     */
    inline const SubscribedProject& GetProject() const { return m_project; }
    inline bool ProjectHasBeenSet() const { return m_projectHasBeenSet; }
    template<typename ProjectT = SubscribedProject>
    void SetProject(ProjectT&& value) { m_projectHasBeenSet = true; m_project = std::forward<ProjectT>(value); }
    template<typename ProjectT = SubscribedProject>
    SubscribedPrincipal& WithProject(ProjectT&& value) { SetProject(std::forward<ProjectT>(value)); return *this;}
    ///@}
  private:

    SubscribedProject m_project;
    bool m_projectHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
