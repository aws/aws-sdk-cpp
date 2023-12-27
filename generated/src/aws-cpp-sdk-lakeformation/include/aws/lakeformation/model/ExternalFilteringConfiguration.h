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
    AWS_LAKEFORMATION_API ExternalFilteringConfiguration();
    AWS_LAKEFORMATION_API ExternalFilteringConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API ExternalFilteringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAKEFORMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Allows to enable or disable the third-party applications that are allowed to
     * access data managed by Lake Formation.</p>
     */
    inline const EnableStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Allows to enable or disable the third-party applications that are allowed to
     * access data managed by Lake Formation.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Allows to enable or disable the third-party applications that are allowed to
     * access data managed by Lake Formation.</p>
     */
    inline void SetStatus(const EnableStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Allows to enable or disable the third-party applications that are allowed to
     * access data managed by Lake Formation.</p>
     */
    inline void SetStatus(EnableStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Allows to enable or disable the third-party applications that are allowed to
     * access data managed by Lake Formation.</p>
     */
    inline ExternalFilteringConfiguration& WithStatus(const EnableStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Allows to enable or disable the third-party applications that are allowed to
     * access data managed by Lake Formation.</p>
     */
    inline ExternalFilteringConfiguration& WithStatus(EnableStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizedTargets() const{ return m_authorizedTargets; }

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline bool AuthorizedTargetsHasBeenSet() const { return m_authorizedTargetsHasBeenSet; }

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline void SetAuthorizedTargets(const Aws::Vector<Aws::String>& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = value; }

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline void SetAuthorizedTargets(Aws::Vector<Aws::String>&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets = std::move(value); }

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline ExternalFilteringConfiguration& WithAuthorizedTargets(const Aws::Vector<Aws::String>& value) { SetAuthorizedTargets(value); return *this;}

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline ExternalFilteringConfiguration& WithAuthorizedTargets(Aws::Vector<Aws::String>&& value) { SetAuthorizedTargets(std::move(value)); return *this;}

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline ExternalFilteringConfiguration& AddAuthorizedTargets(const Aws::String& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline ExternalFilteringConfiguration& AddAuthorizedTargets(Aws::String&& value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(std::move(value)); return *this; }

    /**
     * <p>List of third-party application <code>ARNs</code> integrated with Lake
     * Formation.</p>
     */
    inline ExternalFilteringConfiguration& AddAuthorizedTargets(const char* value) { m_authorizedTargetsHasBeenSet = true; m_authorizedTargets.push_back(value); return *this; }

  private:

    EnableStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizedTargets;
    bool m_authorizedTargetsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
