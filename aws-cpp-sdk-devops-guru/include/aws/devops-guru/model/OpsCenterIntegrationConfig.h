/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/OptInStatus.h>
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
namespace DevOpsGuru
{
namespace Model
{

  /**
   * <p> Information about whether DevOps Guru is configured to create an OpsItem in
   * AWS Systems Manager OpsCenter for each created insight. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/OpsCenterIntegrationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_DEVOPSGURU_API OpsCenterIntegrationConfig
  {
  public:
    OpsCenterIntegrationConfig();
    OpsCenterIntegrationConfig(Aws::Utils::Json::JsonView jsonValue);
    OpsCenterIntegrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Specifies if DevOps Guru is enabled to create an AWS Systems Manager OpsItem
     * for each created insight. </p>
     */
    inline const OptInStatus& GetOptInStatus() const{ return m_optInStatus; }

    /**
     * <p> Specifies if DevOps Guru is enabled to create an AWS Systems Manager OpsItem
     * for each created insight. </p>
     */
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }

    /**
     * <p> Specifies if DevOps Guru is enabled to create an AWS Systems Manager OpsItem
     * for each created insight. </p>
     */
    inline void SetOptInStatus(const OptInStatus& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }

    /**
     * <p> Specifies if DevOps Guru is enabled to create an AWS Systems Manager OpsItem
     * for each created insight. </p>
     */
    inline void SetOptInStatus(OptInStatus&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }

    /**
     * <p> Specifies if DevOps Guru is enabled to create an AWS Systems Manager OpsItem
     * for each created insight. </p>
     */
    inline OpsCenterIntegrationConfig& WithOptInStatus(const OptInStatus& value) { SetOptInStatus(value); return *this;}

    /**
     * <p> Specifies if DevOps Guru is enabled to create an AWS Systems Manager OpsItem
     * for each created insight. </p>
     */
    inline OpsCenterIntegrationConfig& WithOptInStatus(OptInStatus&& value) { SetOptInStatus(std::move(value)); return *this;}

  private:

    OptInStatus m_optInStatus;
    bool m_optInStatusHasBeenSet;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
