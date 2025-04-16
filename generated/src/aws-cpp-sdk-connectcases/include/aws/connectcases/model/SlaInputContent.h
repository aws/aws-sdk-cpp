/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/SlaInputConfiguration.h>
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
   * <p>Represents the content of an SLA.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/SlaInputContent">AWS
   * API Reference</a></p>
   */
  class SlaInputContent
  {
  public:
    AWS_CONNECTCASES_API SlaInputContent() = default;
    AWS_CONNECTCASES_API SlaInputContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API SlaInputContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents an input SLA configuration.</p>
     */
    inline const SlaInputConfiguration& GetSlaInputConfiguration() const { return m_slaInputConfiguration; }
    inline bool SlaInputConfigurationHasBeenSet() const { return m_slaInputConfigurationHasBeenSet; }
    template<typename SlaInputConfigurationT = SlaInputConfiguration>
    void SetSlaInputConfiguration(SlaInputConfigurationT&& value) { m_slaInputConfigurationHasBeenSet = true; m_slaInputConfiguration = std::forward<SlaInputConfigurationT>(value); }
    template<typename SlaInputConfigurationT = SlaInputConfiguration>
    SlaInputContent& WithSlaInputConfiguration(SlaInputConfigurationT&& value) { SetSlaInputConfiguration(std::forward<SlaInputConfigurationT>(value)); return *this;}
    ///@}
  private:

    SlaInputConfiguration m_slaInputConfiguration;
    bool m_slaInputConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
