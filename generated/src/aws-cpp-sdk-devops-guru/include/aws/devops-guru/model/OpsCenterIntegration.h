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
   * Amazon Web Services Systems Manager OpsCenter for each created insight.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/OpsCenterIntegration">AWS
   * API Reference</a></p>
   */
  class OpsCenterIntegration
  {
  public:
    AWS_DEVOPSGURU_API OpsCenterIntegration() = default;
    AWS_DEVOPSGURU_API OpsCenterIntegration(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API OpsCenterIntegration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVOPSGURU_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Specifies if DevOps Guru is enabled to create an Amazon Web Services Systems
     * Manager OpsItem for each created insight. </p>
     */
    inline OptInStatus GetOptInStatus() const { return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(OptInStatus value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline OpsCenterIntegration& WithOptInStatus(OptInStatus value) { SetOptInStatus(value); return *this;}
    ///@}
  private:

    OptInStatus m_optInStatus{OptInStatus::NOT_SET};
    bool m_optInStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
