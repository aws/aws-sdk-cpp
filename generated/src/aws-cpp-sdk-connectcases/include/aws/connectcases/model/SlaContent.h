/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/SlaConfiguration.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Represents the content of an SLA to be returned to agents.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SlaContent">AWS
   * API Reference</a></p>
   */
  class SlaContent
  {
  public:
    AWS_CONNECTCASES_API SlaContent() = default;
    AWS_CONNECTCASES_API SlaContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API SlaContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an SLA configuration.</p>
     */
    inline const SlaConfiguration& GetSlaConfiguration() const { return m_slaConfiguration; }
    inline bool SlaConfigurationHasBeenSet() const { return m_slaConfigurationHasBeenSet; }
    template<typename SlaConfigurationT = SlaConfiguration>
    void SetSlaConfiguration(SlaConfigurationT&& value) { m_slaConfigurationHasBeenSet = true; m_slaConfiguration = std::forward<SlaConfigurationT>(value); }
    template<typename SlaConfigurationT = SlaConfiguration>
    SlaContent& WithSlaConfiguration(SlaConfigurationT&& value) { SetSlaConfiguration(std::forward<SlaConfigurationT>(value)); return *this;}
    ///@}
  private:

    SlaConfiguration m_slaConfiguration;
    bool m_slaConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
