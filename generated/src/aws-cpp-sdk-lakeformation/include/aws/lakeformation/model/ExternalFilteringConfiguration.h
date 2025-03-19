/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/model/EnableStatus.h>
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
namespace LakeFormation
{
namespace Model
{

  /**
   * <p>Configuration for enabling external data filtering for third-party
   * applications to access data managed by Lake Formation .</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lakeformation-2017-03-31/ExternalFilteringConfiguration">AWS
   * API Reference</a></p>
   */
  class ExternalFilteringConfiguration
  {
  public:
    AWS_LAKEFORMATION_API ExternalFilteringConfiguration() = default;
    AWS_LAKEFORMATION_API ExternalFilteringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ExternalFilteringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allows to enable or disable the third-party applications that are allowed to
     * access data managed by Lake Formation.</p>
     */
    inline EnableStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnableStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ExternalFilteringConfiguration& WithStatus(EnableStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const { return m_authorizedTargets; }
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    void SetAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::forward<AuthorizedTargetsT>(value); }
    template<typename AuthorizedTargetsT = Aws::Vector<Aws::String>>
    ExternalFilteringConfiguration& WithAuthorizedTargets(AuthorizedTargetsT&& value) { SetAuthorizedTargets(std::forward<AuthorizedTargetsT>(value)); return *this;}
    template<typename AuthorizedTargetsT = Aws::String>
    ExternalFilteringConfiguration& AddAuthorizedTargets(AuthorizedTargetsT&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.emplace_back(std::forward<AuthorizedTargetsT>(value)); return *this; }
    ///@}
  private:

    EnableStatus m_status{EnableStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
